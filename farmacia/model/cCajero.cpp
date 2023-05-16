


#include "cCajero.h"




 cCajero::cCajero(string, string, string, int) {

}

 void cCajero::LlamarCliente(Ccliente* cliente_) {
     this->cliente = cliente_;
 }


 void cCajero::aplicarDescuento() {

     eNecesidad necesidad = this->cliente->getTicket()->getNecesidad();
     if (necesidad == farmaciaObrSoc || necesidad == PAMI)
     {

     }
 }

 // hasta aca llegue 

void cCajero::facturarProducto( cProducto) {
    return;
}


bool cCajero::verificarTurno() {
    return false;
}


void cCajero::LlamarCliente( Ccliente) {
    return;
}

/
eMedio cCajero::analizarMetodoPago() {
    return null;
}

return void
 
void cCajero::cobrar() {
    return;
}


void cCajero::entregaTicketPago( cticket) {
    return;
}


void cCajero::pedidoBolsa() {
    return;
}
