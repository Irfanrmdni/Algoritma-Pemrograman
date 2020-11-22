#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
/*
		PELEWATAN ARGUMEN KE DALAM FUNGSI YANG MEMBUAT NILAI ARGUMEN DAPAT DIUBAH DALAM FUNGSI
		DIKENAL DENGAN NAMA PEMANGGILAN DENGAN REFERENSI

		PARAMETER DALAM DEFINISI FUNGSI PERLU DITULIS DENGAN AWALAN TANDA *
		AWALAN & PERLU DITULIS DI DEPAN ARGUMEN PADA PEMANGGILAN FUNGSI
		& DINYATAKAN DENGAN REFERENSI

		VOID TUKAR(DOUBLE *X, DOUBLE *Y){

			DOUBLE Z;

			Z = *X;
			*X = *Y;
			*Y = Z;
		}

		BAHWA X DAN Y DALAM DAFTAR PARAMETER DITULIS DENGAN AWALAN * (YANG MENYATAKAN POINTER)
		PADA PERTANYAAN
			Z = *X;
		VARIABEL Z DIISI DENGAN " NILAI YANG DITUNJUK OLEH X "
		PADA PERTANYAAN
			*X = *Y
		BERARTI NILAI YANG DITUNJUK OLEH X DIISI DENGAN NILAI YANG DITUNJUK OLEH Y

	*/

	// POINTER
	void tukar(double *x, double *y){

		double z;
		z = *x;
		*x = *y;
		*y = z;
	}

	// NON POINTER / REFERENSI
	void tukar2(double &i, double &j){

		double k;
		k = i;
		i = j;
		j = k;
	}

int main(){

	// SUBRUTIN FUNGSI
	// MENGUBAH NILAI ARGUMEN

	double a, b, p, l;

	a = 56.7;
	b = 12.3;
	p = 90.9;
	l = 2.1;

	tukar(&a,&b); // & BERFUNGSI UNTUK PEMANGGILAN POINTER DARI PARAMETER DI FUNGSI
	cout << "Dengan pointer: " << endl;
	cout << "a= " << a << " b= " << b << endl;

	tukar2(p,l); // TIDAK ADA AWALAN TANDA & KARENA INI DISEBUT REFERENSI YANG DIBERLAKUKAN SEPERTI VARIABEL BIASA
	cout << "Dengan Non-pointer/Referensi: " << endl;
	cout << "p= " << p << " l= " << l << endl;


	getch();
	return 0;
}
