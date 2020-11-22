#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// PROGRAM MEMBUAT SEGITIGA DENGAN *

	int tinggi, i, j;

	cout << "Masukan tinggi : ";
	cin >> tinggi;

	for(i=1; i<=tinggi; i++){

		for(j=1; j<=i; j++){

			cout << j;
		}
		cout << endl;
	}


	getch();
	return 0;

}
