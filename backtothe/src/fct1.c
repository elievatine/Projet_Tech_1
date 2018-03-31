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

	color.r = 0;
	color.g = 0;
	color.b = 0;
	color.a = 50;
	y = 0;
	while (y < framebuffer->height)
	{
		x = 0;
		while (x < framebuffer->width)
		{
			if ((x-a)*(x-a) + (y-b)*(y-b) <= R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 5 ;
		}
		y = y + 2;
	}
}

void	circle1(t_framebuffer *framebuffer, int a, int b, int R)
{
	int x;
	int y;
	sfColor color;

	color.r = 255;
	color.g = 2;
	color.b = rand() % 40;
	color.a = 255;
	y = 5;
	while (y < framebuffer->height)
	{
		x = 5;
		while (x < framebuffer->width)
		{
			if ((x-a)*(x-a) + (y-b)*(y-b) <= R*R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 10;
		}
		y = y + 5;
	}
}

void	circle2(t_framebuffer *framebuffer, int a, int b, int R)
{
	int x;
	int y;
	sfColor color;

	color.r = 225;
	color.g = 255;
	color.b = 255;
	color.a = 100;
	y = 10;
	while (y < framebuffer->height)
	{
		x = 10;
		while (x < framebuffer->width)
		{
			if (((2*x) + (2*y)) == R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 10;
		}
		y = y + 5;
	}
}


int		closed()
{
	sfRenderWindow	*window;
	t_framebuffer	fb;
	sfTexture	*texture;
	sfSprite	*sprite;
	sfEvent event;

	//	while (sfRenderWindow_isOpen(window)) {
	//		if (event.key.code == sfKeyEscape)
	//			sfRenderWindow_close(window);
	sfRenderWindow_destroy(window);
	framebuffer_destroy(fb);
	sfTexture_destroy(texture);
	sfSprite_destroy(sprite);
	return (0);
}

void	circle_screen()
{
	sfRenderWindow	*window;
	t_framebuffer	fb;
	sfUint8	*pixels;
	//	sfClock *clock;
	//	sfTime time;
	float seconds;
	sfTexture	*texture;
	sfSprite	*sprite;
	int		r;
	sfEvent	*event;
	window = createMyWindow(1920, 1080);
	fb = framebuffer_create(1920, 1080);
	texture = sfTexture_create(1920, 1080);
	//	sprite = sfSprite_create();
	//	clock = sfClock_create();
	while (sfRenderWindow_isOpen(window)) {
		//			time = sfClock_getElapsedTime(clock);
		//			seconds = time.microseconds / 1000000.0;
		//				circle1(&fb, fb.width / rand() % 10, fb.height / rand() % 100, r++);
		circle(&fb, fb.width, fb.height, r++);
		//			if ((seconds >= 2 && seconds <= 4) || (seconds >= 5 && seconds <= 7) || (seconds >= 8 && seconds <= 10)){
		//				circle2(&fb, fb.width / rand() % 100, fb.height / rand() % 10, r++);
		//			sfClock_restart(clock);
	}
	sfTexture_updateFromPixels(texture, fb.pixels, 1920, 1080, 0, 0);
	sfSprite_setTexture(sprite, texture, sfFalse);
	sfRenderWindow_drawSprite(window, sprite, NULL);
	sfRenderWindow_display(window);
	//	}
}

void draw_star(t_framebuffer *buffer)
{
	int x = rand() % 1920;
	int y = rand() % 1080;
	int red = rand() % 255 + 1;
	int green = rand() % 255 + 1;
	int blue = rand() % 255 + 1;

	my_put_pixel(buffer, x, y, sfColor_fromRGB(red, green, blue));
}

void	pixies()
{
	sfRenderWindow	*window;
	t_framebuffer	fb;
	sfUint8	*pixels;
	sfTexture	*texture;
	sfSprite	*sprite;
	int		r;
	sfEvent	*event;
	window = createMyWindow(1920, 1080);
	fb = framebuffer_create(1920, 1080);
	texture = sfTexture_create(1920, 1080);
	sprite = sfSprite_create();

	draw_star(&fb);
	sfTexture_updateFromPixels(texture, fb.pixels, 1920, 1080, 0, 0);
	sfSprite_setTexture(sprite, texture, sfFalse);
	sfRenderWindow_drawSprite(window, sprite, NULL);
	sfRenderWindow_display(window);
}
