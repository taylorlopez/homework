#include <iostream>
using namespace std;

int main()
{
	int a;

	cout<<"Have you ever programmed before?"<<endl;
	cout<<"Please enter '1' for 'yes'"<<endl;
	cout<<"and '0' for 'no'."<<endl;
	cin>>a;
	if (a==1){
		cout<<"Have you used c++ before?"<<endl;
		cin>>a;
		if (a==1){
			cout<<"Skip Chapter 1"<<endl;
			cout<<"Have a good day"<<endl;
			}
		if (a==0){
			cout<<"Do Assignment 1"<<endl;
			cout<<"Have a good day"<<endl;
			}
		}
	if (a==0){
		cout<<"Have you ever used a computer before?"<<endl;
		cin>>a;
		if (a==1){
			cout<<"Read Appendix"<<endl;
			cout<<"Have a good day"<<endl;
			}
		if (a==0){
			cout<<"Drop the class"<<endl;
			cout<<"Please learn how to use a computer"<<endl;
			cout<<"and Have a good day"<<endl;	
			}
		}	
			

















return 0;
}
