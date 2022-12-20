

#include <iostream>
#include <math.h>

using namespace std;
int main(){
    float R0,R1,R2,R3;
    cout<<"Enter 3 supports"<<endl;
    cout <<" R1: ";
    cin >> R1 ;
    cout <<"R2: ";
    cin >> R2;
    cout <<"R3: ";
    cin >> R3;
    R0 = 1/R1 + 1/R2 + 1/R3;
    cout <<"R0 = " << pow(R0,-1);
    return  0;
}