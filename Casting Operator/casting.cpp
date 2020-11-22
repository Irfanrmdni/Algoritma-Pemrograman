#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	//CASTING OPERATOR

	int a = 5;
	float b = 12.85f;
	char c = 'd';

	//NILAI DARI INT A AKAN DI UBAH KE INT B NILAI FLOAT ATAU HASILNYA AKAN JADI FLOAT
	cout << a + b << endl;

	//DENGAN MENG INISIALISASI DENGAN INT HASIL MAKA HASIL DARI A + B AKAN MENJADI INT BUKAN FLOAT
	int hasil;
	hasil = a + b;
	cout << hasil << endl;

	//CASTING EKSPLISIT. NILAI DARI B ITU FLOAT . MAKA DENGAN CASTING EKSPLISIT AKAN MENJADI INT
	cout << a + (int)b << endl;

	//NILAI DARI INT A = 5 DAN DITAMBAH DENGAN CHAR C MAKA HASILNYA DIUBAH KE INT YAITU 105
	//KARENA CHAR ITU DIUBAH KE INT MAKA NILAINYA 100
	cout << c << endl;
	cout << (int)c << endl; // MENGUBAH DARI CHAR KE INT
	cout << a + c << endl;
	cout << (char) (c + a) << endl; // MENGUBAH DARI INT KE CHAR. MAKA DARI D KE I = DEFGHI KARENA A=5



	getch();
	return 0;
}
