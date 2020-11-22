#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK
	// MENAMPILKAN NAMA BULAN

	/*
		ELEMEN PERTAMA DALAM LARIK NAMA_BULAN SENGAJA DIISI DENGAN STRING KOSONG
		DENGAN MAKSUD AGAR NAMA_BULAN DAPAT DIAKSES DENGAN BENTUK nama_bulan[kode_bulan]
	*/

	char nama_bulan[][12]={"","januari","februari","maret","april","mei","juni","juli",
						  "agustus","september","oktober","november","desember"};
	int kode_bulan;

	cout << "Masukan kode bulan = ";
	cin >> kode_bulan;

		if(kode_bulan>=1 && kode_bulan<=12){

			cout << "Kode Bulan: " << nama_bulan[kode_bulan] << endl;
		}
		else{

			cout << "Masukan kode antara 1-12" << endl;
		}

	getch();
	return 0;
}
