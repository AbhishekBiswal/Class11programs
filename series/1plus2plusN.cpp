/*
	By Abhishek Biswal.
	A Program to accept a value for N. ( variable n )
	and print the output of :
	1 + 2 + 3 + ... + n
*/

#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	cout << "Enter the value of N" << endl;
	int n, sum;
	cin >> n;
	sum = 0;
	for(int i = 1;i<=n;i++)
	{
		cout << i;
		if(i < n)
			cout << " + ";
		else
			cout << " = ";
		sum = sum + i;  // example : if n=1, then sum = 1+1 = 2.
	}
	cout << sum << endl;
	getch();
}