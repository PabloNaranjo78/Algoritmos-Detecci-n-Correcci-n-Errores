#include <iostream>
#include "HammingCode/HammingCode.h"
#include "ParityCheck/ParityCheck.h"
#include "CyclicRedundancyCheck/CyclicRedundancyCheck.h"
using namespace std;
int main() {

    HammingCode hammingCode;

    int data[4] = {1,1,1,1};

   // hammingCode.getParity(data);
//
//    ParityCheck parityCheck;
//    cout<<parityCheck.getParity("110000")<<endl;
//    parityCheck.checkParity("1101001");
//
    CyclicRedundancyCheck cyclicRedundancyCheck;
    cyclicRedundancyCheck.encodeData("100101100","1101");
    cyclicRedundancyCheck.checkData("101101100000","1101");
    return 0;
}
