/*
** EPITECH PROJECT, 2017
** infinadd 
** File description:
** performs an infinite addition on a string
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>

char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
int my_strlen(char const *);
char* my_revstr(char *str);
int my_getnbr(char const *str);
int my_strcmp(char const *, char const *);

#endif
