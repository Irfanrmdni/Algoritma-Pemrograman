#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

  /*
		mengenal tipe struct = yang dapat dipakai untuk menghimpun sejumlah data dengan tipe data yang berbeda
		data yang diletakan dalam struct adalah data terkait

		contoh :

		struct data_pegawai{

			int nim;
			char nama [25];
			long int gaji
		}
		pada contoh diatas tipe struct data_pegawai terdiri atas data nim, nama dan gaji
		yang secara berturut-turut

    */

struct data_pegawai{

		int nip;
		string nama;
		long int gaji;

	};

int main(){

	data_pegawai peg;

	peg.nip = 2113;
	peg.nama = "azizah syafa";
	peg.gaji = 1200000;

	cout << "nip : " << peg.nip << endl;
	cout << "nama : " << peg.nama << endl;
	cout << "gaji : " << peg.gaji << endl;







	getch();
	return 0;
}
