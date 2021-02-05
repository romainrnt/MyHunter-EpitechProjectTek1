/*
** EPITECH PROJECT, 2020
** texture_rect
** File description:
** texture_rect.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

GAME texture_rect(GAME *game, OBJ *obj, AD_T *dt)
{
    sfSprite_setTextureRect(game->sprite2, game->rect);
    sfSprite_setTextureRect(obj->sprite3, obj->rect);
    sfSprite_setTextureRect(dt->sprite5, dt->rect1);
}