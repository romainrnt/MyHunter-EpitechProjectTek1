/*
** EPITECH PROJECT, 2020
** obj.h
** File description:
** obj.h
*/

#ifndef OBJ_H_
#define OBJ_H_
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

typedef struct OBJ OBJ;

struct OBJ
{
    sfSprite       *sprite3;
    sfTexture     *texture3;
    sfSprite       *sprite4;
    sfTexture     *texture4;
    sfMusic          *music;
    sfClock          *clock;
    sfVector2f         move;
    sfVector2f        move2;
    sfTime             time;
    sfIntRect          rect;
    sfVector2f          pos;
    sfVector2f      position;
    sfSprite       *sprite7;
    sfTexture     *texture7;
};

typedef struct AD_S
{
    sfSprite       *sprite5;
    sfTexture     *texture5;
    sfClock          *clock1;
    sfTime             time1;
    sfIntRect          rect1;
    sfVector2f          pos1;
    sfVector2f          move1;
    sfVector2f          move3;
    sfTexture       *texture6;
    sfSprite         *sprite6;
    sfText              *text;
    sfFont              *font;
    sfText        *score_text;
    int                 score;
} AD_T;

typedef struct M_S
{
    sfVector2i mouse_pos;
    sfVector2f pos;
} M_T;

#endif