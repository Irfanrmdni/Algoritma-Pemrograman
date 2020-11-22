#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

/*
		DALAM PENGURUTAN DATA DAPAT DILAKUKAN DENGAN DALAM MEMORI ATAU EKSTERNAL

		DALAM PENGURUTAN DATA TERDAPAT ISTILAH ASCENDING DAN DESCENDING
		ASCENDING = PENGURUTAN DATA YANG DILAKUKAN DARI YANG TERKECIL KE YANG TERBESAR
		ATAU BISA DISEBUT URUT NAIK
		DESCENDING = PENGURUTAN DATA YANG DILAKUKAN DARI YANG TERBESAR KE YANG TERKECIL
		ATAU BISA DISEBUT URUT TURUN

		METODE BUBBLE SORT
		BUBBLE SORT MERUPAKAN METODE PENGURUTAN DATA YANG SEDERHANA TETAPI MEMILIKI KINERJA BURUK
		UNTUK DATA YANG BESAR

		PENGURUTAN DILAKUKAN DENGAN MEMBANDINGKAN SEBUAH BILANGAN DENGAN SELURUH BILANGAN YANG TERLETAK
		SESUDAH BILANGAN TERSEBUT. PENUKARAN DILAKUKAN KALAU SUATU KRITERIA TERPENUHI
		CONTOH:
		AWAL    = 25 57 48 37 12 92 80 33
		TAHAP 1 = 25 48 37 12 57 80 33 92
		TAHAP 2 = 25 37 12 48 57 33 80 92
		TAHAP 3 = 25 12 37 48 33 57 80 92
		TAHAP 4 = 12 25 37 33 48 57 80 92
		TAHAP 5 = 12 25 33 37 48 57 80 92
		TAHAP 6 = 12 25 33 37 48 57 80 92
		TAHAP 7 = 12 25 33 37 48 57 80 92
	*/

	//MENAMPILKAN HASIL SELECTION SORT
	void tampilkan_larik(int data[], int n){

		for(int i=0; i<n; i++){

			cout << data[i] << " ";
		}
	}
		//BUBBLE
		void bubble_sort(int data[], int n){

			int temp;

				for(int i=1; i<n; i++){

					for(int j=0; j<n-i; j++){

						if(data[j]>data[j+1]){

							temp = data[j];
							data[j] = data[j+1];
							data[j+1] = temp;
						}
					}


					tampilkan_larik(data,n);
					cout << endl;
				}
		}




int main(){

	//PENGURUTAN DATA
	//BUBBLE SORT
	const int jumlah = 8;
	int data[8] = {23,44,59,82,15,5,10,90};

	bubble_sort(data,jumlah);
	cout << "Pengurutan: " << endl;
	tampilkan_larik(data,jumlah);


	getch();
	return 0;
}

