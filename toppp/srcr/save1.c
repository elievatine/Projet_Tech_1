/*
** EPITECH PROJECT, 2017
** save1.c
** File description:
** fonction
*/

#include <stdio.h>
#include "../include/incl.h"

void	circle(t_framebuffer *framebuffer,unsigned int a, unsigned int b, unsigned int R)
{
	unsigned int x;
	unsigned int y;
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

void	circle1(t_framebuffer *framebuffer, unsigned int a, unsigned int b, unsigned int R)
{
	unsigned int x;
	unsigned int y;
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


void first_save()
{
	t_all all;
	t_framebuffer framebuffer = framebuffer_create(1920, 1080);
	float seconds;
	int		r = 0;
	//		int x = rand() % 100;
	//		int y = rand() % 100;
	sfEvent event;

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
		if ((seconds >= 0 && seconds <= 1) || (seconds >= 7 && seconds <= 9) || (seconds >= 13 && seconds <= 15)) {
			circle(all.fb, 1, 1, r++);
			circle1(all.fb, all.fb->width, all.fb->height, r++);
		}
		if ((seconds >= 3 && seconds <= 4) || (seconds >= 10 && seconds <= 11)) {
			circle(all.fb, 1, 1, r++);
		}
		if ((seconds >= 5 && seconds <= 6) || (seconds >= 11 && seconds <= 13)) {
			circle1(all.fb, 1, 1, r += 1);
			circle(all.fb, all.fb->width, all.fb->height, r++);
		}
		if (seconds >= 15) {
			sfClock_restart(all.clock);
			r = 0;
		}
		sfTexture_updateFromPixels(all.texture, all.fb->pixels, 1920, 1080, 0, 0);
		sfSprite_setTexture(all.sprite, all.texture, sfFalse);
		sfRenderWindow_drawSprite(all.window, all.sprite, NULL);
		sfRenderWindow_display(all.window);
	}
	closed(&all, framebuffer);
}/*
int main(int ac, char **av)
{
	if (ac == 2) {
		if (av[1][0] == '1')
			first_save();
//		if (av[1][0] == '2')
//			sec_save();
	}
}*/
