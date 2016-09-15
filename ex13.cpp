# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
double a,b,c,Ha,Hb,Hc,S,p;
cout <<"enter 3 sides of triangle\n";
cin >>a>>b>>c;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	Ha=(2*S)/a;
	Hb=(2*S)/b;
	Hc=(2*S)/c;
cout <<endl<<"Ha="<<Ha;
cout <<endl<<"Hb="<<Hb;
cout <<endl<<"Hc="<<Hc;
return 0;
}