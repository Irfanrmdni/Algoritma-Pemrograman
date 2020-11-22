#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <array>

using namespace std;

	//FUNGSI MENAMPILKAN ARRAY 2D DENGAN STANDAR LIBRARY
	//ARRAY < ARRAY << TIPEDATA, NAMA VARIABEL KOLOM> , NAMA VARIABEL BARIS > NAMA ARRAY
	const int kolom = 3;
	const int baris = 2;
	void print_array(array < array < int,kolom > ,baris > nilai_array){

		//LOOPING 1 ARRAY <TIPE DATA, NAMA VARIABEL KOLOM> NAMA VARIABEL BARIS : NAMA ARRAY
		for(array <int,kolom> vectorbaris : nilai_array){
			//LOOPING 2 = TIPE DATA NAMA VARIABEL : NAMA ARRAY
			for(int nilaikolom : vectorbaris){

				cout << nilaikolom << " ";
			}
			cout << endl;
		}
	}

int main(){

	//ARRAY 2D DENGAN STANDAR LIBRARY
	const int kolom = 3;
	const int baris = 2;
	array < array < int,kolom > , baris > nilaiMD = {0,1,2,3,4,5};

	print_array(nilaiMD);

/*
	cout << nilaiMD[0][0] << " ";
	cout << nilaiMD[0][1] << " ";
	cout << nilaiMD[0][2] << " " << endl;

	cout << nilaiMD[1][0] << " ";
	cout << nilaiMD[1][1] << " ";
	cout << nilaiMD[1][2] << " " << endl;

*/
	getch();
	return 0;
}
