/*
** EPITECH PROJECT, 2020
** text.c
** File description:
** text.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

void pos_logo(GAME *game, OBJ *obj)
{
    sfVector2f position;

    position.x = 0;
    position.y = 828;
    sfSprite_setPosition(obj->sprite7, position);
}