#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERATOR PENGULANGAN DENGAN WHILE
	// PROGRAM MEMBACA DATA DARI INPUT SAMPAI TERUS MENERUS SAMPAI -99999 DIMASUKAN DAN MENAMPILKAN NILAI TERBESARNYA

	double terbesar, rata, bil, jum;
	int pencacah, selesai;

	selesai = 0; // tidak selesai
	pencacah = 0;
	jum = 0;

	while(!selesai){

		cout << "Masukan bilangan (akhiri dengan -99999) : ";
		cin >> bil;

		if(bil==-99999){

			selesai = 1; // berati selesai
		}
		else{

			pencacah = pencacah + 1;
			jum = jum + bil;

			if(pencacah = 1){

				terbesar = bil;
			}else if(bil>terbesar){

				terbesar = bil;

			}
		}
	}

	if(pencacah == 0){

		cout << "Tidak ada data yang dimasukan" << endl;
	}else{

		rata = jum/pencacah;
		cout << "terbesar = " << terbesar << endl;
		cout << "rata-rata = " << rata << endl;
	}




	getch();
	return 0;
}
