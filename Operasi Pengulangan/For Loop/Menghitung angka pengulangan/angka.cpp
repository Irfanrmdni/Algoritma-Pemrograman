#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	//PROGRAM MENGHITUNG ANGKA DARI PENGULANGAN

	double jum = 0;

	for(int i=1; i<=99; i++){

		jum = jum + (double)i / (i+1); // FUNGSI DOUBLE AGAR HASIL PEMBAGIAN BERTIPE DOUBLE
	}

	cout << jum << endl;







	getch();
	return 0;
}
