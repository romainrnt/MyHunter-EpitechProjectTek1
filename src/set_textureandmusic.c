/*
** EPITECH PROJECT, 2020
** set_texture
** File description:
** set_texture.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

GAME texture(GAME *game, OBJ *obj, AD_T *ad)
{
    sfSprite_setTexture(game->sprite, game->texture, sfTrue);
    sfSprite_setTexture(game->sprite2, game->texture2, sfTrue);
    sfSprite_setTexture(obj->sprite3, obj->texture3, sfTrue);
    sfSprite_setTexture(obj->sprite4, obj->texture4, sfTrue);
    sfSprite_setTexture(ad->sprite5, ad->texture5, sfTrue);
    sfSprite_setTexture(ad->sprite6, ad->texture6, sfTrue);
    sfSprite_setTexture(obj->sprite7, obj->texture7, sfTrue);
    music();
}

int music()
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/nice_music.ogg");
    if (!music)
        return (1);
    sfMusic_play(music);
}

int music2(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/detonation.ogg");
    if (!music)
        return (1);
    sfMusic_play(music);
}