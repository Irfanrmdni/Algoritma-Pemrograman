#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	//MENGGUNAKAN VOID KARENA TIDAK ADA YANG DI RETURN KAN
	void fungsi(int *b){

		cout << "Address dari b: " << b << endl;
		cout << "Nilai dari b: " << *b << endl; //DEREFERENCING / MENGAMBIL NILAI YANG ADA DI ALAMAT B
	}

	//CONTOH DENGAN MENGHITUNG KUADRAT DENGAN MENGGUNAKAN POINTER
	void kuadrat(int *nilai_pointer){

		*nilai_pointer = (*nilai_pointer) * (*nilai_pointer);
	}

int main(){

	//FUNGSI DENGAN POINTER
	int a = 25;
	int b = 3;


	cout << "Address dari a: " << &a << endl;
	cout << "Nilai dari a: " << a << endl;
	cout << endl;

	fungsi(&a); // MENGGUNAKAN &A KARENA KITA AKAN MENYIMPAN/MENGAMBIL DARI SI ALAMAT A
	cout << endl;


	kuadrat(&b);
	cout << "Nilai dari b: " << b << endl;


	getch();
	return 0;
}
