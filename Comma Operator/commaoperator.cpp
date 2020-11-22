#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

	//COMMA OPERATOR

	int a;
	int b;
	int c;

	a = (b=3 ,cout << "b " << b << endl , c=5 , cout << "c " << c << endl , b+c);

	cout << "a " << a << endl;

	getch();
	return 0;
}
