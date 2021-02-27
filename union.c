#include <unistd.h>
#include <stdio.h>

int	includes(char *str, char c)
{
	while (str && *str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	arr[256];
	size_t	i;
	size_t	j;

	if (argc != 3)
		return (write(1, "\n", 1));
	i = 0;
	j = 0;
	while (i < 256)
	{
		arr[i] = 0;
		i++;
	}
	i = 1;
	while (i <= 2)
	{
		while (argv[i][j])
		{
			if (!includes(arr, argv[i][j]))
			{
				arr[ft_strlen(arr)] = argv[i][j];
				write(1, &argv[i][j], 1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	write (1, "\n", 1);
}