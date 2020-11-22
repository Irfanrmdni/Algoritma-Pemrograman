#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// MENAMPILKAN STRING DAN MENYUSUN NYA DARI JUMLAH HURUF PERTAMA HINGGA AKHIR

	char kata[100];

	int panjang;

	cout << "Masukan kata bebas : ";
	gets(kata);

	panjang = strlen(kata); // FUNGSI STRLEN UNTUK MENCARI BANYAKNYA KARAKTER
	for(int i=0; i<panjang; i++){

		for(int j=i; j<panjang; j++){

			cout << kata[j];
		}
		cout << endl;
	}




	getch();
	return 0;
}
