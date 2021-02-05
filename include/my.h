/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_
#include <SFML/Graphics.h>
#include "game.h"
#include "obj.h"

GAME destroy(GAME *game, OBJ *obj, AD_T *ad);
GAME display(GAME *game, OBJ *obj, AD_T *ad);
GAME drawspr(GAME *game, OBJ *obj, AD_T *ad);
GAME move_sprite(GAME *game, int *rate);
GAME reload_sprite(GAME *game);
GAME texture(GAME *game, OBJ *obj, AD_T *ad);
GAME move_sprite2(GAME *game, OBJ *obj, int *rate2);
GAME display2(GAME *game, OBJ *obj);
GAME reload_sprite2(GAME *game, OBJ *obj);
GAME texture_rect(GAME *game, OBJ *obj, AD_T *dt);
GAME display_all(GAME *game, OBJ *obj, AD_T *ad);
GAME s_exit(GAME *game, OBJ *obj);
GAME display3(GAME *game, OBJ *obj, AD_T *ad);
GAME move_sprite3(GAME *game, AD_T *ad, int *rate3);
GAME reload_sprite3(GAME *game, OBJ *obj, AD_T *ad);
GAME fct_re(GAME *game, OBJ *obj, AD_T *ad);
GAME kill_piaf(GAME *game, OBJ *obj);
GAME init_mouse_scope(GAME *game, AD_T *ad, M_T *ms);
GAME main2(GAME *game, OBJ *obj, AD_T *ad, M_T *ms);
GAME kill_piaf2(GAME *game, OBJ *obj, AD_T *ad);
GAME kill_piaf3(GAME *game, OBJ *obj, AD_T *ad);
GAME kill_fct(GAME *game, OBJ *obj, AD_T *ad);
void pos_logo(GAME *game, OBJ *obj);
GAME create(GAME *game, OBJ *obj, AD_T *ad);
int music();
int music2();

#endif
