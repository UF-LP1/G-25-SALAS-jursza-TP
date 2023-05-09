


#ifndef _CTICKET_H
#define _CTICKET_H

class Cticket {
public: 
    

void Cticket( int,  eNecesidad,  int,  float,  eMedio);
    

void setNumero( int);
    

void setMontoTotal( float);
    

void setMedio( eMedio);
    
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