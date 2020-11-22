#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	//TERNARY OPEARTOR
	//PENULISAN ? ITU ARTINYA APAKAH KONDISI BERNILAI BENAR ATAU BERNILAI SALAH
	//(KONDISI) ? HASIL1, HASIL2

	int a, b;
	string hasil1, hasil2, output;

	hasil1 = "semangka";
	hasil2 = "durian";

	a = 8;

	cout << "Masukan angka? ";
	cin >> b;

	//JIKA A BERNILAI LEBIH KECIL DARI B MAKA JIKA BENAR AKAN MENGHASILKAN HASIL1/HASIL2
	output = (a < b) ? hasil1 : hasil2;
	cout << output << endl;


	getch();
	return 0;
}
