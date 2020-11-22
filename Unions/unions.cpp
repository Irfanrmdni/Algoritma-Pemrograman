#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	union nama{

		int nilai;
		char nama[4];
	};

	/*
		JADI MISALKAN PUNYA 3 BUAH DATA DENGAN MASING MASING DATA 1 = INT, DATA 2 = FLAOT, DATA 3 = DOUBLE
		DATA DATA TERSEBUT MEMILIKI ADDRESS YANG BERBEDA. MAKA DARI ITU FUNGSI UNIONS ADALAH
		UNTUK MENGALOKASIKAN KETIKA DATA/ADDRESS TU KEDALAM 1 ADDRES
		NAMUN TIPE DATA NYA AKAN MENJADI SAMA SEMUA : MISAL INT,FLOAT,DOUBLE MAKA INI AKAN MENJADI 1 SAJA
		YANG DIAMBIL TIPE DATA YANG MAKSIMUM
	*/

int main(){

	//UNIONS

	nama data;

	data.nilai = 201190;
	data.nama[4] = 'a','g','u','s';

	cout << "Nilai: " << data.nilai << endl;
	cout << "Nama: " << data.nama << endl;


	getch();
	return 0;
}
