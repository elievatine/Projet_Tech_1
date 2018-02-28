/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** parses a string to a mathematical expression
*/

#ifndef ALL_H_
#define ALL_H_

#include <unistd.h>
#include <stdlib.h>

typedef struct s_token
{
	char *token;
	struct s_token *next;
	struct s_token *prev;
} t_token;

int	my_put_nbr(int);
char	*my_get_char(int);
int	my_atoi(char *);
char	*my_strtol(char *, char **, char *);
t_token	*tokenizer(char *, char *);
int	remove_token_from_list(t_token **);
char	*addition(char *nbr1, char *nbr2);
char	*substraction(char *nbr1, char *nbr2);
char	*multiplication(char *nbr1, char *nbr2);
char	*division(char *nbr1, char *nbr2);
char	*modulo(char *, char *);
void	go_to_start(t_token **);
t_token	*operate(t_token *);
int	remove_brackets(t_token **);
char	*infinadd(char *, char *);
char	*infindiv(char *, char *, char);
int	remove_brackets(t_token **);
int	detect_brackets(t_token *);

#endif
