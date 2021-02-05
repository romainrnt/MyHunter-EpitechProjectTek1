/*
** EPITECH PROJECT, 2020
** main2fct
** File description:
** main2fct
*/
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

GAME main2(GAME *game, OBJ *obj, AD_T *ad, M_T *ms)
{
    init_mouse_scope(game, ad, ms);
    s_exit(game, obj);
    fct_re(game, obj, ad);
    texture_rect(game, obj, ad);
    pos_logo(game, obj);
    kill_fct(game, obj, ad);
}