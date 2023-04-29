


#ifndef _CFARMACEUTICO_H
#define _CFARMACEUTICO_H

#include "cEmpleado.h"


class cfarmaceutico: public cEmpleado {
public: 
    

void cfarceutico(void cMedicamentos, void int, void int, void bool, void string, void string, void int, void string);
    
const cmedicamento vendermedicamento();
    

string aconsejarDosis(void cmedicamento);
    
const cmedicamento RecomendarMedicamento();
    

void asignarMedicamentos(void cMedicamentos);
protected: 
    
void cfarmaceutico();
private: 
    int canActual;
    int cantotal;
    bool chekEliminar;
    string nombre;
    string apellido;
    int matricula;
    string dni;
};

#endif //_CFARMACEUTICO_H