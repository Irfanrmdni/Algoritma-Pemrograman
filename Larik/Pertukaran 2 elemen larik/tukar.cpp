#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK
	// PROGRAM PERTUKARAN 2 ELEMEN LARIK

	int data[8] = {8,9,4,7,6,1,5,3};

	int tmp;

	for(int i=0; i<=7; i+=2){ // i+=2 SETIAP PENGULANGAN BERTAMBAH 2


		tmp = data[i]; // INISIALISASI BAHWA TMP ADALAH DATA[i] [i] = 0 SAMPAI 7
		data[i] = data[i+1]; // DATA[i+1] = MULAINYA DI ANGKA KE 2 KARENA DITAMBAH 1
		data[i+1] = tmp;
	}

	for(int i=0; i<=7; i++){

		cout << data[i] << " ";
	}

	getch();
	return 0;
}
