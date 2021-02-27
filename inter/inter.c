#include <stdio.h>
#include <unistd.h>

int	includes(char *str, char c)
{
	while (str && *str)
	{
		if (*str == c)
			return (1);
	}
	return (0);
}

int	includes_lim(char *str, char c, size_t pos)
{
	size_t	i;

	i = 0;
	while (str && str[i] && i <= pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}


int	main (int argc, char **argv)
{
	size_t	i;

	i = 0;
	if (argc != 3)
		return ((int) write(1, "\n", 1));
	if (!argv[1] || !argv[2])
		return ;
	while (argv[1][i] && argv[2][i])
	{

	}
}