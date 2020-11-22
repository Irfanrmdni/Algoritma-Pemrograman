#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int tambah(int a, int b){

		int c;
		c = a+b;
		return c;
	}

	void tampil(int input){

		cout << "Menampilkan dengan void" << endl;
		cout << input << endl;
	}

int main(){

	// FUNGSI TANPA KEMBALIAN / VOID
	int p,l,hasil;

	cout << "Masukan panjang : ";
	cin >> p;
	cout << "Masukan lebar : ";
	cin >> l;

	hasil = tambah(p,l);

	tampil(hasil);


	getch();
	return 0;
}
