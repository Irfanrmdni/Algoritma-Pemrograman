#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int terkecil(int x[], int jumlah){

		int min;
		min = x[0]; // MIN ITU SAMA DENGAN X[0] PARAMETER X DARI INDEKS ARRAY KE 0
		for(int i=1; i<jumlah; i++){ // I<JUMLAH ITU BAHWA I SAMPAI DENGAN JUMLAH

			if(x[i]<min){ // JIKA X[i] X DARI ARRAY INDEKS KE I BERATI I NYA NILAI DARI JUMLAH
						  // <min ITU KURANG DARI min MAKA SI min NYA SAMA DENGAN X[i]

				min = x[i];
			}
		}
		return min;
	}

int main(){

	// SUBRUTIN / FUNGSI
	// PROGRAM MENCARI BILANGAN TERKECIL DI DALAM LARIK/ARRAY

	int y;
	int data[] = {128,2,23,51,90,3,12,55};

	y = terkecil(data,5);

	cout << "Terkecil: " << y << endl;




	getch();
	return 0;
}
