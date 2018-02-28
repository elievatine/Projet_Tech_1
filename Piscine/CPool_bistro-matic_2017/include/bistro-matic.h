/*
** EPITECH PROJECT, 2017
** bistro_matic
** File description:
** calculatrice qui gere les nombres infinis
*/

#ifndef BISTRO_MATIC_H_
#define BISTRO_MATIC_H_

#include <stdlib.h>

#define OP_OPEN_PARENT_IDX	0
#define OP_CLOSE_PARENT_IDX	1
#define OP_PLUS_IDX		2
#define OP_SUB_IDX		3
#define OP_NEG_IDX		3
#define OP_MULT_IDX		4
#define OP_DIV_IDX		5
#define OP_MOD_IDX		6

#define EXIT_USAGE		84
#define EXIT_BASE		84
#define EXIT_SIZE_NEG		84
#define EXIT_MALLOC		84
#define EXIT_READ		84
#define EXIT_OPS		84

#define SYNTAX_ERROR_MSG	"syntax error"
#define ERROR_MSG		"error"

char	*eval_expr(char const *base, char const *ops, char const *expr, unsigned int size);
void    my_putstr(char const *);
int     my_strlen(char const *);
int     my_atoi(char *);
static void     check_base(char const *base);
static void     check_ops(char const *ops);
static char     *get_expr(unsigned size);

#endif
