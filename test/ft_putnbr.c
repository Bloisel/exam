

void	ft_ptnbr(int n)
{
	int	nb;
	char	c;
	int size;
	int	i;

	nb = 0;
	size = ft_putnbr(n);
	i = 0;
	while (++i <= size)
	{
		nb *= 10;
		nb += n % 10;
		n /= 10;
	}
	i = 0;
	while (++i <= size)
	{
		c = (nb % 10) + 48;
		write(1, &c, 1);
		nb /= 10;
	}
}
void   ft_putnbr0(int n)
{
    char	c;

	if (n == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		c = '-';
		write(1, &c, 1);
	}
	ft_ptnbr(n);
}