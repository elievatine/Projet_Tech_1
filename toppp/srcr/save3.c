/*
** EPITECH PROJECT, 2017
** save3.c
** File description:
** fonction
*/

#include <stdio.h>
#include "../include/incl.h"

void	cle(t_framebuffer *framebuffer, unsigned int x, unsigned int y, unsigned int R)
{
	sfColor color;

	color.r = 0;
	color.g = 128;
	color.b = 255;
	color.a = 10;
	y = 0;
	while (y < framebuffer->height)
	{
		x = 0;
		while (x < framebuffer->width)
		{
			if (((2*x)+(2*y))*((2*x)+(2*y))== R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 20 ;
		}
		y = y + 1;
	}
}


void	cle1(t_framebuffer *framebuffer, unsigned int x, unsigned int y, unsigned int R)
{
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
			if (((2*x)+(2*y))*((2*x)+(2*y))== R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 1 ;
		}
		y = y + 20;
	}
}


void	le1(t_framebuffer *framebuffer, unsigned int a, unsigned int b, unsigned int R)
{
	unsigned int x;
	unsigned int y;
	sfColor color;

	color.r = 0;
	color.g = 0;
	color.b = 0;
	color.a = 15;
	y = 0;
	while (y < framebuffer->height)
	{
		x = 0;
		while (x < framebuffer->width)
		{
			if ((x-a)*(x-a) + (y-b)*(y-b) <= R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 1;
		}
		y = y + 1;
	}
}

void	le2(t_framebuffer *framebuffer, unsigned int a, unsigned int b, unsigned int R)
{
	unsigned int x;
	unsigned int y;
	sfColor color;

	color.r = 0;
	color.g = 0;
	color.b = 0;
	color.a = 255;
	y = 0;
	while (y < framebuffer->height)
	{
		x = 0;
		while (x < framebuffer->width)
		{
			if ((x-a)*(x-a) + (y-b)*(y-b) <= R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 1;
		}
		y = y + 1;
	}
}



void third_save()
{
	t_all all;
	t_framebuffer framebuffer = framebuffer_create(1920, 1080);
	float seconds;
	int		R = 0;
	sfEvent event;
	int j = 0;

	all.window = createMyWindow(1920, 1080);
	all.texture = sfTexture_create(1920, 1080);
	all.fb = &framebuffer;
	all.sprite = sfSprite_create();
	all.clock = sfClock_create();

	while (sfRenderWindow_isOpen(all.window)) {
		while (sfRenderWindow_pollEvent(all.window, &event)) {
			if (event.key.code == sfKeyQ)
				sfRenderWindow_close(all.window);
		}
		all.time = sfClock_getElapsedTime(all.clock);
		seconds = all.time.microseconds / 1000000.0;
		if ((seconds >= 0 && seconds <= 2) || (seconds >= 4 && seconds <= 6) || (seconds >= 8 && seconds <= 10) || (seconds >= 12 && seconds <= 14))
			cle(all.fb, 200, 200, R++);
		if ((seconds >= 2 && seconds <= 4) || (seconds >= 6 && seconds <= 8) || (seconds >= 10 && seconds <= 12) || (seconds >= 14 && seconds <= 16))
			cle1(all.fb, 200, 200, R++);
		if ((seconds >= 16 && seconds <= 18) || (seconds >= 20 && seconds <= 22) || (seconds >= 24 && seconds <= 26) || (seconds >= 28 && seconds <= 30))
			cle(all.fb, 200, 200, R++);
		if ((seconds >= 18 && seconds <= 20) || (seconds >= 22 && seconds <= 24) || (seconds >= 26 && seconds <= 28) || (seconds >= 30 && seconds <= 32))
			cle1(all.fb, 200, 200, R++);
		if ((seconds >= 32 && seconds <= 34) || (seconds >= 36 && seconds <= 38) || (seconds >= 40 && seconds <= 42) || (seconds >= 44 && seconds <= 46))
			cle(all.fb, 200, 200, R++);
		if ((seconds >= 34 && seconds <= 36) || (seconds >= 38 && seconds <= 40) || (seconds >= 42 && seconds <= 44) || (seconds >= 46 && seconds <= 48))
			cle1(all.fb, 200, 200, R++);

		if (seconds >= 46 && seconds <= 70)
			le1(all.fb, all.fb->width / 2, all.fb->height / 2, j++);
		if (seconds >= 70) {
			sfClock_restart(all.clock);
			R = 0;
		}
		sfTexture_updateFromPixels(all.texture, all.fb->pixels, 1920, 1080, 0, 0);
		sfSprite_setTexture(all.sprite, all.texture, sfFalse);
		sfRenderWindow_drawSprite(all.window, all.sprite, NULL);
		sfRenderWindow_display(all.window);
	}
	closed(&all, framebuffer);
}
