/*
	By Abhishek Biswal.
	To accept a value for n.
	and print the result of:
	1 + (1+2) + (1+2+3)+...
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,s,i,n;
	a = 0;
	s = 0;
	cout<<"Enter a  number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s=(s+i);
		a=(a+s);
	}
	cout<<"Answer = "<<a;
	getch();
}