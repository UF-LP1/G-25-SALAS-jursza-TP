

#ifndef _CMEDICAMENTO_H
#define _CMEDICAMENTO_H

#include "cProductos.h"


class cMedicamento: public cProductos {
public: 
    

void cMedicamentos(void string, void eMedicamentos);
    
float getCosto();
    
string getEnfermedadPreviene();
protected: 
    
void cMedicamento();
private: 
    string enfermedadPreviene;
};

#endif //_CMEDICAMENTO_H