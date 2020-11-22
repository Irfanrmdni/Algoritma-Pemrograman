#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	//PROTOTYPE
	double volume_kubus(double panjang=1, double lebar=1, double tinggi=1);

int main(){

	// DEFAULT ARGUMEN

	cout << "Volume kubus: " << volume_kubus(4,10,3) << endl;
	// KETIKA KITA HANYA MENGISI PANJANG DAN LEBAR NYA SAJA MAKA NILAI DEFAULT TINGGI NYA = 1
	cout << "1.Default Argumen Volume kubus: " << volume_kubus(4,10) << endl;
	cout << "2.Default Argumen Volume kubus: " << volume_kubus(4) << endl;
	cout << "3.Default Argumen Volume kubus: " << volume_kubus() << endl;



	getch();
	return 0;
}

double volume_kubus(double panjang, double lebar, double tinggi){ // NILAI DEFAULT TINGGI NYA = 1

		return panjang * lebar * tinggi;
	}
