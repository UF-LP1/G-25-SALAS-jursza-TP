

#ifndef _CRECETA_H
#define _CRECETA_H

class cReceta {
public: 
    

void cReceta( int,  eNecesidad,  cMedicamentos);
    
int getMatriculaMedico();
protected: 
    
void cReceta();
private: 
    int matriculasMedicos;
    eNecesidad necesidad;
};

#endif //_CRECETA_H