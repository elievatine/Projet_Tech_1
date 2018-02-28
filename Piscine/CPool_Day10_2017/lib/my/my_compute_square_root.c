/*
** EPITECH PROJECT, 2017
** my_compute_square_root.c
** File description:
** racine carée
*/

int	my_compute_square_root(int nb)
{
	int z;
	int squ;

	z = 0;
	squ = 0;
	while (squ != nb){
		squ = z * z;
			z++;
			}
		if (squ == nb)
		return(z - 1);
}
