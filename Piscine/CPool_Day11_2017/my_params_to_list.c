/*
** EPITECH PROJECT, 2017
** my_params_to_list.c
** File description:
** creat nez list from command line arguments
*/

int	add_element (void t_list, *list, char *av)
{
	struct s_list *element

		element = malloc(sizeof(*elemtent));
	element->data = argv[0];
	element->next = *list;
	*list = element;
	return(0);
}

linked_list_t *my_params_to_list(int argc, char const **argv)
{
	t_list *list;
	int	i;

	for (i = 0 ; i < argc ; i++)
		add_element(&list, argv[i]);
	return (list);
}
