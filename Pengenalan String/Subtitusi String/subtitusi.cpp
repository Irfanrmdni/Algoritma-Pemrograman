#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

	//SUBTITUSI STRING

	string kalimat_1("aku suka kamu tapi kamu tidak suka aku!");
	string kalimat_2("sabar aja nanti juga indah!");
	string kalimat_3("odading mang oleh");

	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl << endl;

	//SWAP STRING YAITU MENUKAR KALIMAT PADA DUA BUAH STRING
	kalimat_1.swap(kalimat_2);
	cout << "Swap string: " << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl << endl;

	//REPLACE STRING ATAU MENGGANTI KALIMAT PADA STRING
	//KARENA KALIMAT 1 SUDAH DI SWAP KE KALIMAT 2 MAKA KITA AKAN REPLACE KALIMAT 2 DAN SEBALIKNYA
	//PENULISAN REPLACE(INDEKS,JUMLAH KALIMAT,KALIMAT YANG AKAN DIGANTI)
	kalimat_1.replace(21,5,"bahagia");
	kalimat_2.replace(35,3,"jono");
	//ATAU BISA JUGA DENGAN MENGGUNAKAN FIND UNTUK MENCARI INDEKS NYA
	kalimat_3.replace(kalimat_3.find("oleh"),4,"ajip");
	cout << "Replace string: " << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;
	cout << "3: " << kalimat_3 << endl << endl;

	//INSERT STRING YAITU MENAMBAHKAN KALIMAT PADA STRING
	//PENULISAN INSERT(DIMULAI DARI INDEKS KE BERAPA, KALIMAT YANG MAU DITAMBAHKAN)
	kalimat_3.insert(13,"rasanya anjing banget ");
	cout << "3: " << kalimat_3 << endl;



	getch();
	return 0;
}
