//
// Created by jpabl on 09-jun.-21.
//

#ifndef ALGORITMOS_DETECCI_N_CORRECCI_N_ERRORES_CYCLICREDUNDANCYCHECK_H
#define ALGORITMOS_DETECCI_N_CORRECCI_N_ERRORES_CYCLICREDUNDANCYCHECK_H
#include "iostream"
using namespace std;

class CyclicRedundancyCheck {
public:
    void encodeData(string data, string key);
    void checkData(string data, string key);
private:
    string mod2div(string divident, string divisor);
    string xor1(string a, string b);
};


#endif //ALGORITMOS_DETECCI_N_CORRECCI_N_ERRORES_CYCLICREDUNDANCYCHECK_H
