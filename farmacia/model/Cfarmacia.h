#ifndef _CFARMACIA_H
#define _CFARMACIA_H
#include <string>
#include <iostream>
#include "eNums.h"
#include "Ccliente.h"
using namespace std;

class Cfarmacia {
private: //atributos
	string nombre, horarios, telefono, direccion;
	float capital;

	cCliente* cliente;
public:
	Cfarmacia(string nombre, string horarios, string telefono, string direccion,float capital_); //constructor
	~Cfarmacia();
	// get y set
	
	void pagarEmpleados();   
	void abrirFarmacia();  
	void cerrarFarmacia();
	void agregarEmpleado(cEmpleado);
	void eliminarEmpleado(cEmpleado);
	void pagarEmpleado();
	void juntarGanancias();
	*/

};

#endif //_CFARMACIA_H