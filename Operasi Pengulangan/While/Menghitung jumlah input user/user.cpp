#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENAN WHILE
	// MENGHITUNG JUMLAH YANG DI INPUT USER

	int n, jumlah, pencacah;

	jumlah = 0;
	pencacah = 0;

	cout << "Masukan nilai n = ";
	cin >> n;

	while(pencacah <= n){

		jumlah = jumlah + pencacah;
		pencacah = pencacah + 1;


	}
	cout << jumlah << endl;


	getch();
	return 0;
}
