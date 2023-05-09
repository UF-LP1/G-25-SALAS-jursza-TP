

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

void cEmpleado( Cliente,  bool,  float,  string,  cProducto,  int,  int,  bool);
    

void LlamarCliente( Ccliente);
    
cTicket realizarTicket();
    
void comenzarTrabajo();
    
void terminarTrabajo();

void asignarListar( cProducto);
    

void eliminarProductos( cProductos);
    
bool checKearStock();
    

void agregarProductos( cProdcuto);
    

void buscarProductos( cProduco);
    

void avisarStock( cPrducto);
    

void asignarCliente( cCliente);
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