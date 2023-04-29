#ifndef _CFARMACIA_H
#define _CFARMACIA_H
#include <string>
#include <iostream>
using namespace std;

class Cfarmacia {
private: //atributos
	string nombre, horarios, telefono, direccion;
	int cantActual, cantTotal;
	enum eNecesidad;
	float capital;
	bool checkEliminar;
	enum ePedido;
public:
	Cfarmacia(string nombre, string horarios, string telefono, string direccion, int cantActual, int cantTotal, enum eNecesidad, float capital, bool checkEliminar, enum ePedido); //constroctur
	~Cfarmacia();
	// get y set
	cTicket entregarticket(eNecesidad);   
	void pagarEmpleados();   
	void abrirFarmacia();  
	void cerrarFarmacia();
	void agregarEmpleado(cEmpleado);
	void eliminarEmpleado(cEmpleado);
	void pagarEmpleado();
	void juntarGanancias();
	void cfarmacia();

};

#endif //_CFARMACIA_H