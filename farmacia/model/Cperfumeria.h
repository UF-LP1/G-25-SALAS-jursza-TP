


#ifndef _CPERFUMERIA_H
#define _CPERFUMERIA_H

#include "cProductos.h"


class Cperfumeria: public cProductos {
public: 
    

void cPerfumeria( string,  float,  string,  string,  eCosmeticos);
    

void setProductoPerfumeria( Ecomestico);
    

void asignarNecesidad( eNecesidad);
protected: 
    
void Cperfumeria();
};

#endif //_CPERFUMERIA_H