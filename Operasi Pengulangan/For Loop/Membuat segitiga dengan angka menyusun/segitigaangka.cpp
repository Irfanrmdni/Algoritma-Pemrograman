#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// PROGRAM MEMBUAT SEGITIGA MENYUSUN DENGAN BENTUK ANGKA

	int tinggi, j, bil, i;

	cout << "Masukan tinggi = ";
	cin >> tinggi;

	for(i=1; i<=tinggi; i++){

		bil = i;
		for(j=1; j<=i; j++){

			cout << setw(3) << bil;
			bil = bil + tinggi - j;
		}
		cout << endl;
	}

	getch();
	return 0;
}
