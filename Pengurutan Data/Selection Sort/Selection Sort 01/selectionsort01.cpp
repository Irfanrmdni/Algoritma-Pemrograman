#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;


	//MENAMPILKAN HASIL SELECTION SORT
	void tampilkan_larik(int data[], int n){

		for(int i=0; i<n; i++){

			cout << data[i] << " ";
		}
	}
		//SELECTION SORT
		void selection_sort(int data[], int elemen){

			int pos;
			int temp;
			int i, j;

				for(i=0; i<elemen-1; i++){ // LOOPING PERTAMA I NYA MULAI DARI INDEKS KE 0 SAMAPAI KE ELEMEN-1
											  // KARENA ELEMEN NYA = 8 JADI ELEMEN NYA -1

					pos = i; // ELEMEN / INDEKS DARI I DITAMPUNG KE VARIABEL POS TERLEBIH DAHULU

						for(j=pos+1; j<elemen; j++){ // LOOPING KEDUA J NYA SAMA DENGAN POS+1 KARENA J NYA HARUS LEBIH 1
													// UNTUK MENCARI ELEMEN TERKECIL
							if(data[pos] > data[j]){

								pos = j; // VARIABEL POS NYA SEKARANG DI REFRESH SAMA DENGAN J DAN J MENCARI BILANGAN TERKECIL
										// KEMUDIAN DI SIMPAN KE POS
							}

						}
					//PENUKARAN
					temp = data[i]; // DATA[I] DISIMPAN KE TEMP AGAR DATA [I] TIDAK HILANG SAAT DI REFRESH OLEH DATA[POS]
					data[i] = data[pos]; // DATA[I] = INDEKS KE 0 = 22 DI REFRESH OLEH DATA[POS] = DATA YANG SUDAH DIURUTKAN DALAM MENCARI BILANGAN TERKECIL
					data[pos] = temp; // KENAPA SAMA DENGAN TEMP KARENA TEMP ITU SUDAH MENYIMPAN NILAI YANG ADA DI i

						tampilkan_larik(data,elemen);
						cout << endl;
				}
		}


int main(){

	//PENGURUTAN DATA
	//SELECTION SORT
	const int jumlah = 8;
	int data[8] = {22,40,55,67,12,5,10,90};

		cout << "Data: " << endl;
		selection_sort(data, jumlah);
		cout << "Hasil pengurutan: " << endl;
		tampilkan_larik(data, jumlah);

	getch();
	return 0;
}
