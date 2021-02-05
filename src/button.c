/*
** EPITECH PROJECT, 2020
** button
** File description:
** button.c
*/
#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

GAME s_exit(GAME *game, OBJ *obj)
{
    sfVector2i posi = sfMouse_getPositionRenderWindow(game->window);
    sfFloatRect const rect1 = sfSprite_getGlobalBounds(obj->sprite4);
    sfVector2f pos;

    pos.x = 1800;
    pos.y = 915;
    sfSprite_setPosition(obj->sprite4, pos);
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
    sfFloatRect_contains(&rect1, posi.x, posi.y) == sfTrue) {
    sfRenderWindow_close(game->window);
    }
}

GAME kill_piaf(GAME *game, OBJ *obj)
{
    sfVector2i posi = sfMouse_getPositionRenderWindow(game->window);
    sfFloatRect r = sfSprite_getGlobalBounds(obj->sprite3);

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
    sfFloatRect_contains(&r, posi.x, posi.y) == sfTrue) {
            obj->pos.x = -800;
            obj->pos.y = 160;
            music2();
            sfSprite_setPosition(obj->sprite3, obj->pos);
        }
        obj->move2.x = 0.8;
}

GAME kill_piaf2(GAME *game, OBJ *obj, AD_T *ad)
{
    sfVector2i posu = sfMouse_getPositionRenderWindow(game->window);
    sfFloatRect ru = sfSprite_getGlobalBounds(game->sprite2);

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
    sfFloatRect_contains(&ru, posu.x, posu.y) == sfTrue) {
            game->pos.x = -800;
            game->pos.y = 0;
            ad->score += 100;
            music2();
            sfSprite_setPosition(game->sprite2, game->pos);
        }
        game->move2.x = 0.8;
}

GAME kill_piaf3(GAME *game, OBJ *obj, AD_T *ad)
{
    sfVector2i posh = sfMouse_getPositionRenderWindow(game->window);
    sfFloatRect rh = sfSprite_getGlobalBounds(ad->sprite5);
    ad->score = 0;

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
    sfFloatRect_contains(&rh, posh.x, posh.y) == sfTrue) {
            ad->pos1.x = -800;
            ad->pos1.y = 500;
            music2();
            sfSprite_setPosition(ad->sprite5, ad->pos1);
        }
        ad->move3.x = 0.8;
}

GAME kill_fct(GAME *game, OBJ *obj, AD_T *ad)
{
    kill_piaf(game, obj);
    kill_piaf2(game, obj, ad);
    kill_piaf3(game, obj, ad);
}