#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

	//AKSES SUBSTRING

	string kalimat_1("dayat suka ngopi di pagi hari");
	string kalimat_2("darwin gera nimba");

	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl << endl;

	//SUBSTRING YAITU MENGAMBIL KATA/STRING DI TENGAH TENGAH
	//PENULISAN NYA SUBSTR(INDEKS,PANJANG) INDEKS NYA DIMULAI DARI 0
	//MENGAMBIL STRING PADA KALIMAT 1 DENGAN INDEKS DARI 11 DAN PANJANG NYA 5
	cout << kalimat_1.substr(11,5) << endl;
	cout << kalimat_2.substr(12,5) << endl << endl;

	//MENCARI POSISI DARI SUBSTRING DENGAN FIND
	//PENULISAN FIND("STRING")
	cout << "Posisi substring kalimat 1 pagi: " << kalimat_1.find("pagi") << endl;
	cout << "Posisi substring kalimat 2 gera: " << kalimat_2.find("gera") << endl << endl;

	//MENCARI POSISI DARI SUBSTRING DENGAN FIND DAN MENYIMPAN INDEKS KEDALAM VARIABEL
	int a = kalimat_1.find("i");
	cout << "Mencari posisi i: " << a << endl;
	//MENCARI STRING DARI KALIMAT_1 = I KEMUDIAN VARIABEL A NYA + 1 ITU BERARTI DIA AKAN MENCARI LAGI STRING DENGAN KATA I / KATA YANG SAMA
	cout << "Mencari posisi i + 1: " << kalimat_1.find("i",a + 1) << endl;

	//MENCARI POSISI SUBSTRING DARI BELAKANG DENGAN MENGGUNAKAN RFIND
	cout << "Mencari posisi dari belakang: " << kalimat_2.rfind("i") << endl;


	getch();
	return 0;
}
