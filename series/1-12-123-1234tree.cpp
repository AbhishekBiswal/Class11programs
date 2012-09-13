/*
	By Abhishek Biswal.
	A Program to accept a value for N. ( variable n )
	and print the output of :
	1
	12
	123
	1234
	12345
	till n.
*/

#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	cout << "Enter the value of N" << endl;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int a;
		a = 1;
		while(a < i)
		{
			cout << a;
			a+=1;
		}
		cout << endl;
	}
	getch();
}