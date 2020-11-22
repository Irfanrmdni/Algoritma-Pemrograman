#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

 // SUBRUTIN / FUNGSI DENGAN NILAI BALIK
	int terkecil(int x, int y){

		int min;
		if(x<y){

			min = x;
		}
		else{

			min = y;
		}

		return min;
	}


int main(){

	// SUBRUTIN / FUNSI
	// PROGRAM MENGHITUNG BILANGAN TERKECIL DARI 2 BILANGAN

	int a=2, b=5;

	cout << "Terkecil dari " << a << " dan " << b << " Adalah: " << terkecil(a,b) << endl;


	getch();
	return 0;
}

