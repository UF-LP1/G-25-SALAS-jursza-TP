


#ifndef _CASESORFARMACEUTICA_H
#define _CASESORFARMACEUTICA_H

#include "cEmpleado.h"


class cAsesorFarmaceutica: public cEmpleado {
private:	
	string mostrarProducto;
public: 
	cAsesorFarmaceutica(string mostrarProducto);
	~cAsesorFarmaceutica();
    

void cAsesorFarmaceutica( string,  string,  string,  string);

void LlamarCliente( Ccliente);
    
bool verificarTurno();
    
cMedicamento analizarReceta();
    
void verificarDescuento();
    
int entregarTicketCaja();
protected: 
    
void cAsesorFarmaceutica();
private: 
     asesorar; string;
};
