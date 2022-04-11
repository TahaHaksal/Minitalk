#include "include/minitalk.h"

char	*binrev(char *ptr)
{
	int		len;
	int		i;
	char	tmp;


	i = 0;
	len = ft_strlen(ptr) - 1;
	while (i < 4)
	{
		tmp = ptr[i];
		ptr[i] = ptr[len];
		ptr[len] = tmp;
		i++;
		len--;
	}
	return (ptr);
}

void	send_bin(int pid, char *bin)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (bin[i] == '1')
		{
			usleep(100);
			kill(pid, SIGUSR1);
		}
		else
		{
			usleep(100);
			kill(pid, SIGUSR2);
		}
		i++;
	}
}

void	send_signals(int pid, unsigned char *str)
{
	int		i;
	char	*bin;

	bin = malloc(9 * sizeof(unsigned char));
	while (*str != '\0')
	{
		i = 0;
		while (i < 8)
		{
			if (*str % 2 == 1)
				bin[i] = '1';
			else
				bin[i] = '0';
			*str /= 2;
			i++;
		}
		bin = binrev(bin);
		send_bin(pid, bin);
		str++;
	}
	free(bin);
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_printf("Usage: ./client [PID] [STRING]");
		return (1);
	}
	send_signals(atoi(av[1]), (unsigned char *)av[2]);
	return (0);
}
