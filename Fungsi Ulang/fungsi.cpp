#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	//MENGHITUNG LUAS PERSEGI
	double hitungLuas(double p, double l){
		double luas = p * l;
			return luas;
	}

	double hitungKeliling(double p, double l){
		double keliling = 2 * (p + l);
			return keliling;
	}

	void tampil_luas(double p, double l){
		cout << "Luas nya adalah = ";
		cout << hitungLuas(p,l) << endl;
	}

	void tampil_keliling(double p, double l){
		cout << "Keliling nya adalah = ";
		cout << hitungKeliling(p,l) << endl;
	}

int main(){

	// PENGENALAN FUNGSI / METHOD / FUNCTION
	double panjang;
	double lebar;

	cout << "Masukan Panjang : ";
	cin >> panjang;
	cout << "Masukan Lebar : ";
	cin >> lebar;

	cout << endl;
	tampil_luas(panjang, lebar);
	tampil_keliling(panjang, lebar);

	getch();
	return 0;
}
