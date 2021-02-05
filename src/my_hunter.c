/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** my_hunter.c
*/
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/game.h"
#include "../include/obj.h"

int main(void)
{
    GAME *game = malloc(sizeof(GAME));
    OBJ *obj = malloc(sizeof(OBJ));
    AD_T *ad = malloc(sizeof(AD_T));
    M_T *ms = malloc(sizeof(M_T));
    sfEvent event;
    int rate = 0;
    int rate2 = 0;
    int rate3 = 0;
    ad->score = 0;

    display_all(game, obj, ad);
    game->window = sfRenderWindow_create(game->video_mode,
                                        "MyHunter",
                                        sfDefaultStyle,
                                        NULL);
    texture(game, obj, ad);
    while (sfRenderWindow_isOpen(game->window))
    {
    main2(game, obj, ad, ms);
    move_sprite(game, &rate);
    move_sprite2(game, obj, &rate2);
    move_sprite3(game, ad, &rate3);
        while (sfRenderWindow_pollEvent(game->window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(game->window);
        }
        ++rate;
        ++rate2;
        ++rate3;
        drawspr(game, obj, ad);
    }
    destroy(game, obj, ad);
}