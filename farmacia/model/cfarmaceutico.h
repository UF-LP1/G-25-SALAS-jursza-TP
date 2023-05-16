


#ifndef _CFARMACEUTICO_H
#define _CFARMACEUTICO_H
#include <eNums.h>
#include <cEmpleado.h>
#include <Ccliente.h>
#include <cMedicamento.h>


class cfarmaceutico: public cEmpleado {// arrelgar clase con herencia de emplado a farmaceutico
public: 
    

void cfarmaceutico(  int,  string,  string,  string);
    
    
protected: 
    

private: 

    string nombre;
    string apellido;
    int matricula;
    string dni;
};

#endif //_CFARMACEUTICO_H