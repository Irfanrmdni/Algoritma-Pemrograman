#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){

	//STRUKTUR SELEKSI
	//PROGRAM MENGHITUNG AKAR PERSAMAAN KUADRAT
	//CONTOH PROGRAM
	/*
		SUATU AKAR PERSAMAAN KUADRAT AX^2 + BC + C = 0
		MEMLIKI AKAR PENYELESAIAN BERUPA X^1 DAN X^2
		DITINJAU DARI DISKRIMINANNYA
		ADA TIGA KEMUNGKINAN BENTUK AKAR-AKARNYA
		DALAM HAL INI DISKRIMINAN DIPEROLEH MELALUI RUMUS B^2-4AC
	*/

	double a,b,c;
	double diskriminan,x1,x2,re,im;

	cout << "Masukan nilai a = ";
	cin >> a;
	cout << "Masukan nilai b = ";
	cin >> b;
	cout << "Masukan nilai c = ";
	cin >> c;

	diskriminan = b*b-4*a*c;

	if(diskriminan > 0){

		x1 = (-b + sqrt(diskriminan)) / (2 * a);
		x2 = (-b - sqrt(diskriminan) / (2 * a));
		cout << "Akar Real :" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;

	}
	else if(diskriminan==0){

		x1 = -b / (2*a);
		x2 = x1;
		cout << "Akar Kembar :"<< endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else{

		re = -b / (2*a);
		im = sqrt(fabs(diskriminan)) / (2*a);
		cout << "Akar kompleks :" << endl;
		cout << "x1 = " << re << " + " << im << endl;
		cout << "x2 = " << re << " - " << im << endl;
	}


	getch();
	return 0;
}
