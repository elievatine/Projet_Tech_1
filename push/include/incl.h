/*
** EPITECH PROJECT, 2017
** incl.c
** File description:
** .h files
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Graphics.h>

typedef struct s_framebuffer
{
	unsigned char	*pixels;
	unsigned int	width;
	unsigned int	height;
}	t_framebuffer;

typedef struct s_all
{
	sfRenderWindow *window;
	t_framebuffer *fb;
	sfUint8 *pixels;
	sfTexture *texture;
	sfSprite *sprite;
	sfClock *clock;
	sfTime time;
}	t_all;

t_framebuffer       framebuffer_create(int width, int height);

void	my_put_pixel(t_framebuffer *framebuffer, unsigned int x, unsigned int y, sfColor color);
void	framebuffer_destroy(t_framebuffer framebuffer);
void	draw_star(t_framebuffer *framebuffer);
void	circle(t_framebuffer *framebuffer,unsigned int a,unsigned int b, unsigned int R);
void	my_putchar(char c);
void	my_putstr(char const *str);
void	closed(t_all *all, t_framebuffer framebuffer);
void	pixies();
void	circle_screen();
sfRenderWindow	*createMyWindow(unsigned int width, unsigned int height);
void	dash_H();

