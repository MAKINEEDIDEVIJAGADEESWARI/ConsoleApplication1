//write a program that takes an input of age 
//and prints if you are adult or not
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "enter your age:";
	cin >> age;
	
	if (age>= 18)
	{
		cout << "adult";
	}
	else
	{
		cout << "not adult";
	}
	return 0;
}