#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	//MERAH = INDEKS KE 0 DAN HIJAU INDEKS KE 6
	enum warna{merah,hijau,biru,kuning,hitam,putih=10,ungu};

int main(){

	//ENUM
	warna kain;

	kain = hitam;
	cout << kain << endl;
	kain = putih;
	cout << kain << endl;

	kain = biru;
	if(kain==biru){

		cout << "Kain berwara biru" << endl;
	}
	cout << kain << endl;


	getch();
	return 0;
}
