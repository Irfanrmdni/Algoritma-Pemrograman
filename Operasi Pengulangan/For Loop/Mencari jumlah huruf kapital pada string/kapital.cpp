#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// MENAMPILKAN STRING DAN MENGHITUNG JUMLAH HURUF KAPITAL NYA SAJA

	char kata[100];
	char kar;
	int jum = 0, panjang;

	cout << "Masukan kata : ";
	gets(kata);

	for(int i=0; i<strlen(kata); i++){

		kar = kata[i];
		if(kar>='A' && kar<='Z'){

			jum++;
		}
	}

	cout << "Jumlah kata = " << jum << endl;


	getch();
	return 0;
}
