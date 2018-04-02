/*
** EPITECH PROJECT, 2017
** save2.c
** File description:
** fonction
*/

#include <stdio.h>
#include "../include/incl.h"

void	cir(t_framebuffer *framebuffer,unsigned int a, unsigned int b, unsigned int R)
{
	unsigned int x;
	unsigned int y;
	sfColor color;

	color.r = 0;
	color.g = 0;
	color.b = 0;
	color.a = 250;
	y = 0;
	while (y < framebuffer->height)
	{
		x = 0;
		while (x < framebuffer->width)
		{
			if ((x-a)*(x-a) + (y-b)*(y-b) <= R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 1 ;
		}
		y = y + 1;
	}
}

void draw_star(t_framebuffer *buffer)
{
	int x = rand() % 1920;
	int y = rand() % 1080;
	int r = rand() % 255;
	int g = rand() % 255;
	int b = rand() % 255;

	my_put_pixel(buffer, x, y, sfColor_fromRGB(r, g, b));
}

void sec_save()
{
	t_all all;
	t_framebuffer framebuffer = framebuffer_create(1920, 1080);
	sfEvent event;
	float seconds;
	int r = 0;

	all.fb = &framebuffer;
	all.window = createMyWindow(1920, 1080);
	all.texture = sfTexture_create(1920, 1080);
	all.sprite = sfSprite_create();
	all.clock = sfClock_create();

	while (sfRenderWindow_isOpen(all.window)) {
		while (sfRenderWindow_pollEvent(all.window, &event)) {
			if (event.key.code == sfKeyQ)
				sfRenderWindow_close(all.window);
		}
		if (seconds >= 0 && seconds <= 10) {
			draw_star(all.fb);
			draw_star(all.fb);
			draw_star(all.fb);
			draw_star(all.fb);
			draw_star(all.fb);
			draw_star(all.fb);
		}
		if (seconds >= 10 && seconds <= 23) {
			cir(all.fb, 1, 1, r++);
			cir(all.fb, 900, 400, r++);
			cir(all.fb, 1920, 200, r++);
		}
		if (seconds >= 24) {
			sfClock_restart(all.clock);
			r = 0;
		}
		all.time = sfClock_getElapsedTime(all.clock);
		seconds = all.time.microseconds / 1000000.0;
		sfTexture_updateFromPixels(all.texture, all.fb->pixels, 1920, 1080, 0, 0);
		sfSprite_setTexture(all.sprite, all.texture, sfFalse);
		sfRenderWindow_drawSprite(all.window, all.sprite, NULL);
		sfRenderWindow_display(all.window);
	}
	closed(&all, framebuffer);
}
