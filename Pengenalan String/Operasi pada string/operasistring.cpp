#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

	//OPERASI PADA STRING
	//SANGAT BERHUBUNGAN DENGAN ARRAY
	/*
		TIPE DATA PADA STRING:

		APPEND() = UNTUK MENEMPELKAN KATA DENGAN MENGGUNAKAN APPEND CONTOH kata_2.append(kata_3);

		SUBSTRING YAITU MENGAMBIL KATA/STRING DI TENGAH TENGAH PENULISAN NYA SUBSTR(INDEKS,PANJANG)
		INDEKS NYA DIMULAI DARI 0
		MENGAMBIL STRING PADA KALIMAT 1 DENGAN INDEKS DARI 11 DAN PANJANG NYA 5
		cout << kalimat_1.substr(11,5) << endl;

		AKSES SUBSTRING MENCARI POSISI DARI SUBSTRING DENGAN FIND PENULISAN FIND("STRING")

		SWAP STRING YAITU MENUKAR KALIMAT PADA DUA BUAH STRING kalimat_1.swap(kalimat_2);

		REPLACE STRING ATAU MENGGANTI KALIMAT PADA STRING
		PENULISAN REPLACE(INDEKS,JUMLAH KALIMAT,KALIMAT YANG AKAN DIGANTI)
		kalimat_1.replace(21,5,"bahagia");

		INSERT STRING YAITU MENAMBAHKAN KALIMAT PADA STRING
		PENULISAN INSERT(DIMULAI DARI INDEKS KE BERAPA, KALIMAT YANG MAU DITAMBAHKAN)
		kalimat_3.insert(13,"rasanya anjing banget ");









	*/

	string kata("ayam");

	//MENGAMBIL DATA PADA STRING
	cout << kata << endl << endl;

	//MENGAMBIL DATA PADA STRING BERDASARKAN INDEKS
	cout << "indeks ke 0 : " << kata[0] << endl;
	cout << "indeks ke 1 : " << kata[1] << endl;
	cout << "indeks ke 2 : " << kata[2] << endl;
	cout << "indeks ke 3 : " << kata[3] << endl << endl;

	//MERUBAH KATA PADA INDEKS
	kata[1] = 'd';
	kata[3] = 's';
	cout << kata << endl << endl;

	//MENAMBAH KATA / MENYAMBUNG KATA DENGAN KATA LAIN
	//DENGAN MEMBUAT VARIABEL BARU
	string kata_2(kata + " Amrol");
	cout << kata_2 << endl << endl;

	//MENEMPELKAN KATA DENGAN MENGGUNAKAN APPEND
	string kata_3(" Membahana");
	kata_2.append(kata_3);
	cout << kata_2 << endl; // YANG DI TAMPILKAN KATA.2

	//MENJUMLAHKAN VARIABEL KATA DENGAN VARIABEL KATA LAIN

	string kata_4("Ahay!!!");
	kata_2 += " " + kata_4;
	cout << kata_2 << endl;


	getch();
	return 0;
}
