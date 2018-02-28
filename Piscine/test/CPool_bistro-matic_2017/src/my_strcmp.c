/*
** EPITECH PROJECT, 2017
** strcmp
** File description:
** compares two strings and returns the result
*/

int	my_strcmp(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (s1[i] == s2[i]) {
		while ((s1[i] == s2[i]) &&
		       s1[i] != '\0' && s2[i] != '\0')
			i++;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
	}
	if (s1[i] < s2[i])
		return (-1);
	if (s1[i] > s2[i])
		return (1);
	return (84);
}
