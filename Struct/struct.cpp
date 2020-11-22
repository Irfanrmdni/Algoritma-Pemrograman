#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

	struct binatang{

		string nama_binatang;
		string warna;
		string makanan;
		int berat;

	};

int main(){

	//STRUCT

	binatang darat;
	binatang air;

	darat.nama_binatang = "gajah";
	darat.warna = "abu-abu";
	darat.makanan = "Tumbuhan";
	darat.berat = 50;

	air.nama_binatang = "Hiu";
	air.warna = "Hitam";
	air.makanan = "Ikan kecil";
	air.berat = 25;

	cout << "Jenis hewan darat " << endl;
	cout << "Nama: " << darat.nama_binatang << endl;
	cout << "Warna: " << darat.warna << endl;
	cout << "Makanan: " << darat.makanan << endl;
	cout << "Berat: " << darat.berat << endl << endl;

	cout << "Jenis hewan air " << endl;
	cout << "Nama: " << air.nama_binatang << endl;
	cout << "Warna: " << air.warna << endl;
	cout << "Makanan: " << air.makanan << endl;
	cout << "Berat: " << air.berat << endl << endl;

	getch();
	return 0;
}
