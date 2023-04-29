


#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H

#include "cProductos.h"


class cOrtopedia: public cProductos {
public: 
    

void cOrtopedia(void strign, void float, void string, void string, void string, void bool);
    
void preaparadoVenta();
    
bool chaekearPreaparado();
    

void asignarNecesidad(void eNecesidad);
protected: 
    
void cOrtopedia();
private: 
    string tipoTratamiento;
    bool preparadoVenta;
};

#endif //_CORTOPEDIA_H