

#include <unistd.h>

void	ft_print_digits (void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write (1, &i, 1);
		 i++;
	}
}
int	main()
{
	ft_print_digits();
	return (0);
}
