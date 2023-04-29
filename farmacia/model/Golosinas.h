


#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "cProductos.h"


class Golosinas: public cProductos {
public: 
    

void Golosinas(void string, void float, void string);

void asignarNecesidad(void eNecesidad);
protected: 
    
void Golosinas();
private: 
    string caramelos;
};

#endif //_GOLOSINAS_H