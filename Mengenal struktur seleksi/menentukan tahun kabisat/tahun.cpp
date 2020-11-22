#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

    // SELEKSI BERSARANG
    // SUATU BENTUK SELEKSI BERTINGKAT
    // CONTOH PROGRAM MENENTUKAN TAHUN KABISAT

	// tahun tersebut habis dibagi 4, tetapi
	// jika habis dibagi 100 maka harus habis dibagi 400
    int tahun;

    cout << "Masukan tahun = ";
    cin >> tahun;

    if(tahun%4!=0){

		cout << "BUKAN TAHUN KABISAT" << endl;
    }
    else if(tahun%100==0 && tahun%400!=0){

		cout << "BUKAN TAHUN KABISAT" << endl;
    }else{

		cout << "TAHUN KABISAT" << endl;
    }









	return 0;
}
