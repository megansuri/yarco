/*******************************************************************/
/** MAC0211 - Laboratorio de Programacao I                        **/
/** Projeto de Jogo                                               **/
/*******************************************************************/

#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "common.h"
typedef enum {
    TYPE_PERSON, TYPE_SHIP, TYPE_BOAT, TYPE_CORAL
} objectType;

typedef struct Object *object;
typedef struct Extra *extraInfo;

struct Object {
    objectType type;
    unsigned int id;
    point pos;
    velocity vel;
    acceleration acc;
    double dir;
    double radius;
    quadrant quad;
    texture tex;
    extraInfo extra;
    short int toBeRemoved;
};
/*Devolve a textura do objeto*/
texture objectGetTexture(object a);

/*Devolve a posicao do objeto*/
point objectGetPos(object a);

/*Devolve a velocidade do objeto*/
double objectGetSpeed(object a);

/*Retorna o quadrante do objeto*/
quadrant objectGetQuad(object a);

/*Atualiza o quadrante do objeto*/
void objectQuadUpdate(object a);

/*Devolve o ID do objeto*/
unsigned int objectGetID(object a);

/*Seta o ID do objeto*/
void objectSetID(object a, unsigned int id);

/*Cria um novo objeto.*/
object objectCreate(objectType type, unsigned int id, point pos,
                    velocity vel, double radius, texture tex);

/*Atualiza o objeto*/
void updateObject(object o, double timedif);

/*Compara dois objetos de acordo com sua posicao*/
int objectCompare(object r, object s);

/*Retorna a distancia entre o objeto e o ponto p*/
double objectGetDistFrom(object o, point p);

/*Verifica se dois objetos estao colidindo no mundo.*/
int objectIsColliding(object a, object b);

/*Imprime na saida padrao informacoes sobre o objeto.*/
void objectDump(object a);

/*Libera a memoria do objeto.*/
void removeObject(object a);

#endif                          /* _OBJECT_H_ */
