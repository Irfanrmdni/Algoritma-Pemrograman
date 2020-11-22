#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <array>

using namespace std;

	const int arraySize = 10;

	void print_array(array<int, arraySize> &angka){

		cout << "Array : ";
		for(int &a : angka){

			cout << a << " ";
		}
		cout << endl;
	}

int main(){

	//SEARCH ARRAY MENGGUNAKAN STANDAR LIBRARY

	array<int, arraySize> angka = {2,1,9,0,6,3,7,4,5,8};
	cout << "Data sebelum diurutkan : " << endl;
	print_array(angka);
	cout << endl;

	bool ketemu; // KETEMU ITU FALSE / TRUE
	int cariangka;
	sort(angka.begin(), angka.end());
	cout << "Data sudah diurutkan : " << endl;
	print_array(angka);
	//SEBELUM MENCARI ANGKA KITA HARUS MENGURUTKAN TERLEBIH DAHULU
	cout << "Masukan angka yang dicari : ";
	cin >> cariangka;

	//SETELAH DI URUTKAN KITA LANGSUNG MENG INISIALISASI BAHWA KETEMU ITU = SEARCH ATAU DATA YANG SUDAH DICARI
	//CARI ANGKA = DATA YANG NANTI AKAN DI CARI
	ketemu = binary_search(angka.begin(), angka.end(), cariangka);
	if(ketemu){

		cout << "Ketemu" << endl;
	}else{

		cout << "Tidak ketemu" << endl;
	}


	getch();
	return 0;
}
