#include <stdio.h>
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

 char *kanan(char st[], int n){ // char st[] ITU BERUPA STRING YANG MEMILIKI JUMLAH ELEMEN
								// int n ITU MEMILIKI JUMLAH BILANGAN
		int panjang, i, indeks;
		static char strTemp[80];
		panjang = strlen(st); // PANJANG ITU SAMA DENGAN PANJANG DARI JUMLAH ELEMEN DARI ST

		if(n>panjang){ // JIKA N ITU MELEBIHI PANJANG MAKA N ITU SAMA DENGAN PANJANG

			n = panjang;
		}
		i = 0; // i ITU SAMA DENGAN 0
		for(indeks = panjang - n; indeks < panjang; indeks++){

			strTemp[i] = st[indeks];
			i++;
		}
		strTemp[i+1] = 0;
		return (char *)strTemp;

 }

int main(){

	// SUBRUTIN FUNGSI
	// PROGRAM YANG MEMILIKI 2 ARGUMEN BERUPA STRING ST DAN BILANGAN N
	// SUBRUTIN INI MEMBERIKAN NILAI BALIK BERUPA STRING YANG TERDIRI ATAS N BUAH KARAKTER
	// YANG TERLETAK DI BAGIAN KANAN STRING ST

	cout << kanan("irpan ramdani",3)<< endl;
	cout << kanan("irpan ramdani",7)<< endl;
	cout << kanan("irpan ramdani",13)<< endl;

	getch();
	return 0;
}
