/*
** EPITECH PROJECT, 2020
** scope
** File description:
** display the sprite on the cursor
*/
#include <SFML/Graphics.h>
#include <SFML/Window/Context.h>
#include <SFML/Window.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

GAME init_mouse_scope(GAME *game, AD_T *ad, M_T *ms)
{
    ms->mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    ms->pos.x = ms->mouse_pos.x;
    ms->pos.y = ms->mouse_pos.y;
    sfSprite_setPosition(ad->sprite6, ms->pos);
    sfWindow_setMouseCursorVisible(game->window, sfFalse);
}