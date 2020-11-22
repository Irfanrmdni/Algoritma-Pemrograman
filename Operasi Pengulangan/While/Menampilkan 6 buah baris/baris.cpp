#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN WHILE
	// PROGRAM MENAMPILKAN 6 BUAH BARIS BERISI TULISAN "SELAMAT BELAJAR"

	int bil;

	bil = 1;

	while(bil <= 6){

		cout << bil << " Selamat Belajar" <<endl;
		bil++; // FUNGSI NYA AGAR PROGRAM MENGULANG SELAMA 6 KALI KALO TIDAK AKAN MENGULANG TERUS MENERUS
	}



	getch();
	return 0;
}
