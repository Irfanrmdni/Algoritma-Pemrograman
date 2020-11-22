#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	//PROTOTYPE NYA REFERENCE. YANG TERPENTING HARUS NAMA FUNGSI NYA SAMA
	void fungsi_reference(int &);
	void fungsi_reference2(int &);
	void kuadrat2(int &);

int main(){

	//FUNGSI DENGAN REFERENCE
	int a = 8;
	int e = 10;

	cout << "Address dari a: " << &a << endl;
	cout << "Nilai dari a: " << a << endl;

	cout << endl;

	fungsi_reference(a);

	cout << endl;

	fungsi_reference2(a);

	cout << endl;

	kuadrat2(e);
	cout << "Nilai dari kuadrat b: " << e << endl;


	getch();
	return 0;
}

	void  fungsi_reference(int &b){

		cout << "Nilai dari b: " << b << endl;
		cout << "Address dari b: " << &b << endl;
	}

	//MENGGUNAKAN INISIALISASI
	void  fungsi_reference2(int &d){

		d = 90;
		cout << "Nilai dari c: " << d << endl;
		cout << "Address dari c: " << &d << endl;
	}

	void kuadrat2(int &nilaiRef){

		nilaiRef = nilaiRef * nilaiRef;
	}
