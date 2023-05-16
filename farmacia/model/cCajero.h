

#include <iostream>
#include <string>

#ifndef _CAJERO_H
#define _CAJERO_H

#include "Ccliente.h"


class cCajero: public cEmpleado {
private:
	int capitalDiario;
    Ccliente* cliente;
public: 

    void llamarCliente(Ccliente* cliente_);
    void aplicarDescuento();

	//cCajero(int capitalDiario);
	//~cCajero();
    

void cCajero(string,string,string, int);



void facturarProducto(cProducto);
    
bool verificarTurno();
    

void LlamarCliente(Ccliente);
    
eMedio analizarMetodoPago();
    
void cobrar();
 
void entregaTicketPago(cticket);
    
void pedidoBolsa();
protected: 
    
void cCajero();
private: 
    int capitalDiariao;
};

