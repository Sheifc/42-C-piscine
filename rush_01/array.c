#include <unistd.h>

void	print_criteria(int arr[4][4])
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 3)
		{
			c = arr[i][j] + 48;
			write(1, &c, 1);
			write(1, " ", 1);
		}
		c = arr[i][j] + 48;
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}

int	main(void)
{
	print_criteria();
}
