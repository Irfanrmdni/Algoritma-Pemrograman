#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(){

	//STRUKTUR SELEKSI DENGAN SWITCH CASE
	//SELEKSI BERSARANG
	//PROGRAM MENENTUKAN KODE BULAN
	//CONTOH PROGRAM

	int kode_bulan;

	cout << "Masukan kode bulan = ";
	cin >> kode_bulan;

	//COCOK KODE BULAN
	switch (kode_bulan){

		case 1:
			cout << "BULAN JANUARI"<<endl;
			break;
		case 2:
			cout << "BULAN FEBRUARI"<<endl;
			break;
		case 3:
			cout << "BULAN MARET"<<endl;
			break;
		case 4:
			cout << "BULAN APRIL"<<endl;
			break;
		case 5:
			cout << "BULAN MEI"<<endl;
			break;
		case 6:
			cout << "BULAN JUNI"<<endl;
			break;
		case 7:
			cout << "BULAN JULI"<<endl;
			break;
		case 8:
			cout << "BULAN AGUSTUS"<<endl;
			break;
		case 9:
			cout << "BULAN SEPTEMBER"<<endl;
			break;
		case 10:
			cout << "BULAN OKTOBER"<<endl;
			break;
		case 11:
			cout << "BULAN NOVEMBER"<<endl;
			break;
		case 12:
			cout << "BULAN DESEMBER"<<endl;
			break;
		default:
			cout << "Masukan kode dengan benar"<<endl;

	}













	getch();
	return 0;
}
