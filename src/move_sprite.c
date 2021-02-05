/*
** EPITECH PROJECT, 2020
** move_sprite
** File description:
** move_sprite.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"

GAME move_sprite(GAME *game, int *rate)
{
    float tss = 0;
    sfRenderWindow_setFramerateLimit(game->window, 30);

    game->clock = sfClock_create();
    game->time = sfClock_getElapsedTime(game->clock);
    tss = game->time.microseconds / 1000000;

    if (tss > 0, 3) {
        if (*rate == 5) {
            game->rect.left = (game->rect.left + 180) % 540;
            *rate = 0;
        }
    }
    sfClock_restart(game->clock);
}

GAME move_sprite2(GAME *game, OBJ *obj, int *rate2)
{
    float tss = 0;
    sfRenderWindow_setFramerateLimit(game->window, 30);

    obj->clock = sfClock_create();
    obj->time = sfClock_getElapsedTime(obj->clock);
    tss = obj->time.microseconds / 1000000;

    if (tss > 0, 3) {
        if (*rate2 == 5) {
            obj->rect.left = (obj->rect.left + 225) % 225;
            *rate2 = 0;
        }
    }
    sfClock_restart(obj->clock);
}

GAME move_sprite3(GAME *game, AD_T *ad, int *rate3)
{
    float tss = 0;
    sfRenderWindow_setFramerateLimit(game->window, 30);

    ad->clock1 = sfClock_create();
    ad->time1 = sfClock_getElapsedTime(ad->clock1);
    tss = ad->time1.microseconds / 1000000;

    if (tss > 0, 3) {
        if (*rate3 == 5) {
            ad->rect1.left = (ad->rect1.left + 128) % 640;
            *rate3 = 0;
        }
    }
    sfClock_restart(ad->clock1);
}