# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
double a,c,R,b,p;
cout <<"enter the leg and hypotenuse of right triangle\n";
cin >>a>>c;
	b=sqrt(c*c-a*a);
	p=(a+b+c)/2;
	R=sqrt(((p-a)*(p-b)*(p-c))/p);
cout <<endl<<R;
return 0;
} 