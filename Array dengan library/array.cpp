#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <array> // LIBRARY STANDART ARRAY C++

using namespace std;

	/*	PENULISAN ARRAY
		array < tipe data, jumlah elemen > nama array
	*/

int main(){

	//ARRAY DENGAN STANDART LIBRARY
	array < int, 5 > nilai;

	//MENGUBAH NILAI DARI INDEKS/ELEMEN
	nilai[0] = 1;
	nilai[1] = 2;
	nilai[2] = 3;
	nilai[3] = 12;
	nilai[4] = 5;

	for(int i=0; i<=4; i++){

		cout << nilai[i] << endl;
	}
	cout << endl;
	//MENGHITUNG JUMLAH ARRAY MENGGUNAKAN LIBRARY STANDART
	cout << "Jumlah array: " << nilai.size() << endl;

	//MENCARI/MENAMPILKAN ADDRESS AWAL DARI INDEKS ARRAY
	cout << "Nilai awal array: " << nilai.begin() << endl;

	//MENCARI/MENAMPILKAN ADDRESS AKHIR DARI INDEKS ARRAY
	cout << "Nilai akhir array: " << nilai.end() << endl;

	//MENCARI/MENAMPILKAN NILAI DARI ELEMEN ARRAY / INDEKS ARRAY
	cout << "Nilai array[3]: " << nilai.at(3) << endl;


	getch();
	return 0;
}
