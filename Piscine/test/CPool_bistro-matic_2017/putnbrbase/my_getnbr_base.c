/*
** EPITECH PROJECT, 2017
** my_getnbr_base
** File description:
** converts a char * representing a number to an int in a given base
*/

int	is_in(char c, char const *digits)
{
	int	i;

	i = 0;
	while (digits[i] != '\0') {
		if (c == digits[i])
			return (1);
		i++;
	}
	return (0);
}

int	my_get_numlen(char const *str, char const *digits)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (is_in(str[i], digits) == 1))
		i++;
	return (i);
}

int	get_base_len(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_sign(char const *str)
{
	char	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] < '0' || str[i] > '9') {
		if (str[i] == '-' && sign == -1)
			sign = 1;
		if (str[i] == '-' && sign == 1)
			sign = -1;
		i++;
	}
	return (sign);
}

int	power(int num, int pow)
{
	if (pow > 1)
		return (num * power(num, pow - 1));
	if (pow == 1)
		return (num);
	if (pow == 0)
		return (1);
	if (pow < 0)
		return (0);
}

int	my_getnbr_base(char const *str, char const *base)
{
	int	sign;
	int	i;
	int	numlen;
	int	num;
	int	base_len;

	sign = get_sign(str);
	i = 0;
	base_len = get_base_len(base);
	while (str[i] != '\0' && is_in(str[i], base) == 0)
		i++;
	numlen = my_get_numlen(&str[i], base);
	num = 0;
	while (numlen > 0) {
		num += ((str[i] - base[0]) * power(base_len, numlen));
		numlen--;
		i++;
	}
	num = num * sign / base_len;
	return (num);
}

int main()
{
	int num;
	
	num = my_getnbr_base("10", "01");
	printf("%d\n", num);
}
