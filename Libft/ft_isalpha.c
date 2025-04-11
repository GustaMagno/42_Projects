#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > 122 || c < 65)
		return (0);
	if (c > 90 && c < 97)
		return (0);
	return (1);
}
