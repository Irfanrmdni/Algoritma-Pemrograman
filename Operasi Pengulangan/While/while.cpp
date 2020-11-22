#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	OPERASI PENGULANGAN ULANG..AKHIR..ULANG (WHILE)
	ULANG SELAMA kondisi
	pertanyaan-1
	....
	pertanyaan-2
	AKHIR-ULANG

	DALAM HAL INI BAGIAN PERTANYAAN 1 & 2 AKAN DIJALANKAN TERUS MENERUS SELAMA KONDISI
	BERNILAI BENAR

*/

int main(){

	int m,n,r;

	cout << "Masukan nilai m = ";
	cin >> m;

	cout << "Masukan nilai n = ";
	cin >> n;

	r = m % n; // sisa pembagian m dengan n dan hasilnya akan diletakan di variabel r
	while(r != 0){

		m = n;
		n = r;
		r = m % n;
	}

	cout << "FPB = " << n << endl;




	getch();
	return 0;
}
