

#ifndef _CLIMPIEZA_H
#define _CLIMPIEZA_H

#include "cEmpleado.h"


class Climpieza: public cEmpleado {
public: 
    

void cLimpieza(void string, void string, void int, void int, void float, void string);
    
void horariotrabajo();
    
void horarioInicio();
    
void horarioFin();
protected: 
    
void Climpieza();
private: 
    int horarioInicio;
    int horarioFin;
};

#endif //_CLIMPIEZA_H