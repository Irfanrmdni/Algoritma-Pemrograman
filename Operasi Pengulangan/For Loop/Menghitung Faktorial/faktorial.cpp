#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// PROGRAM MENGHITUNG FAKTORIAL
	// N! = N X (N-1) X (N-2)X....X2 X1

	int n;
	long int hasil;
	hasil = 1;

	cout << "Masukan n = ";
	cin >> n;

	for(int i=n; i>=1; i--){

		hasil = hasil * i;
	}

	cout << hasil << endl;


	getch();
	return 0;
}
