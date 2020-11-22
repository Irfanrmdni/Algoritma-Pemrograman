#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

// OPERASI LARIK BERTIPE REKAMAN
	/*
		SUATU LARIK BISA SAJA MELIBATKAN TIPE REKAMAN ATAU STRUCT
		CONTOH:
		simpul = REKAMAN
			data1
			data2
			data3
		AKHIR REKAMAN

		UNTUK MENYATAKAN data1 YANG TERDAPAT PADA simpul DIGUNAKAN NOTASI simpul=data1

		DALAM C++
		struct rek_simpul1{

			tipe data1
			tipe data2
			tipe data3
		};

		UNTUK MENYATAKAN FIELD data1 NOTASI NYA simpul.data1

	*/

	struct siswa{

		double nilai;
		char nama[25];
	};

int main(){

	// CONTOH PROGRAM MEMBACA DATA NAMA DAN NILAI DARI 10 SISWA
	// KEMUDIAN MENCARI NILAI RATA-RATA DAN MENAMPILKAN SISWA YANG GAGAL
	siswa data[10];

	int pencacah = 0;
	double jum;
	int ada_gagal;

	// MEMBACA DATA DAN MEMASUKAN NAMA DAN NILAI KE LARIK
	while(pencacah<10){

		cout << "Nama siswa: ";
		cin >> data[pencacah].nama;

		while(1){

			cout << "Nilai siswa= ";
			cin >> data[pencacah].nilai;

			if(data[pencacah].nilai>=0 && data[pencacah].nilai<=100){

				break;
			}
			else{

				cout << "Nilai harus terletak antara 0-100" << endl;
			}
		}
		pencacah = pencacah + 1;
	}

	// MENJUMLAHKAN SEMUA NILAI
	jum = 0;
	pencacah = 0;
	while(pencacah<10){

		jum = jum + data[pencacah].nilai;
		pencacah = pencacah + 1;
	}

	// MENAMPILKAN SISWA YANG GAGAL
	cout << "Siswa yang gagal" << endl;
	ada_gagal = 0;
	pencacah = 0;

	while(pencacah<10){

		if(data[pencacah].nilai<60){

			ada_gagal = 1;
			cout << data[pencacah].nama << endl;
		}
		pencacah = pencacah + 1;
	}

	if(ada_gagal==0){

		cout << "Tidak ada" << endl;

	}

	getch();
	return 0;
}
