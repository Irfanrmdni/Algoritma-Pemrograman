#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int kuadrat(int nilai){

		int hasil;

		hasil = nilai * nilai;

		return hasil;
	}

	int tambah(int a, int b){

		int c;

		c = a + b;

		return c;
	}

int main(){

	//FUNGSI DENGAN KEMBALIAN ATAU RETURN

	int input, hasil;

	cout << "Masukan angka : ";
	cin >> input;

	hasil = kuadrat(input);

	cout << "Hasilnya adalah : " << hasil << endl;

	int a,b,hasil2;

	cout << "Masukan a: ";
	cin >> a;

	cout << "Masukan b: ";
	cin >> b;

	hasil2 = tambah(a,b);

	cout << "Hasil nya adalah: " << hasil2 << endl;



	getch();
	return 0;
}
