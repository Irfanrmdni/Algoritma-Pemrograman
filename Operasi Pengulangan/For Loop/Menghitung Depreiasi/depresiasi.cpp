#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// PROGRAM MEMBUAT HITUNGAN DEPRESIASI

	long int biaya;
	int tahun, jum;
	double depresiasi;

	cout << "Masukan Biaya: ";
	cin >> biaya;

	cout << "Masukan Tahun: ";
	cin >> tahun;

	jum = tahun * (tahun + 1)/2; // Inisialisasi rumus jum

	for(int i=1; i<=tahun; i++){

		depresiasi = (tahun + 1.0 - i)/jum * biaya; // inisialisasi rumus depresiasi

		cout << setw(2) << i << setiosflags(ios::fixed);

		cout << setw(15) << setprecision(0) << depresiasi << endl;
	}

	getch();
	return 0;
}
