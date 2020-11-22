#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

	// OPERASI LARIK 2 DIMENSI
	/*
		PADA LARIK 2 DIMENSI SETIAP ELEMEN DIAKSES MELALUI DUA BUAH INDEKS
		YAITU INDEKS BARIS DAN KOLOM
		0| 1 | 2 | 3 | 4 <= INI DINAMAKAN KOLOM

		0
		-
		1
		-
		2
		-
		3
		-
		4 <= INI DINAMAKAN BARIS

		UNTUK MENGAKSES ELEMEN LARIK TERSEBUT DAPAT DIPERLUKAN NOTASI
		NILAI[indeks_baris][indeks_kolom]
	*/

int main(){

	// PROGRAM MENYIMPAN DATA PASANGAN NEGARA DAN IBU KOTA NYA

	char negara[5][2][15];

	strcpy(negara[0][0], "Indonesia");
	strcpy(negara[0][1], "Jakarta");
	strcpy(negara[1][0], "Filipina");
	strcpy(negara[1][1], "Manila");
	strcpy(negara[2][0], "Austria");
	strcpy(negara[2][1], "Wina");
	strcpy(negara[3][0], "India");
	strcpy(negara[3][1], "New Delhi");
	strcpy(negara[4][0], "Iran");
	strcpy(negara[4][1], "Taheran");

	for(int i=0; i<5; i++){

		if(negara[i][0][0] = 'I'){

			cout << negara[i][0] << " - " << negara[i][1] << endl;
		}
	}










	getch();
	return 0;
}
