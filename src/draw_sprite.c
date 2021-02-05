/*
** EPITECH PROJECT, 2020
** drawsprite
** File description:
** draw_sprite.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

GAME drawspr(GAME *game, OBJ *obj, AD_T *ad)
{
    sfRenderWindow_drawSprite(game->window, game->sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite2, NULL);
    sfRenderWindow_drawSprite(game->window, obj->sprite3, NULL);
    sfRenderWindow_drawSprite(game->window, obj->sprite4, NULL);
    sfRenderWindow_drawSprite(game->window, ad->sprite5, NULL);
    sfRenderWindow_drawSprite(game->window, ad->sprite6, NULL);
    sfRenderWindow_drawSprite(game->window, obj->sprite7, NULL);
    sfRenderWindow_display(game->window);
}