#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	long int fib(unsigned int n){

		if(n==0){

			return 0;
		}
		else if(n==1){

			return 1;
		}
		else{

			return fib(n-1) + fib(n-2);
		}
	}

int main(){

	// REKURSI
	// CONTOH PROGRAM FIBONACCI DENGAN REKURSI
	// RUMUS = F_N = F_N1 + F_N2

	int n;
	long int hasil;

	cout << "n = ";
	cin >> n;

	hasil = fib(n);
	cout << "fib " << n << " = " << hasil << endl;




	getch();
	return 0;
}
