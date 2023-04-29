


#include "Ccliente.h"

 
Ccliente::Ccliente(string Dni, string nombre, string obraSocial, string  email, enum eNecesiad, enum ePedido, float dinero, string (ticketCaja), enum eMedio, float MontoTotal, enum eEntrega):dni(Dni),nombre(nombre),obraSocial(obraSocial),email(email)
{
}

string Ccliente::get_name() {
	return this->nombre;
}

string Ccliente::get_obraSocial() {
	return this->obraSocial;
}

string Ccliente::get_dni() {
	return this->dni;
}
string Ccliente::get_email() {
	return this->email;
}
unsigned int Ccliente::presupuesto (Cliente, ClienteA)
{
	int i;





}


/*
void Ccliente::solicitarticket() {
    return;
}

enum Ccliente::getNecesidad() {
    return 0;
}

/*
void Ccliente::asociarFarmacia(void cfarmacia) {
    return;
}


const cticket Ccliente::EntregarTicketNecesidad() {
    return null;
}


void Ccliente::asignarReceta(void cReceta) {
    return;
}


void Ccliente::mostrarTicketCaja(void string) {
    return;
}


void Ccliente::solicitarGolosina(void int) {
    return;
}


void Ccliente::setDinero(void float) {
    return;
}


void Ccliente::setPago(void Emedio) {
    return;
}


void Ccliente::setpagar(void float) {
    return;
}


 
void Ccliente::setTicketEntrega(void eEntrega) {
    return;
}


void Ccliente::Ccliente() {
	
}
*/
Ccliente::~Ccliente() {}