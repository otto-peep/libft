#include <string.h>
#include <unistd.h>
#include "libft.h"

void	fonction(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
		a[i] = a[i] + 47;
		write (1, "a", 1);
		i++;
}


int	main(int argc, char **argv)
{
	argc = 0;

	ft_putstr(argv[1]);
	ft_striter(argv[1], fonction);
	ft_putstr(argv[1]);
	ft_putstr("lol");
	return (0);
}
