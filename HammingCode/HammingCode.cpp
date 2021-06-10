//
// Created by jpabl on 09-jun.-21.
//
#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
#include "HammingCode.h"
#include <iostream>
using namespace std;

void HammingCode::getParity(int inData[4]) {
    int data[10];
    int dataatrec[10],c,c1,c2,c3,i;

    data[0] = inData[0];
    data[1]= inData[1];
    data[2]= inData[2];
    data[4]= inData[3];

    //Calculation of even parity
    data[6]=data[0]^data[2]^data[4];
    data[5]=data[0]^data[1]^data[4];
    data[3]=data[0]^data[1]^data[2];

    cout<<"\nEncoded data is\n";
    for(i=0;i<7;i++){
        cout<<data[i];
    }


    cout<<"\n\nEnter received data bits one by one\n";
    for(i=0;i<7;i++){
        cin>>dataatrec[i];}

    c1=dataatrec[6]^dataatrec[4]^dataatrec[2]^dataatrec[0];
    c2=dataatrec[5]^dataatrec[4]^dataatrec[1]^dataatrec[0];
    c3=dataatrec[3]^dataatrec[2]^dataatrec[1]^dataatrec[0];
    c=c3*4+c2*2+c1 ;

    if(c==0) {
        cout<<"\nNo error while transmission of data\n";
    }
    else {
        cout<<"\nError on position "<<c;
        cout<<"\nData sent : ";
        for(i=0;i<7;i++)
            cout<<data[i];

        cout<<"\nData received : ";
        for(i=0;i<7;i++)
            cout<<dataatrec[i];

        cout<<"\nCorrect message is\n";

//if errorneous bit is 0 we complement it else vice versa
        if(dataatrec[7-c]==0)
            dataatrec[7-c]=1;
        else
            dataatrec[7-c]=0;
        for (i=0;i<7;i++) {
            cout<<dataatrec[i];
        }
    }

}
