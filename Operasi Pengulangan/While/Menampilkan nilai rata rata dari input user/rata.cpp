#include <stdio.h>
#include <iostream>
#include <conio.h>


using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN WHILE
	// PROGRAM MENAMPILKAN NILAI RATA-RATA DARI INPUT USER

	int n, pencacah;
	double jum,bil,rata;

	jum = 0;
	pencacah = 1;

	cout << "Masukan jumlah data = ";
	cin >> n;

	while(pencacah<=n){

		cout << "Bilangan ke " << pencacah << " : ";
		cin >> bil;

		jum = jum + bil; // menjumlahkan
		pencacah = pencacah + 1;
	}

	rata = jum/n;
	cout << rata << endl;

	getch();
	return 0;
}
