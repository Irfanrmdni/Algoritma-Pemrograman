#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK
	// PROGRAM MEMBACA DATA SECARA BERULANG DARI INPUT DAN MELETAKAN NYA KE DALAM LARIK

	int jumdata;
	double data[10];
	char jawaban;

	// LANGKAH UNTUK MENANGANI PEMASUKAN DATA
	for(int i=0; i<10; i++){

		cout << "Masukan bilangan = ";
		cin >> data[i];
		cout << endl;

		cout << "Ingin memasukan lagi? (y/t): ";
		cin >> jawaban;
		cout << endl;
		if(jawaban=='t'||jawaban=='T'){

			jumdata = i + 1;
			break;
		}
	}

	// LANGKAH UNTUK MENAMPILKAN DATA
	for(int i=0; i<jumdata; i++){

		cout << data[i] << endl;
	}

	getch();
	return 0;
}
