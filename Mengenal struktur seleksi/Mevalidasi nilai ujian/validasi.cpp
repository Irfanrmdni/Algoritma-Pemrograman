#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

    // SELEKSI MAJEMUK
    // SUATU SELEKSI DENGAN KONDISI LEBIH DARI SEBUAH KONDISI
    // CONTOH PROGRAM MEMVALIDASI NILAI UJIAN

	double nilai;

	cout << "Masukan nilai ujian = ";
	cin >> nilai;

	if(nilai>=0 && nilai <=100){

		cout << "NILAI UJIAN ABSAH" << endl;
	}
	else{

		cout << "NILAI UJIAN TIDAK ABSAH" << endl;
	}







	return 0;
}
