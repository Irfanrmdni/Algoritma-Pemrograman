#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <algorithm> // SORT
#include <array>

using namespace std;

	const size_t arraySize = 10;
	void cetak_array(array <int, arraySize> &angka){
		cout << "Array: ";
		for(int &a : angka){

			cout << a << " ";
		}
		cout << endl;
	}

		void cetak_array(array <char, arraySize> &angka){
		cout << "Array: ";
		for(char &a : angka){

			cout << a << " ";
		}
		cout << endl;
	}

int main(){

	//MENGURUTKAN NILAI ARRAY

	array<int, arraySize> angka = {4,1,3,6,2,7,8,0,9,5};
	array<char, arraySize> huruf = {'c','a','e','b','d','i','h','g','f','j'};

	cout << "Data sebelum di sort: " << endl;
	cetak_array(angka);
	cetak_array(huruf);
	cout << endl;

	cout << "Data sesudah di sort: " << endl;
	//MENGGUNAKAN LIBRARY ALGORTH = SORT MENGURUTKAN
	sort(angka.begin(), angka.end());
	sort(huruf.begin(), huruf.end());
	cetak_array(angka);
	cetak_array(huruf);

	getch();
	return 0;
}
