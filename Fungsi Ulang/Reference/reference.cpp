#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	REFERENCE
	KETIKA MEMBUAT SEBUAH 1 VARIABEL MISALNYA A = 10;. KEMUDIAN KITA MEMBUAT SEBUAH VARIABEL LAGI MISALNYA B;
	NAH KITA AKAN MENUNJUK PADA ALAMAT YANG SAMA ATAU ALAMAT SI A = 10. JADI VARIABEL B ITU NYAMBUNG KE VARIABEL B
*/

int main(){

	//REFERENCE
	int a = 20;

	cout << "Address dari a: " << &a << endl;
	cout << "Nilai dari a: " << a << endl << endl;

	//KITA AKAN MEMBUAT SEBUAH VARIABEL LAGI YAITU B UNTUK MENYAMBUNGKAN DENGAN ADDRES / NILAI DARI VARIABEL A
	//DENGAN MENGGUNAKAN REFERENCE
	int &b = a;
	cout << "Nilai dari b: " << b << endl;
	cout << "Address dari b: " << &b << endl << endl;

	b = 50;
	cout << "Nilai dari a: " << a << endl;
	cout << "Nilai dari b: " << b << endl << endl;

	a = 5;
	cout << "Nilai dari a: " << a << endl;
	cout << "Nilai dari b: " << b << endl;

	getch();
	return 0;
}
