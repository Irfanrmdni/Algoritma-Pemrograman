#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int fibonacci(int n){

		if(n==0 || n==1){

			return n;
		}else{

			return fibonacci(n-1) + fibonacci(n-2);
		}
	}

int main(){

	// LATIHAN REKURSI
	int angka, hasil;

	cout << "Masukan fibonacci ke- ";
	cin >> angka;

	hasil = fibonacci(angka);

	cout << "Hasil nya adalah: " << hasil << endl;


	getch();
	return 0;
}

