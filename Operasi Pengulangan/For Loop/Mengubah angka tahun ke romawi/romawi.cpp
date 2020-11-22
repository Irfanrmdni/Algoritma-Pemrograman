#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// PROGRAM MENGUBAH ANGKA TAHUN MENJADI ANGKA ROMAWI

	/*
	ANGKA YANG DIMASUKAN DARI 1 SAMPAI DENGAN 3999
	SIMBOL ANGKA ROMAWI M = 1000 | D = 500 | C = 100 | L = 50 | X = 10 | I = 1
	*/

	int tahun;

	cout << "Masukan Tahun : ";
	cin >> tahun;

	if(tahun<1 || tahun>3999){

		cout << "Tahun harus dalam jangkauan 1..3999" << endl;
	}
	else{

		while(tahun>=1000){

			cout << "M";
			tahun = tahun - 1000;
		}
	}

	if(tahun>=500){

		if(tahun>=900){

			cout << "CM";
			tahun = tahun - 900;
		}
		else{

			cout << "D";
			tahun = tahun - 500;
		}
	}

	while(tahun>=100){

		if(tahun>=400){

			cout << "CD";
			tahun = tahun - 400;
		}
		else{

			cout << "C";
			tahun = tahun - 100;
		}
	}

	if(tahun >=50){

		if(tahun >=90){

			cout << "XC";
			tahun = tahun - 90;
		}
		else{

			cout << "L";
			tahun = tahun - 50;
		}
	}

	while(tahun>=10){

		if(tahun>=40){

			cout << "XL";
			tahun = tahun - 40;
		}
		else{

			cout << "X";
			tahun = tahun - 10;
		}
	}

	if(tahun >=5){

		if(tahun==9){

			cout << "IX";
			tahun = tahun - 4;
		}
		else{

			cout << "V";
			tahun = tahun - 5;
		}
	}

	while(tahun >=1){

		if(tahun >=4){

			cout << "IV";
			tahun = tahun - 4;
		}
		else{

			cout << "I";
			tahun = tahun - 1;
		}
	}




















	getch();
	return 0;
}
