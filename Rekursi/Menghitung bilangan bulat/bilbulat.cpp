#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int pangkat(int y, int n){

		if(n==1){

			return y;
		}
		else{

			return y * pangkat(y, n-1);
		}
	}

int main(){

	// REKURSI
	// PROGRAM MENGHITUNG BILANGAN BULAT LEBIH BESAR DARI 0
	int y, n;

	long int hasil;

	cout << "Menghitung y^n" << endl;

	cout << "y = ";
	cin >> y;

	cout << "n = ";
	cin >> n;

	hasil = pangkat(y,n);

	cout << y << "^" << n << " = " << hasil << endl;

	getch();
	return 0;
}
