


#ifndef _CASESORPERFUMERIA_H
#define _CASESORPERFUMERIA_H

#include "cEmpleado.h"


class cAsesorperfumeria: public cEmpleado {
public: 
    

void cAsesorPerfumeria( string,  string,  string,  string);
    
cProdcuto venderProducto();
    

void llamarCliente( cCliente);
    

cTicket facturarProducto( cProducto);
    
int entregarTicketCaja();
protected: 
    
void cAsesorperfumeria();
private: 
    string mostarProducto;
};

#endif //_CASESORPERFUMERIA_H