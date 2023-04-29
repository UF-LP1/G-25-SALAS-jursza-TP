

#include <iostream>
#include <string>

#ifndef _CAJERO_H
#define _CAJERO_H

#include "cEmpleado.h"


class cajero: public cEmpleado {
private:
	int capitalDiario;
public: 
	cajero(int capitalDiario);
	~cajero();
    

void cajero(string,string,string, int);



void facturarProducto(cProducto);
    
bool verificarTurno();
    

void LlamarCliente(Ccliente);
    
eMedio analizarMetodoPago();
    
void cobrar();
 
void entregaTicketPago(cticket);
    
void pedidoBolsa();
protected: 
    
void cajero();
private: 
    int capitalDiariao;
};

