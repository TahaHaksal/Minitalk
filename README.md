# Minitalk
Two communicating process using only Linux signals

Allowed functions:
	-write,
	-ft_printf,
	-signal,
	-sigemptyset,
	-sigaction,
	-sigaddset,
	-kill,
	-getpid,
	-malloc,
	-free,
	-pause,
	-sleep,
	-usleep,
	-exit

Description:
	You must create a communication program in the form of a client and a server using Linux signals

Requirements:
	-The server must be started first, printing its pid and standby.
	-The client takes two parameter: the server's pid and the string that is going to be displayed on server
	-The server has to display the string rather quickly.
	-Server and client can only communicate via the Linux signals.
	-You can only use SIGUSR1 and SIGUSR2
	-Bonus points if the server can display unicode characters.

Goal of the project:
	-Learn how Linux signals work.
	-Solve the problem of using only signals to communicate a string.
	-Learn how Char and unsigned Chars work in byte form.
