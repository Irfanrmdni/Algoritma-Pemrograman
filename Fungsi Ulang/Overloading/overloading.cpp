#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	//YANG HARUS DIPERHATIKAN NAMA FUNGSI NYA HARUS SAMA
	//BASIC FUNCTION
	int luas_kotak(int p, int l){

		int luas = p * l;
		return luas;
	}

	//OVERLOADING FUNCTION
	int luas_kotak(int p){

		int luas = p * p;
		return luas;
	}

	double luas_kotak(double p, double l){

		double luas = p * l;
		return luas;
	}

	double luas_kotak(double p){

		double luas = p * p;
		return luas;
	}

int main(){

	//OVERLOADING = MENIMPA

	cout << "Luas Kotak: " << luas_kotak(4,8) << endl;
	cout << "Luas Kotak: " << luas_kotak(4) << endl;
	cout << "Luas Kotak: " << luas_kotak(7.3,20.9) << endl;
	cout << "Luas Kotak: " << luas_kotak(7.1) << endl;


	getch();
	return 0;
}
