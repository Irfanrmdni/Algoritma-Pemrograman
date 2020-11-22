#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int faktorial(int n);

int main(){

	//LATIHAN REKURSIF

	int angka;
	cout << "Masukan angka: ";
	cin >> angka;

	int hasil;
	hasil = faktorial(angka);

	cout << " : Hasil Faktorial: " << hasil << endl;



	getch();
	return 0;
}

	int faktorial(int n){
		if(n==1 || n<=1){
			cout << n;
			return n;
		}else{
			cout << n << "*";
			return n * faktorial(n-1);
		}

	}
