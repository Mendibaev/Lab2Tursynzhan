#include <iostream>
#include <cmath>
using namespace std;
int main(){

double r1,r2,r3,r0;
cout<<"Enter R1, R2, R3\n";
cin>>r1>>r2>>r3;

r0=(r2*r3+r1*r3+r1*r2)/(r1*r2*r3);
cout<<"R0 = "<<r0;

return 0;
}
