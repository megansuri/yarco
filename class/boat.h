/*******************************************************************/
/** MAC0211 - Laboratorio de Programacao I                        **/
/** Projeto de Jogo                                               **/
/*******************************************************************/

#include "../lib/common.h"
#include "../lib/objecttable.h"
typedef struct Object *boat;

void boatInitializeClass();

boat boatNew(texture tex, double speed);