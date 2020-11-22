#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	//TYPEDEF ITU MEMBERIKAN ALIAS UNTUK TIPE DATA
	typedef int p; //INI BERARTI DIA AKAN MENGGANTI SI INT MENJADI P / ALIAS P
	p a = 12; //JADI KITA TIDAK USAH LAGI MENULISKAN INT . JADI KITA LANGSUNG MENULIS NYA DENGAN P
	cout << "nilai a: " << a << endl;

	//CONTOH KASUS DENGAN ARRAY
	typedef int ivector2d[3]; //INI ARTINYA MENGGANTI INT MENJADI IVECTOR2D DAN INDEKS NYA
	ivector2d b = {2,4,8}; //MAKA DARI INT MENJADI IVECTOR2D DAN INDEKS NYA MENJADI HILANG
	cout << "nilai b: " << b[0] << " " << b[1] << " dan " << b[2] << endl;

	//CONTOH KASUS DENGAN LONG UNSIGNED
	typedef unsigned long angka; //INI MENGGANTI UNSIGNED LONG MENJADI ANGKA
	//unsigned long c = 2756257; INI ASALNYA SEPERTI INI
	angka c = 2756257; //JADI KITA HANYA MENULIS NYA MENJADI ANGKA
	cout << "nilai c: " << c << endl;

	//CONTOH KASUS DOUBLE
	typedef double angka2; //INI MENGGANTI DOUBLE MENJADI ANGKA2
	//double d = 12.9438; //INI ASLINYA SEPERTI INI
	angka2 d = 12.9438; //MAKA KITA TIDAK PERLU LAGI MENULIS DOUBLE KARENA SUDAH DIGANTI DENGAN ANGKA2
	cout << "nilai d: " << d << endl;

	//ATAU KITA BISA MEMAKAI USING
	using numbers = double; //INI MENGGANTI DOUBLE MENJADI NUMBERS
	double e = 90.123132; //INI ASLINYA SEPERTI INI
	numbers e = 90.123132; //MAKA KITA TIDAK PERLU LAGI MENULIS DOUBLE KARENA SUDAH DIGANTI DENGAN NUMBERS
	cout << "nilai e: " << e << endl;

	getch();
	return 0;
}
