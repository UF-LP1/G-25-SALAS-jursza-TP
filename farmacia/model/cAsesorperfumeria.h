


#ifndef _CASESORPERFUMERIA_H
#define _CASESORPERFUMERIA_H

#include "cEmpleado.h"


class cAsesorperfumeria: public cEmpleado {
public: 
    

void cAsesorPerfumeria(void string, void string, void string, void string);
    
cProdcuto venderProducto();
    

void llamarCliente(void cCliente);
    

cTicket facturarProducto(void cProducto);
    
int entregarTicketCaja();
protected: 
    
void cAsesorperfumeria();
private: 
    string mostarProducto;
};

#endif //_CASESORPERFUMERIA_H