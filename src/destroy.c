/*
** EPITECH PROJECT, 2020
** destroy_sprite
** File description:
** destroy.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

GAME destroy(GAME *game, OBJ *obj, AD_T *ad)
{
    sfTexture_destroy(game->texture);
    sfSprite_destroy(game->sprite);
    sfTexture_destroy(game->texture2);
    sfSprite_destroy(game->sprite2);
    sfSprite_destroy(obj->sprite3);
    sfTexture_destroy(obj->texture3);
    sfSprite_destroy(obj->sprite4);
    sfTexture_destroy(obj->texture4);
    sfSprite_destroy(ad->sprite5);
    sfTexture_destroy(ad->texture5);
    sfSprite_destroy(ad->sprite6);
    sfTexture_destroy(ad->texture6);
    sfSprite_destroy(obj->sprite7);
    sfTexture_destroy(obj->texture7);
    sfText_destroy(ad->text);
    sfText_destroy(ad->score_text);
    sfRenderWindow_destroy(game->window);
}