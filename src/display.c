/*
** EPITECH PROJECT, 2020
** display
** File description:
** display.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

GAME display(GAME *game, OBJ *obj, AD_T *ad)
{
    game->video_mode.width = 1920;
    game->video_mode.height = 1080;
    game->video_mode.bitsPerPixel = 32;
    create(game, obj, ad);
    game->rect.width = 175;
    game->rect.height = 175;
    game->move.x = 16;
    game->move.y = 0.50;
}

GAME create(GAME *game, OBJ *obj, AD_T *ad)
{
    game->texture = sfTexture_createFromFile("images/image1.jpg", NULL);
    game->sprite = sfSprite_create();
    game->texture2 = sfTexture_createFromFile("images/image2.png", NULL);
    game->sprite2 = sfSprite_create();
    obj->texture3 = sfTexture_createFromFile("images/image3.png", NULL);
    obj->sprite3 = sfSprite_create();
    obj->texture4 = sfTexture_createFromFile("images/image4.png", NULL);
    obj->sprite4 = sfSprite_create();
    ad->texture5 = sfTexture_createFromFile("images/image10.png", NULL);
    ad->sprite5 = sfSprite_create();
    ad->texture6 = sfTexture_createFromFile("images/viseur.png", NULL);
    ad->sprite6 = sfSprite_create();
    obj->texture7 = sfTexture_createFromFile("images/my_hunter.png", NULL);
    obj->sprite7 = sfSprite_create();
}

GAME display2(GAME *game, OBJ *obj)
{
    obj->rect.width = 300;
    obj->rect.height = 300;
    obj->move.x = 13;
    obj->move.y = 0.80;
    obj->pos.x = 0;
    obj->pos.y = 160;
}

GAME display3(GAME *game, OBJ *obj, AD_T *ad)
{
    ad->rect1.width = 150;
    ad->rect1.height = 175;
    ad->move1.x = 12;
    ad->move1.y = 0.80;
    ad->pos1.x = 0;
    ad->pos1.y = 100;
}

GAME display_all(GAME *game, OBJ *obj, AD_T *ad)
{
    display(game, obj, ad);
    display2(game, obj);
    display3(game, obj, ad);
    display3(game, obj, ad);
    sfSprite_setPosition(obj->sprite3, obj->pos);
    sfSprite_move(obj->sprite3, obj->pos);
    sfSprite_setPosition(ad->sprite5, ad->pos1);
    sfSprite_move(ad->sprite5, ad->pos1);
}