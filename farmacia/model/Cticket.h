


#ifndef _CTICKET_H
#define _CTICKET_H

class Cticket {
public: 
    

void Cticket(void int, void eNecesidad, void int, void float, void eMedio);
    

void setNumero(void int);
    

void setMontoTotal(void float);
    

void setMedio(void eMedio);
    
int getNumero();
protected: 
    
void cticket();
private: 
    int numero;
    eNecesidad razon;
    int generarNumero;
    float MontoTotal;
    eMedio medioPago;
};

#endif //_CTICKET_H