#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN WHILE
	// MENAMPILKAN INPUT STRING DAN MENGHITUNG JUMLAH STRING
	// STRING DALAM BAHSA C DIAKHIRI DENGAN NULL

	char string[80];
	int index = 0;

	cout << "Masukan kata : ";
	cin >> string;

	while(string[index] != 0){

		index = index + 1;
	}

	cout << "Jumlah kata = " << index << endl;




	getch();
	return 0;
}
