#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN WHILE
	// MENAMPILKAN STRING DAN MENGUBAH NYA MENJADI TERBALIK

	char string[80];
	int indeks;

	cout << "Masukan kata : ";
	cin >> string;

	indeks = strlen(string)-1; // strlen menghitung panjang dari karakter
	while(indeks >= 0){

		cout << string[indeks];
		indeks = indeks - 1;
	}
	cout << endl;


	getch();
	return 0;
}
