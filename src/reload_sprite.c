/*
** EPITECH PROJECT, 2020
** reload_sprite
** File description:
** reload_sprite.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"

GAME reload_sprite(GAME *game)
{
    if (sfSprite_getPosition(game->sprite2).x <= 1920)
        game->move2.x = sfSprite_getPosition(game->sprite2).x <= 1920;
        else {
            game->move2.x = -300;
            sfSprite_setPosition(game->sprite2, game->move2);
        }
        game->move2.x = 0.8;
}

GAME reload_sprite2(GAME *game, OBJ *obj)
{
    if (sfSprite_getPosition(obj->sprite3).x <= 1920)
        obj->move2.x = sfSprite_getPosition(obj->sprite3).x <= 1920;
        else {
            obj->move2.x = -300;
            sfSprite_setPosition(obj->sprite3, obj->move2);
        }
        obj->move2.x = 0.8;
}

GAME reload_sprite3(GAME *game, OBJ *obj, AD_T *ad)
{
    if (sfSprite_getPosition(ad->sprite5).x <= 1920)
        ad->move3.x = sfSprite_getPosition(ad->sprite5).x <= 1920;
        else {
            ad->move3.x = -300;
            ad->move3.y = 400;
            sfSprite_setPosition(ad->sprite5, ad->move3);
        }
        ad->move3.x = 0.8;
}

GAME fct_re(GAME *game, OBJ *obj, AD_T *ad)
{
    sfSprite_move(game->sprite2, game->move);
    sfSprite_move(obj->sprite3, obj->move);
    sfSprite_move(ad->sprite5, ad->move1);
    reload_sprite(game);
    reload_sprite2(game, obj);
    reload_sprite3(game, obj, ad);
}