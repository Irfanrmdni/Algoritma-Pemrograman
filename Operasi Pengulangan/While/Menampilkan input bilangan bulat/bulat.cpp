#include <stdio.h>
#include <iostream>
#include <conio.h>


using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN WHILE
	// PROGRAM MENAMPILKAN BILANGAN BULAT DARI INPUT USER
	// SEPERTI 1 2 4 7 11 16 22 29 ...
	// BILA YANG DI INPUT 50 MAKA BILANGAN ANGKA TERAKHIR TIDAK LEBIH DARI 50

	int nilai = 1, pencacah = 1, n;

	cout << "Masukan nilai = ";
	cin >> n;

	while(nilai<n){

		cout << " | " << nilai;
		nilai = nilai + pencacah;
		pencacah = pencacah + 1;
	}

	cout << endl;



	getch();
	return 0;
}
