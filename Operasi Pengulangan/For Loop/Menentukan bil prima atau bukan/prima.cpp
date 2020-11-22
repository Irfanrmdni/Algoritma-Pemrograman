#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// PROGRAM MENENTUKAN BILANGAN PRIMA ATAU BUKAN
	// bilangan prima adalah bilangan yang hanya habis dibagi 1 atau dirinya sendiri

	int jum;

	int bil;

	cout << "Masukan bilangan bulat = ";
	cin >> bil;
	jum = 0;
	for(int i=1; i<=bil; i++)

		if (bil % i == 0){

			jum = jum + 1;
		}
		if (jum == 2){

			cout << "Bilangan prima"<<endl;
		}
		else{

			cout << "Bukan bilangan prima"<<endl;
		}


	getch();
	return 0;
}
