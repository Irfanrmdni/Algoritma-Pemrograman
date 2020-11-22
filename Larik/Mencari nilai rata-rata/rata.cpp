#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK
	// MENCARI NILAI RATA-RATA

	char pilih;
	int data[10];
	int jumdata, jumtotal;
	double rata;

	// LANGKAH UNTUK MEMASUKAN DATA DENGAN MAKSIMAL 10 BUAH
	for(int i=0; i<10; i++){

		cout << "Masukan bilangan = ";
		cin >> data[i];
		cout << endl;

		cout << "Ingin memasuki lagi? (y/t): ";
		cin >> pilih;
		cout << endl;
		if(pilih=='t'||pilih=='T'){

			jumdata = i+1;
			break;
		}
	}

	// LANGKAH UNTUK MENJUMLAHKAN ISI SEMUA ELEMEN
	jumtotal = 0;
	for(int i=0; i<jumdata; i++){

		jumtotal = jumtotal + data[i];
	}

	// LANGKAH UNTUK MENENTUKAN NILAI RATA-RATA
	rata = jumtotal/jumdata;
	cout << "Rata-Rata: " << rata << endl;


	getch();
	return 0;
}
