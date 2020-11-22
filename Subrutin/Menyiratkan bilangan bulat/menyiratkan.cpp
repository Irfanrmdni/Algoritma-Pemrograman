#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

	char *format_ribuan(char st[]){

		static char strTemp[80];
		int posisiTemp, posisiSt;
		int panjang, jum_titik, sisa_digit;
		int jumkar;

		panjang = strlen(st);

		if(panjang == 0){

			return (char *) 0;
		}
		jum_titik = panjang /3;

		if(jum_titik==0){

			return (char *) st;
		}
		jumkar = panjang + jum_titik;
		posisiTemp = jumkar - 1;

		while(panjang > 3){

			// AMBIL TIGA BUAH KARAKTER TERAKHIR
			posisiSt = panjang - 1;
			for(int i = posisiSt; i > posisiSt-3; i--){

				strTemp[posisiTemp] = st[i];
				posisiTemp = posisiTemp - 1;
			}

			strTemp[posisiTemp] = ',';
			posisiTemp--;
			panjang = panjang - 3;
		}
		// TULIS SISA DIGIT
		if(panjang > 0){

			for(int i = 0; i < panjang; i++){

				strTemp[i] = st[i];
			}
		}
		strTemp[jumkar] = 0;

		return (char *)strTemp;
	}

int main(){

	// SUBRUTIN FUNGSI
	// PROGRAM MENYIRATKAN RIBUAN BILANGAN

	cout << format_ribuan("1000000") << "\n";

	getch();
	return 0;
}
