#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	get_next_line(char **line)
{
	char	*str;
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	if (!(str = malloc(10000)))
		return (-1);
	while (i < 10000)
	{
		str[i] = '\0';
		i++;
	}
	while (read(0, &c, 1) > 0)
	{
		if (c != '\n')
		{
			str[j] = c;
			j++;
		}
		else
		{
			*line = str;
			return (1);
		}
	}
	*line = str;
	return (0);
}
