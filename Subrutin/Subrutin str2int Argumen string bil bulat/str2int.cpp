#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

	long int str2int(char *st){

		// CEK KALAU STRING BERUPA STRING KOSONG
		int ok; // ok = 1 berarti ok kalau ok = 0 maka tidak ok
		int i;
		int digit;
		long int hasil;
		long int pengali;
		long int bilangan;

		// CEK APAKAH STRING KOSONG
		if(strlen(st)==0){

			return 0;
		}
		// CEK APAKAH STRING BERISI KARAKTER YANG VALID UNTUK BILANGAN
		ok = 1;
		if(!(st[0]=='+'||st[0]=='-'||(st[0]>='0'&&st[0]<='9'))){

			ok = 0;
		}
		else{

			for(int i=1; i<strlen(st); i++){

				if(!((st[i]>='0') && (st[i]<='9'))){

					ok = 0;
					break;
				}
			}
		}
		if(!ok){

			return 0;
		}
		// KONVERSI STRING KE ANGKA
		bilangan = 0;
		pengali = 1;
		for(int i=strlen(st)-1; i>=0; i--){

			switch (st[i]){

			case '0':
				digit = 0;
				break;
			case '1':
				digit = 1;
				break;
			case '2':
				digit = 2;
				break;
			case '3':
				digit = 3;
				break;
			case '4':
				digit = 4;
				break;
			case '5':
				digit = 5;
				break;
			case '6':
				digit = 6;
				break;
			case '7':
				digit = 7;
				break;
			case '8':
				digit = 8;
				break;
			case '9':
				digit = 9;
				break;
			case '-':
				digit = -1;
				break;
			case '+':
				digit = 0;

			}

			if(digit != -1){

				bilangan = bilangan + digit * pengali;
				pengali = pengali + 10;
			}
			else{

				bilangan = -bilangan;
			}
		}
		return bilangan;
	}

int main(){

	// SUBRUTIN FUNGSI
	// PROGRAM DENGAN ARGUMEN SUATU STRING YANG MENYATAKAN BILANGAN BULAT
	// NILAI BALIKNYA BERUPA SUATU ANGKA YANG MERUPAKAN HASIL KONVERSI STRING TERSEBUT
	// KEDALAM BENTUK BILANGAN

	cout << str2int("1234567") << endl;
	cout << str2int("-1234567") << endl;
	cout << str2int("1.234.567") << endl;


	getch();
	return 0;
}
