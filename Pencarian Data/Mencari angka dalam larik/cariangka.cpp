#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int cari_angka(int data[], int banyak_bil, int dicari){

		int jumlah = 0;

		for(int i = 0; i<banyak_bil; i++){

			if(data[i] == dicari){

				jumlah = jumlah + 1;
			}
		}
		return jumlah;
	}

int main(){

	//PENCARIAN DATA DENGAN METODE ALGORITMA SEARCH SEKUENSIAL
	//PENCARIAN DATA SECARA TERURUT
	int a[8] = {2,5,5,2,5,5,7,9};
	int b = 5;

	cout << "angka yang dicari " << b << " ada sebanyak " << cari_angka(a,8,b) << endl;


	getch();
	return 0;
}
