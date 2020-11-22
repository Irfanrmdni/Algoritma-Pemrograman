#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int pangkat(int a){

		if(b<=1){
			cout << "Akhir dari rekursif" << endl;
			return a;
		}else{

			cout << "Rekursif" << endl;
			return a * pangkat(a,(b-1));
		}



	}

int main(){

	//REKURSIF
	int i;
	int j;

	cout << "Masukan i: ";
	cin >> i;
	cout << "Masukan j: ";
	cin >> j;

	cout << "Hasil rekursif: " << pangkat(i,j) << endl;


	getch();
	return 0;
}
