#include <iostream>
using namespace std;

int main ()
{
	int a, b, c, d, e, f;
	cout<<"Please enter 5 numbers:"<<endl;
	cin>>a>>b>>c>>d>>e;
	
	f=a;
	if (b<f)
	f=b;
	if (c<f)
	f=c;
	if (d<f)
	f=d;
	if (e<f)
	f=e;

	cout<<"The smallest number is:"<<f<<endl; 
	


return 0;
}
