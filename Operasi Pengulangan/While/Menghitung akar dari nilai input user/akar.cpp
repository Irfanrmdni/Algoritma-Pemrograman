#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN WHILE
	// PROGRAM MENGHITUNG AKAR DARI NILAI YANG DI INPUT USER

	int n, bil;


	double fi,jumlah;

	bil = 1;
	jumlah = 0;

	cout << "Masukan n = ";
	cin >> n;
	while(bil<=n){

		jumlah = jumlah + 1.0 / (bil * bil);
		bil = bil + 1;
	}

	fi = sqrt(jumlah * 6);
	cout << fi << endl;





	getch();
	return 0;
}
