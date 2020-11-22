#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <array>

using namespace std;

int main(){


	//LATIHAN ARRAY 1 DIMENSI DENGAN STANDART LIBRARY
	//PROGRAM MENAMPILKAN GRAFIK NILAI MAHASISWA

	array<int, 10> nilai_mhs;

	for(int i=0; i<=nilai_mhs.size(); i++){
		cout << "Masukan jumlah nilai ";
		if(i == 0){

			cout << "0-9 : ";
			cin >> nilai_mhs[i];
		}else if(i == 10){

			cout << "100 : ";
			cin >> nilai_mhs[i];
		}else{

			cout << i*10 << "-" << (i*10) + 9 << " : ";
			cin >> nilai_mhs[i];
		}
	}

	//GRAFIK NILAI
	cout << endl;
	cout << "Grafik Nilai " << endl << endl;
	for(int i=0; i<=nilai_mhs.size(); i++){
		if(i == 0){

			cout << "0-9 : ";
		}else if(i == 10){

			cout << "100 : ";
		}else{

			cout << i*10 << "-" << (i*10) + 9 << " : ";
		}

		for(int bintang=0; bintang<nilai_mhs[i]; bintang++){

			cout << "*";
		}
		cout << endl;
	}


	getch();
	return 0;
}
