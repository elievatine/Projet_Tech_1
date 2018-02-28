#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
	int b;

	b = 0;
	while (str[b])
	{
		b++;
	}
	return (b);
}

int	my_ischar(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}

char *my_strdup(char const *src)
{
	char	*copy;
	int	a;
	int	b;

	b = my_strlen(src);
	a = 0;
	copy = malloc(sizeof(char) * (b + 1));
	if (copy == NULL)
		return NULL;
	while (my_ischar(src[a])) {
		copy[a] = src[a];
		a++;
	}
	copy[a] = '\0';
	return (copy);
}

int	my_word_count(char const *str)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (str[i] != 0) {
		if ((i == 0) && my_ischar(str[i]) == 1)
			m++;
		else if (!my_ischar(str[i - 1]) && my_ischar(str[i]))
			m++;
		i++;
	}
	return (m);
}

char **my_str_to_word_array(char const *str)
{
	char **result;
	int	q;
	int	w;

	w = 0;
	result = malloc(sizeof(char*) * (my_word_count(str) + 1));
	if (result == NULL)
		return (NULL);
	q = 0;
	while (str[q]) {
		if ((q == 0) && my_ischar(str[q]) == 1)
			result[w++] = my_strdup(&str[q]);
		else if (!my_ischar(str[q - 1]) && my_ischar(str[q]))
			result[w++] = my_strdup(&str[q]);
		q++;
	}
	result[w] = NULL;
	return (result);
}

int main()
{
	int i = 0;
	char **test = my_str_to_word_array("C'est la reussite de toute ma vie ");
	while (test[i])
	{
		printf("%s\n", test[i++]);
	}
	return (0);
}
