


#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "cProductos.h"


class Golosinas: public cProductos {
public: 
    

void Golosinas( string,  float,  string);

void asignarNecesidad( eNecesidad);
protected: 
    
void Golosinas();
private: 
    string caramelos;
};

#endif //_GOLOSINAS_H