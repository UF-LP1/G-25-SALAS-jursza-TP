

#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H
#include <string>
#include <iostream>
using namespace std;

class cEmpleado {
private:
	float dinero;
	string nombre, apellido, dni;

public: 
    bool chaeckEliminar;
	cEmpleado(float dinero, string nombre, string apellido, string dni) {};
	~cEmpleado();

void cEmpleado(void Cliente, void bool, void float, void string, void cProducto, void int, void int, void bool);
    

void LlamarCliente(void Ccliente);
    
cTicket realizarTicket();
    
void comenzarTrabajo();
    
void terminarTrabajo();

void asignarListar(void cProducto);
    

void eliminarProductos(void cProductos);
    
bool checKearStock();
    

void agregarProductos(void cProdcuto);
    

void buscarProductos(void cProduco);
    

void avisarStock(void cPrducto);
    

void asignarCliente(void cCliente);
protected: 
    bool disponibilidad;
    float dinero;
    string horarios;
    cProducto listaProducto;
    int canTotal;
    int canActual;
    bool checkEliminar;
    string dni;
    string nombre;
    string apellido;
    
void cEmplado();
};

#endif //_CEMPLEADO_H