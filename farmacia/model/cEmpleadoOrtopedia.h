


#ifndef _CEMPLEADOORTOPEDIA_H
#define _CEMPLEADOORTOPEDIA_H

#include "cEmpleado.h"


class cEmpleadoOrtopedia: public cEmpleado {
public: 
    

void cEmpleadoOrtopedia( float,  string,  string,  string,  string,  string);
    

void llamarCliente( cCliente);
    
void asesorarArticuloTratamiento();

cTicket facturarProductos( cProdcutos);
    
int entregarTicketCaja();
protected: 
    
void cEmpleadoOrtopedia();
};

#endif //_CEMPLEADOORTOPEDIA_H