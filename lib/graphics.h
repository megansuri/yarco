/*******************************************************************/
/** MAC0211 - Laboratorio de Programacao I                        **/
/** Projeto de Jogo                                               **/
/*******************************************************************/

#ifndef _GRAPHICS_H_
#define _GRAPHICS_H_

#include "../logic.h"

typedef struct GraphicEngine *graphicEngine;

#define WINDOWED_MODE 0
#define FULLSCREEN_MODE 1

/*Inicializa parte grafica. uniquePerson define se deve usar um caracter diferente 
para cada pessoa desenhada.*/
void graphicInitialize(int mode);

void graphicDrawHighScore( /*struct HighScore* scoretable, */ int ammount);

/*Atualiza os buffers*/
void graphicUpdate();
/*Mostra o que tem que ser mostrado*/
void graphicDraw();
/*Libera a memoria da parte grafica*/
void graphicFinish();

#endif                          /* _GRAPHICS_H_ */
