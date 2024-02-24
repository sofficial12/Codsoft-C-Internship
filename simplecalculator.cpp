#include<iostream>
using namespace std;
int main()
{
	int a,b,ch;
	cout<<"\n1:Addition \n2:Subtraction \n3:Multiplication \n4:Division";
	cout<<"\nEnter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\nEnter the value:";
			cin>>a>>b;
			cout<<a+b;
			break;
			
		case 2:
		    cout<<"\nEnter the value:";
			cin>>a>>b;
			cout<<a-b;
			break;
			
		case 3:
		    cout<<"\nEnter the value:";
			cin>>a>>b;
			cout<<a*b;
			break;
			
		case 4:
		    cout<<"\nEnter the value:";
			cin>>a>>b;
			cout<<a/b;
			break;
			
		default:cout<<"Wrong choice";				
	}
}
