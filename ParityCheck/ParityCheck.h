//
// Created by jpabl on 09-jun.-21.
//

#ifndef ALGORITMOS_DETECCI_N_CORRECCI_N_ERRORES_PARITYCHECK_H
#define ALGORITMOS_DETECCI_N_CORRECCI_N_ERRORES_PARITYCHECK_H
#include "iostream"
using namespace std;
class ParityCheck {
    public:
        string getParity(string inData);
        bool checkParity(string inData);
private:
    char getFinalNum(string inData);
};


#endif //ALGORITMOS_DETECCI_N_CORRECCI_N_ERRORES_PARITYCHECK_H
