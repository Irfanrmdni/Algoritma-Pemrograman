#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int fibonacci(int n){

		if((n == 1) || (n == 0)){

			return n;
		}else{

			return fibonacci(n-1) + fibonacci(n-2);
		}
	}

int main(){

	//LATIHAN FIBONACCI
	int input, hasil;

	cout << "Deret Fibonacci ke : ";
	cin >> input;
	cout << endl;

	cout << "Hasil : " << fibonacci(input) << endl;


	getch();
	return 0;
}
