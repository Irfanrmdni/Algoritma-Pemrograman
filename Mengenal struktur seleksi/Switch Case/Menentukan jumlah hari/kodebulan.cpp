#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	//SELEKSI BERSARANG
	//PROGRAM MENENTKAN JUMLAH HARI DENGAN SWITCH CASE
	//CONTOH

	int kodebulan;

	cout << "Masukan kode bulan = ";
	cin >> kodebulan;

	switch(kodebulan){

		case 2:
			cout << "JUMLAH HARI 28 ATAU 29"<<endl;
			break;
		case 1:
			cout << "JUMLAH HARI 31"<<endl;
			break;
		case 3:
			cout << "JUMLAH HARI 31"<<endl;
			break;
		case 5:
			cout << "JUMLAH HARI 31"<<endl;
			break;
		case 7:
			cout << "JUMLAH HARI 31"<<endl;
			break;
		case 8:
			cout << "JUMLAH HARI 31"<<endl;
			break;
		case 10:
			cout << "JUMLAH HARI 31"<<endl;
			break;
		case 12:
			cout << "JUMLAH HARI 31"<<endl;
			break;
		case 4:
			cout << "JUMLAH HARI 30"<<endl;
			break;
		case 6:
			cout << "JUMLAH HARI 30"<<endl;
			break;
		case 9:
			cout << "JUMLAH HARI 30"<<endl;
			break;
		case 11:
			cout << "JUMLAH HARI 30"<<endl;
			break;
		default:
			cout << "MASUKAN KODE DENGAN BENAR"<<endl;

	}


	getch();
	return 0;
}
