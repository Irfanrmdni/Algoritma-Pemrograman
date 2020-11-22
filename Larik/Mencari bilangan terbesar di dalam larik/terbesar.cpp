#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK
	// PROGRAM MENYIMPAN DATA KE DALAM LARIK DAN MENCARI BILANGAN TERBESAR NYA

	int terbesar;
	int data[]={10,4,7,8,9,4,0,2,3,1};

	terbesar = data[0];
	for(int i=1; i<=10; i++){

		if(data[i]>terbesar){

			terbesar = data[i];

		}

	}

	cout << "Terbesar : " << terbesar << endl;
	/*
		MULA MULA VARIABEL TERBESAR DIISI DENGAN ELEMEN PERTAMA LARIK DATA
		SELANJUTNYA SEMUA ELEMEN KEDUA HINGGA TERAKHIR DIBANDINGKAN DENGAN ISI VARIABEL
		TERBESAR, KALAU NILAI ELEMEN TERSEBUT LEBIH BESAR DARIPADA VARIABEL TERBESAR
		MAKA ISINYA DIBERIKAN KE VARIABEL TERBESAR

	*/

	getch();
	return 0;
}
