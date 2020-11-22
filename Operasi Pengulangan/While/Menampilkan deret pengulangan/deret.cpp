#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN WHILE
	// MENAMPILKAN DERET PENGULANGAN

	int nilai;
	nilai = 100000000;

	while(nilai>=1){


		cout << nilai << endl;
		nilai = nilai / 10;
	}





	getch();
	return 0;
}
