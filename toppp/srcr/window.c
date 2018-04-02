/*
** EPITECH PROJECT, 2018
** window.c
** File description:
** win
*/

#include "../include/incl.h"

void display(t_all *all)
{

	sfTexture_updateFromPixels(all->texture, all->fb->pixels, 1920, 1080, 0, 0);
	sfRenderWindow_display(all->window);
}

void closed(t_all *all, t_framebuffer fb)
{
	sfTexture_destroy(all->texture);
	framebuffer_destroy(fb);
	sfRenderWindow_destroy(all->window);
	sfClock_destroy(all->clock);
}
