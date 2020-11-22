#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK 2 DIMENSI
	// PROGRAM MENGINPUT DATA DAN MENAMPILKAN DATA

	int jum_baris;
	int jum_kolom;

	int data[10][10];

	// MEMASUKAN ELEMEN MATRIKS
	cout << "Masukan jumlah baris: ";
	cin >> jum_baris;

	cout << "Masukan jumlah kolom: ";
	cin >> jum_kolom;

	for(int i=0; i<=jum_baris-1; i++){

		for(int j=0; j<=jum_kolom-1; j++){

			cout << "Nilai baris: " << i << " kolom: " << j << " = ";
			cin >> data[i][j];

		}

	}
	// MENAMPILKAN ELEMEN MATRIKS

	cout << endl;
	cout << "Yang dimasukan adalah: " << endl;
	for(int i=0; i<=jum_baris-1; i++){

		for(int j=0; j<=jum_kolom-1; j++){

			cout << data[i][j] << " ";
		}
		cout << endl;
	}


	getch();
	return 0;
}
