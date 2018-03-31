#include "../include/incl.h"

void	rectangle(t_framebuffer *framebuffer, int a, int b, int R)
{
	int x;
	int y;
	sfColor color;

	color.r = 0;
	color.g = 255;
	color.b = 0;
	color.a = 255;
	y = 10;
	while (y < framebuffer->height)
	{
		x = 10;
		while (x < framebuffer->width)
		{
			if (((2*x) + (2*y)) == R)
				my_put_pixel(framebuffer, x, y, color);
			x = x + 20;
		}
		y = x + 20;
	}
}

void	rect()
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

	while (sfRenderWindow_isOpen(window)) {
		rectangle(&fb, fb.width, fb.height, r++);
		sfTexture_updateFromPixels(texture, fb.pixels, 1920, 1080, 0, 0);
		sfSprite_setTexture(sprite, texture, sfFalse);
		sfRenderWindow_drawSprite(window, sprite, NULL);
		sfRenderWindow_display(window);
	}
}

void	all()
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

	while (sfRenderWindow_isOpen(window)) {
		draw_star(&fb);
		rectangle(&fb, fb.width, fb.height, r++);
		circle(&fb, fb.width , fb.height , r++);
		sfTexture_updateFromPixels(texture, fb.pixels, 1920, 1080, 0, 0);
		sfSprite_setTexture(sprite, texture, sfFalse);
		sfRenderWindow_drawSprite(window, sprite, NULL);
		sfRenderWindow_display(window);
	}
}
