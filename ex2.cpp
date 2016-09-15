# include <iostream>
# include <cmath>
using namespace std;
int main ()
{       
double V,l,R,r,h,S;

cout <<"write the radiuses and the height of the truncated cones\n";
cin >>R>>r>>h;
	l=sqrt(h*h +(R-r)*(R-r) );
	S=3,14*l*(R+r)+ 3,14*(R*R+r*r);
	V=((3,14*h)*(R*R+r*r+R*r))/3;
cout <<endl<<V;
cout <<endl<<S;
return 0;
}