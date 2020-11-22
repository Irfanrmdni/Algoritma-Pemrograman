#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <typeinfo>

using namespace std;

	//MAX DARI T KITA AKAN UBAH JADI AUTO KARENA KITA TIDAK TAHU NANTI APAKAH NILAINYA INT DOUBLE ATAU FLOAT
	template<typename T, typename U>
	auto max(T data1, U data2){

		return ((data1 < data2) ? T(data1) : U(data2));
	}

int main(){

	//AUTO  = JADI KETIKA MENDEKLARASIKAN VARIABEL ANGKA MISAL: AUTO ANGKA = 12.8
	//MAKA SECARA OTOMATIS NILAI ANGKA TERSEBUT ITU TIPE DATANYA MENJADI SESUAI = DOUBLE

	//int a = 5;
	auto a = 5; //MAKA SECARA OTOMATIS NILAI DARI A ITU AKAN BERTIPE DATA INT DENGAN AUTO
	auto b = "asu";
	double c = 12.445;
	float d = 12.9f;
	auto e = max(a,d); //JADI AUTO BERGUNA KETIKA HASIL DARI NILAI BERTIPE INT DOUBLE ATAU FLOAT SECARA OTOMATIS
	//AKAN DIUBAH MENJADI TIPE DATA YANG SESUAI

	cout << "a masuk tipe data: " << typeid(a).name() << endl;
	cout << "b masuk tipe data: " << typeid(b).name() << endl;
	cout << "c masuk tipe data: " << typeid(c).name() << endl;
	cout << "d masuk tipe data: " << typeid(d).name() << endl;
	cout << "e masuk tipe data: " << typeid(e).name() << endl;

	getch();
	return 0;
}
