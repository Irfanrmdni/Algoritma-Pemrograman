#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int ganjil(int bil){

		if(bil%2==1){

			return 1; // RETURN 1 ITU JIKA NILAI NYA GANJIL MAKA AKAN MENAMPILKAN NILAI 1
		}
		else{

			return 0; // RETURN 0 ITU JIKA NILAI NYA GENAP MAKA AKAN MENAMPILKAN NILAI 0
		}
	}

int main(){

	// SUBRUTIN FUNGSI
	// PROGRAM MENENTUKAN BILANGAN GANJIL ATAU GENAP

	// SUBRUTIN MEMBERIKAN NILAI BALIK 1 KALAU BILANGAN ARGUMEN ITU GANJIL
	// ATAU NILAI BALIK 0 UNTUK KEADAAN SEBALIKNYA

	//MEMANGGIL
	cout << "Ganjil = " << ganjil(5) << endl;
	cout << "Ganjil = " << ganjil(13) << endl;
	cout << "Ganjil = " << ganjil(8) << endl;

	getch();
	return 0;
}
