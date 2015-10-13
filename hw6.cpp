#include <iostream>
using namespace std;

int main ()
{
	int a, b, c, d, e, f, m;
	cout<<"Please enter 6 numbers:"<<endl;
	cin>>a>>b>>c>>d>>e>>f;

	if (a>b){
		m=a;
		a=b;
		b=m;
		}

	if (b>c){
		m=b;
		b=c;
		c=m;
		}

	if (c>d){
		m=c;
		c=d;
		d=m;
		}

	if (d>e){
		m=d;
		d=e;
		e=m;
		}

	if (e>f){
		m=e;
		e=f;
		f=m;
		}
//first round marker
	if (a>b){
		m=a;
		a=b;
		b=m;
		}

	if (b>c){
		m=b;
		b=c;
		c=m;
		}

	if (c>d){
		m=c;
		c=d;
		d=m;
		}

	if (d>e){
		m=d;
		d=e;
		e=m;
		}
//second round marker

	if (a>b){
		m=a;
		a=b;
		b=m;
		}

	if (b>c){
		m=b;
		b=c;
		c=m;
		}

	if (c>d){
		m=c;
		c=d;
		d=m;
		}

//third round marker
	if (a>b){
		m=a;
		a=b;
		b=m;
		}

	if (b>c){
		m=b;
		b=c;
		c=m;
		}

//fourth round marker

	if (a>b){
		m=a;
		a=b;
		b=m;
		}

	cout<<"Numbers in ascending order are:"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
return 0;
}
