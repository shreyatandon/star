// ConsoleApplication6.cpp : Defines the entry point for the console application.
//
#include<iostream>
#include<conio.h>
using namespace std;

void func(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "* ";
	}
	cout << endl;
}

void main()
{
	int n;
	cout << "enter the number";
	cout << endl;
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		func(i);
	}
	
	getchar();
	getchar();
}



