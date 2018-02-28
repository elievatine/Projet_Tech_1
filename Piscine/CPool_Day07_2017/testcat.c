char	*my_strcat(char	*dest, char const *src)
{
	int a;

	a = 0;
	while (dest[a] != '\0') {
		my_putchar(dest[a]);
		a++;
		}
	while (src[a] != '\0') {
		my_putchar(src[a]);
		a++;
		}
}
