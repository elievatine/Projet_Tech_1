/*
** EPITECH PROJECT, 2017
** fct1.c
** File description:
** fonction
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <math.h>

typedef struct s_framebuffer
{
	unsigned char	*pixels;
	unsigned int	width;
	unsigned int	height;
}	t_framebuffer;

t_framebuffer       framebuffer_create(int width, int height)
{
	t_framebuffer      framebuffer;
	int	n = (width * height * 4);

	if ((framebuffer.pixels = malloc((sizeof(sfUint8)) * (width * height * 4))) == NULL)
		return (framebuffer);
	for (int i = 0; i < n; i++)
		(framebuffer.pixels[i] = 0);
	framebuffer.width = width;
	framebuffer.height = height;
	return (framebuffer);
}

void	my_put_pixel(t_framebuffer *framebuffer, int x, int y, sfColor color)
{
	if (x < 0 || y < 0)
		return ;
	if (x > (*framebuffer).width || y > (*framebuffer).height)
		return ;
	(*framebuffer).pixels[((*framebuffer).width * y + x) * 4] = color.r;
	(*framebuffer).pixels[((*framebuffer).width * y + x) * 4 + 1] = color.g;
	(*framebuffer).pixels[((*framebuffer).width * y + x) * 4 + 2] = color.b;
	(*framebuffer).pixels[((*framebuffer).width * y + x) * 4 + 3] = color.a;
}

void	framebuffer_destroy(t_framebuffer framebuffer)
{
	if ((framebuffer.pixels) !=NULL)
		free(framebuffer.pixels);
}
