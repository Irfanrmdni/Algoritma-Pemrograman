#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

	//SELEKSI BERSARANG
	//MENENTUKAN PREDIKAT KELULUSAN
	//CONTOH PROGRAM

	float ip;

	cout << "Masukan IP kumulatif anda = ";
	cin >> ip;

	if(ip>=2.00 && ip<=2.75){

		cout << "IP KUMULATIF ANDA LULUS DENGAN MEMUASKAN" <<endl;
	}
	else if(ip>=2.75 && ip<=3.50){

		cout << "IP KUMULATIF ANDA LULUS DENGAN SANGAT MEMUASKAN" <<endl;
	}
	else if(ip>=3.50 && ip<=4.00){

		cout << "IP KUMULATIF ANDA LULUS DENGAN PUJIAN" <<endl;
	}


	getch();
	return 0;
}
