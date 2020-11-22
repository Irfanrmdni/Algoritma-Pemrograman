#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// MENGHITUNG ANGKA TABUNGAN AMIR

	long int pokok = 5000000, bunga;
	int tahun;

	for(tahun=1; tahun<=8; tahun++){

		bunga = pokok * 7 / 100;

		cout << setw(2) << tahun << endl;
		cout << setw(11) << pokok << endl;
		cout << setw(11) << bunga << endl;

		pokok = pokok + bunga;

	}





	getch();
	return 0;
}
