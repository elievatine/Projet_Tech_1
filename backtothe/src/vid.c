/*
** EPITECH PROJECT, 2017
** vid.c
** File description:
** main
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include <unistd.h>

#include "../include/incl.h"

sfRenderWindow	*createMyWindow(unsigned int width, unsigned int height)
{
	sfRenderWindow	*window;
	sfVideoMode	video_mode;

	video_mode.width = width;
	video_mode.height = height;
	video_mode.bitsPerPixel = 32;
	window = sfRenderWindow_create(video_mode, "my Window", sfDefaultStyle, NULL);
	return (window);
}

void	putdash()
{
	my_putstr("animation rendering in a CSFML window.\n");
	my_putstr("\n USAGE\n ./my_screensaver \n[OPTIONS] set_random");
	my_putstr("\n ID 1 : ((av[1][0]) = '1') screen saver with a circle growing\n");
	my_putstr(" ID 2 : ((av[1][0]) = '2') screen saver with random pixels apparing gradually");
	my_putstr("\nOPTIONS\n-h       print the usage and quit.");

}
int		main(int ac, char **av)
{
	if (ac == 2) {
		while (av[1][0] == '-' && av[1][1] == 'h')
		{
			putdash();
			return (0);
		}
		if (av[1][0] =='1')
			circle_screen();
		if (av[1][0] == '2')
			pixies();
		if (av[1][0] == '3')
			rect();
		if (av[1][0] == '4')
			all();
	}
	else {
		my_putstr("bad arguments");
		exit(82);
	}
	closed();
}

