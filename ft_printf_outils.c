int ft_hexa(unsigned int nb)
{
    int len;
    char ch[] = {'0', '1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

    len = 0;

    if (nb > 16)
	{
		len += ft_hexa(nb / 16);
		len += ft_hexa(nb % 16);
	}
    else
    {
        ft_putchar(ch[nb]);
        len++;
    }
    return (len);
}

int ft_hexa(unsigned int nb)
{
    int len;
    char ch[] = {'0', '1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    len = 0;

    if (nb > 16)
	{
		len += ft_hexa(nb / 16);
		len += ft_hexa(nb % 16);
	}
    else
    {
        ft_putchar(ch[nb]);
        len++;
    }
    return (len);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		len++;
	}
	return (len);
}
int	ft_putnbr_unsigned(int nb)
{
	int len;

    len = ft_size(nb);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (len);
}

unsigned int	ft_size(int nb)
{
	unsigned int	len;

	len = 0;
	if (nb < 0)
		len += 1;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	int len;

	len = ft_size(nb);
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (len);
}
int main() {
    int number = -2147483648;
 int length = ft_putnbr(number);

    printf("\nLength of %d: %u\n", number, length);

    return 0;
}
