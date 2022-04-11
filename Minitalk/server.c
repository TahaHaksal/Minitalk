#include "include/minitalk.h"

char *ptr;

void	print_char(char *ptr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (ptr[i])
	{
		count = 2 * count + ptr[i] - 48;
		i++;
	}
	ft_printf("%c", count);
}

void	signalHandler(int n)
{
	static int	i;

	if (i == 0)
		ptr = malloc(9);
	if (n == SIGUSR1)
		ptr[i % 8] = '1';
	else if (n == SIGUSR2)
		ptr[i % 8] = '0';
	i++;
	if (i % 8 == 0)
		print_char(ptr);
}

int	main()
{
	ft_printf("PID is: %d\n", getpid());
	struct sigaction sa;
	ft_memset(&sa, '\0', sizeof(sa));
	sa.sa_handler = &signalHandler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1);
	if (ptr)
		free(ptr);
}
