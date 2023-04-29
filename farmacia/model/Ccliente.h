
#ifndef _CCLIENTE_H
#define _CCLIENTE_H
#include <string>
#include <iostream>
using namespace std;
#include <cReceta.h>


class Ccliente {
private:
	const string dni, nombre, obraSocial, email;
	enum eNecesiad;
	enum ePedido;
	float dinero; 
	string ticketCaja;
	enum eMedio; 
	float MontoTotal;
	enum eEntrega; 

public: 
	Ccliente(string Dni, string nombre, string obraSocial, string  email, enum eNecesiad, enum ePedido, float dinero, string ticketCaja, enum eMedio, float MontoTotal, enum eEntrega) {};
	~Ccliente();
	const cticket EntregarTicketNecesidad();
	void asignarReceta(cReceta);
	void mostrarTicketCaja(string);
	void solicitarGolosina(int);
	void setDinero(float);
	void setPago(Emedio);
	void setpagar( float);
	void setTicketEntrega(eEntrega);
	string get_name();
	string get_obraSocial();
	string get_dni();
	string get_email();



	


	
};

#endif //_CCLIENTE_H