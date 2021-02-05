/*
** EPITECH PROJECT, 2020
** game_h
** File description:
** game_h
*/

#ifndef GAME_H_
#define GAME_H_
#include <SFML/Graphics.h>
#include <SFML/Window/Window.h>

typedef struct GAME GAME;

struct GAME
{
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfSprite       *sprite;
    sfTexture     *texture;
    sfSprite      *sprite2;
    sfTexture    *texture2;
    sfClock         *clock;
    sfVector2f        move;
    sfVector2f       move2;
    sfTime            time;
    sfIntRect         rect;
    sfVector2f         pos;
};

#endif
