#include <iostream>

using namespace std;

int main()

{
	int a,b;
	cout << " Enter number 1 : ";
	cin >> a;
	cout << " Enter number 2 : ";
	cin >> b;
	cout << "Numbers Before swaping:- " <<endl;
	cout << "a = " << a << " , b = "<< b <<endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Numbers After swaping:- " <<endl;
	cout << "a = " << a << " , b = "<< b <<endl;
	return 0;
}
