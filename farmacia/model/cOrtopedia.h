


#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H

#include "cProductos.h"


class cOrtopedia: public cProductos {
public: 
    

void cOrtopedia( strign,  float,  string,  string,  string,  bool);
    
void preaparadoVenta();
    
bool chaekearPreaparado();
    

void asignarNecesidad( eNecesidad);
protected: 
    
void cOrtopedia();
private: 
    string tipoTratamiento;
    bool preparadoVenta;
};

#endif //_CORTOPEDIA_H