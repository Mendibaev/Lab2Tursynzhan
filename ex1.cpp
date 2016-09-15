# include <iostream>
# include <cmath>
using namespace std;
int main () 
{
double a,b,c,h,S,V,p;
	cout <<"write 4 numbers\n"; 
	cin >>a>>b>>c>>h;
	p=((a+b+c)/2);
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	V=(S*h)/3;
	cout <<endl<<V;
	             
         
                     
                      


return 0; 
}

