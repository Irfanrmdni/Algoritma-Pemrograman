#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

	double sisi_miring(double x, double y){

		return sqrt(x * x + y * y);
	}

int main(){

	// SUBRUTIN FUNGSI
	// MENGHITUNG SISI MIRING SEGITIGA SIKU-SIKU

	cout << sisi_miring(3,4) << endl;

	getch();
	return 0;
}
