#include "../include/incl.h"
#include <stdio.h>

void	Julia(t_framebuffer *framebuffer)
{
	int x1 = -1;
	int x2 = 1;
	int y1 = -1.2;
	int y2 = 1.2;
	int zoom = 100;
	int iteration_max = 15;
	int image_x = (x2 - x1) * zoom;
	int image_y = (y2 - y1) * zoom;
	int c_r = 0.285;
	int c_i = 0.01;
	int x = 0;
	int y = 0;
	int z_r = x / zoom + x1;
	int z_i = y / zoom + y1;
	int i = 0;
	int tmp = z_r;
	sfColor color;

	color.r = 250;
	color.g = 0;
	color.b = 0;
	color.a = 10;

	for (x = 0; x < image_x; x = x + 1) {
		for (y = 0; y < image_y; y = y + 1) {
			while ((z_r*z_r + z_i*z_i < 4) && (i < iteration_max)) {
				z_r = z_r*z_r - z_i*z_i + c_r;
				z_i = 2*z_i*tmp + c_i;
				i = i+1;
			}
			if (i == iteration_max) {
				my_put_pixel(framebuffer, x, y, color);
				printf("n");
			}
		}
	}
}

void sec_save()
{
	t_all all;
	t_framebuffer framebuffer = framebuffer_create(1920, 1080);
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
		Julia(all.fb);
		sfTexture_updateFromPixels(all.texture, all.fb->pixels, 1920, 1080, 0, 0);
		sfSprite_setTexture(all.sprite, all.texture, sfFalse);
		sfRenderWindow_drawSprite(all.window, all.sprite, NULL);
		sfRenderWindow_display(all.window);
	}
	closed(&all, framebuffer);
}
/*
int main(int ac, char **av)
{
	if (ac == 2) {
		if (av[1][0] == '2')
			sec_save();
	}
}*/
