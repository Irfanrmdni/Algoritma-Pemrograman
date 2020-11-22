#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

	//SELEKSI BERSARANG
	//PROGRAM MENENTUKAN JUMLAH HARI
	//CONTOH

	int kodebulan;

	cout << "Masukan kode bulan = ";
	cin >> kodebulan;

	if(kodebulan==2){

		cout << "JUMLAH HARI 28 ATAU 29"<<endl;
	}
	else if(kodebulan==1 || kodebulan==3 || kodebulan==5 ||
			kodebulan==7 || kodebulan==8 || kodebulan==10 || kodebulan==12){

				cout << "JUMLAH HARI 31"<<endl;
			}
	else if(kodebulan==4 || kodebulan==6 || kodebulan==9 || kodebulan==11){

		cout << "JUMLAH HARI 30"<<endl;
	}
	else{

		cout << "MASUKAN KODE DENGAN BENAR"<<endl;
	}


	getch();
	return 0;
}
