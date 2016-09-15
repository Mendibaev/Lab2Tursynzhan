#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,am,gm;
cout<<"Enter two numbers...\n";
cin>>a>>b;
am=(a+b)/2;
gm=sqrt(a*b);
cout<<"The arithmetic mean is "<<am;
cout<<endl<<"The geometric mean is "<<gm<<"\n";

return 0;
}