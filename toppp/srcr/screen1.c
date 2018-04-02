/*
** EPITECH PROJECT, 2017
** fct1.c
** File description:
** fonction1
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <math.h>

#include "../include/incl.h"

void	circle(t_framebuffer *framebuffer, int a, int b, int R)
{
	int x;
	int y;
	sfColor color;

	color.r = 255;
	color.g = 255;
	color.b = 255;
	color.a = 10;
	y = 0;
	while (y < framebuffer->height)
	{
		x = 0;
		while (x < framebuffer->width)
		{
			if ((x-a)*(x-a) + (y-b)*(y-b) <= R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 40 ;
		}
		y = y + 1;
	}
}

void	circle1(t_framebuffer *framebuffer, int a, int b, int R)
{
	int x;
	int y;
	sfColor color;

	color.r = 0;
	color.g = 0;
	color.b = 0;
	color.a = 10;
	y = 0;
	while (y < framebuffer->height)
	{
		x = 0;
		while (x < framebuffer->width)
		{
			if ((x-a)*(x-a) + (y-b)*(y-b) <= R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 120 ;
		}
		y = y + 1;
	}
}

int		closed()
{
	sfRenderWindow	*window;
	t_framebuffer	fb;
	sfEvent event;
	sfTexture *texture;
	sfSprite *sprite;

	sfTexture_destroy(texture);
	sfSprite_destroy(sprite);
	framebuffer_destroy(fb);
	sfRenderWindow_destroy(window);
	return (0);
}

void	circle_screen()
{
	sfRenderWindow	*window;
	t_framebuffer	fb;
	sfUint8	*pixels;
	sfTexture *texture;
	sfSprite *sprite;
	sfClock *clock;
	sfTime time;
	float seconds;
	int		r;
	int x = rand() % 100;
	int y = rand() % 100;
	sfEvent event;
	window = createMyWindow(1920, 1080);
	fb = framebuffer_create(1920, 1080);
	clock = sfClock_create();
			while (sfRenderWindow_isOpen(window)) {
				while (sfRenderWindow_pollEvent(window, &event))
					if (event.key.code == sfKeyQ)
						sfRenderWindow_close(window);
				time = sfClock_getElapsedTime(clock);
				seconds = time.microseconds / 1000000.0;
				if (seconds >= 0 && seconds <= 1 || seconds >= 7 && seconds <= 9 || seconds >= 13 && seconds <= 15) {
					circle(&fb, 1, 1, r++);
					circle1(&fb, fb.width, fb.height, r++);
				}
				if (seconds >= 3 && seconds <= 4 || seconds >= 10 && seconds <= 11) {
			//		circle1(&fb, fb.width, fb.height, r += 1);
					circle(&fb, 1, 1, r++);
				}
				if (seconds >= 5 && seconds <= 6 || seconds >= 11 && seconds <= 13) {
					circle1(&fb, 1, 1, r += 1);
					circle(&fb, fb.width, fb.height, r++);
				}
				if (seconds >= 15) {
					sfClock_restart(clock);
					x = fb.width;
					y = fb.height;
					r = 0;
				}
				sfSprite_setTexture(sprite, texture, sfFalse);
				sfTexture_updateFromPixels(texture, fb.pixels, 1920, 1080, 0, 0);
				sfRenderWindow_display(window);
		}
	closed();
}
