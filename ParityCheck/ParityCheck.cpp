//
// Created by jpabl on 09-jun.-21.
//

#include "ParityCheck.h"
using namespace std;

string ParityCheck::getParity(string inData) {
    inData+= getFinalNum(inData);
    return inData;
}

bool ParityCheck::checkParity(string inData) {
    cout<<endl;
    cout<<"Evaluando:"<<inData.substr(0,inData.length()-1)<<endl<<"Paridad: "<<inData[inData.length()-1]<<endl;
    if (inData[inData.length()-1] == getFinalNum(inData.substr(0,inData.length()-1))){
        cout<<"Esta correcta";
        return true;
    }
    else{
        cout<<"Esta incorrecta";
        return false;
    }
}

char ParityCheck::getFinalNum(string inData) {
    int counter = 0;
    for (int i = 0; i < inData.length(); ++i) {
        if (inData[i] == '1'){
            counter+=1;
        }
    };
    if (counter%2 == 0){
        return '1';
    } else{
        return '0';
    }
}
