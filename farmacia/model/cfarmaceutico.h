


#ifndef _CFARMACEUTICO_H
#define _CFARMACEUTICO_H

#include "cEmpleado.h"


class cfarmaceutico: public cEmpleado {
public: 
    

void cfarceutico( cMedicamentos,  int,  int,  bool, void string,  string,  int,  string);
    
const cmedicamento vendermedicamento();
    

string aconsejarDosis( cmedicamento);
    
const cmedicamento RecomendarMedicamento();
    

void asignarMedicamentos( cMedicamentos);
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