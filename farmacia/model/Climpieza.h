

#ifndef _CLIMPIEZA_H
#define _CLIMPIEZA_H

#include "cEmpleado.h"


class Climpieza: public cEmpleado {
public: 
    

void cLimpieza( string,  string,  int,  int,  float,  string);
    
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