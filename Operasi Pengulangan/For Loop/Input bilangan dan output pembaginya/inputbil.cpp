#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// PROGRAM MENAMPILKAN BILANGAN DARI INPUT DAN MENAMPILKAN SEMUA FAKTOR PEMBAGI NYA

	int bil;

	cout << "Masukan bilangan = ";
	cin >> bil;
	cout << endl;

	cout << "pembagi : " << bil << endl;

	for(int i=1; i<=bil/2; i++){

	if(bil % i == 0){

		cout << i << endl;
		}

	}


	getch();
	return 0;
}
