#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

	//STRING ITU ADALAH KUMPULAN SEBUAH KARAKTER

	//STRING DENGAN VARIABEL YANG SUDAH DITENTUKAN KALIMAT/KATA NYA
	string kata("Magnum Blue");

	cout << kata << endl;

	string data;
	//STRING DENGAN VARIABEL DENGA MENGISI KATA SECARA MANUAL DAN DIMASUKAN KE STRING DATA
	cout << "Masukan kata: ";
	cin >> data;
	cout << "Yang dimasukan adalah: ";
	cout << data;


	getch();
	return 0;
}
