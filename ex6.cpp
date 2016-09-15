# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
double a,S,p;
cout <<" write side of an equilateral triangle\n";
cin >>a;
	p=3*a/2;
	S=sqrt(p*(p-a)*(p-a)*(p-a));
cout <<endl<<S;
return 0;
}