int	ft_isascii(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}