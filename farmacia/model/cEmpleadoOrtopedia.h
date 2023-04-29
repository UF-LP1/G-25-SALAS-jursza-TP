


#ifndef _CEMPLEADOORTOPEDIA_H
#define _CEMPLEADOORTOPEDIA_H

#include "cEmpleado.h"


class cEmpleadoOrtopedia: public cEmpleado {
public: 
    

void cEmpleadoOrtopedia(void float, void string, void string, void string, void string, void string);
    

void llamarCliente(void cCliente);
    
void asesorarArticuloTratamiento();

cTicket facturarProductos(void cProdcutos);
    
int entregarTicketCaja();
protected: 
    
void cEmpleadoOrtopedia();
};

#endif //_CEMPLEADOORTOPEDIA_H