#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int hitung(int data[], int n, int k){

		int jumlah=0;
		for(int i=0; i<n; i++){

			if(k==data[i]){

				jumlah = jumlah + 1;
			}
		}

		return jumlah;
	}

int main(){


	// PENCARIAN DATA

	// MENGHITUNG JUMLAH SUATU BILANGAN DALAM LARIK

	int dataa[8] = {6,7,8,5,7,8,1,9};
	int dicari = 8;
	cout << endl;
	cout << "Banyak bilangan " << dicari << " dalam larik data: " << hitung(dataa,8,dicari);

	getch();
	return 0;
}
