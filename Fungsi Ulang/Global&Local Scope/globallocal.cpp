#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	//VARIABEL GLOBAL
	int x = 8;

	//MENGAMBIL VARIABEL GLOBAL
	int ambil_global(){

		return x;
	}

	//VARIABEL LOCAL SCOPE NYA X_LOCAL
	int x_local(){

		int x = 5;
		return x;
	}

int main(){


	cout << "1.Variabel global " << x << endl;

	int x = 10; //VARIABEL LOCAL UNTUK MAIN
	cout << "2.Variabel local_main " << x << endl;

	cout << "3.Variabel ambil_global " << ambil_global() << endl;

	cout << "4.Variabel local_main " << x << endl;

	cout << "5.Variabel x_local " << x_local() << endl;

	cout << "6.Variabel local_main " << x << endl;

	{
		//block scope
		cout << "7.Variabel local_main " << x << endl;

		int x = 1;
		cout << "8.Variabel block_scope " << x << endl;

		cout << "9.Variabel Ambil_global " << ambil_global() << endl;
		//UNERI MENGAMBIL VARIABEL/DEKLARASI YANG PALING ATAS
		cout << "10.Variabel Ambil_global " << ::x << endl;
	}
	cout << "11.Variabel local_main " << x << endl;

	getch();
	return 0;
}
