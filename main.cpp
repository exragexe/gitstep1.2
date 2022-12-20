

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    const float Pi = 3.14;
    double R,S,L;
    cout << "Enter radius of circles"<< endl;
    cout << "R: ";
    cin >> R;
    S = Pi * pow(R,2);
    L = 2 * Pi * R;

    cout << "S = " << S <<"\n"<< " L = " << L<<endl;



    return 0;
}
