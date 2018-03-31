/*
** EPITECH PROJECT, 2018
** window.c
** File description:
** win
*/

#include "../include/incl.h"

void display(t_all *all)
{
//	sfRenderWindow *window;
//	sfSprite *sprite;
//	sfTexture *texture;
//	t_framebuffer fb;

	//	sfSprite_setTexture(sprite, texture, sfFalse);
	sfTexture_updateFromPixels(all->texture, all->fb->pixels, 1920, 1080, 0, 0);
	sfRenderWindow_display(all->window);
}

void closed(t_all *all, t_framebuffer fb)
{
//	sfRenderWindow	*window;
//	t_framebuffer	fb;
//	sfEvent event;
//	sfTexture *texture;
//	sfSprite *sprite;

	sfTexture_destroy(all->texture);
//	sfSprite_destroy(sprite);
	framebuffer_destroy(fb);
	sfRenderWindow_destroy(all->window);
	sfClock_destroy(all->clock);
//	return (0);
}
