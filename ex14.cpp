# include <iostream>
# include <cmath>
using namespace std;
int main ()
{                   
double Ma,Mb,Mc,a,b,c; 
cout <<"enter 3 sides of triangle\n";
cin >>a>>b>>c;
	Mc=(sqrt(2*a*a+2*b*b-c*c))/2;
	Mb=(sqrt(2*a*a+2*c*c-b*b))/2;
	Ma=(sqrt(2*b*b+2*c*c-a*a))/2;
cout <<endl<<"Ma="<<Ma;
cout <<endl<<"Mb="<<Mb;
cout <<endl<<"Mc="<<Mc;
return 0;
}
