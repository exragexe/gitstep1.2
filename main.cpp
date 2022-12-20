

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double S,v,t,a;
    cout<<"A program for calculating the distance traveled in rectilinear, uniformly accelerated motion"<<endl;
    cout <<" Enter speed: ";
    cin >> v;
    cout<<"Enter time: ";
    cin >>t;
    cout <<"Enter acceleration: ";
    cin >> a;
    S = v*t+(a*pow(t,2))/2;
    cout <<"Result"<<endl;
    cout <<" S = "<< S;
    return 0;
}