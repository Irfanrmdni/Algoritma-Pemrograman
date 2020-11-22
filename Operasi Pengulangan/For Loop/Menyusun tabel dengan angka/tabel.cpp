#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULAGNAN DENGAN FOR LOOP
	// PROGRAM MENYUSUN TABEL DENGAN ANGKA

	int baris, kolom, bil;

	cout << "Masukan jumlah baris = ";
	cin >> baris;

	cout << "Masukan jumlah kolom = ";
	cin >> kolom;

	for(int i=baris; i>=1; i--){

		bil = i;
		for(int j=1; j<=kolom; j++){

			cout << bil;
			bil = bil + baris;
		}
		cout << endl;


	}









	getch();
	return 0;
}
