#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
/*
		MULA-MULA SUATU PENUNJUK DIBERI NAMA (posAWAL) YANG MENUNJUK KE LOKASI AWAL PENGURUTAN DATA
		DIATUR AGAR BERISI INDEKS PERTAMA DALAM LARIK. SELANJUTNYA DICARI BILANGAN TERKECIL YANG TERLETAK
		ANTARA POSISI SESUDAH YANG DITUNJUK OLEH PENUNJUK TERSEBUT HINGGA ELEMEN YANG TERAKHIR DALAM LARIK
		LOKASI BILANGAN INI DITUNJUK OLEH (posMIN) LALU DITUKARKAN NILAI BILANGAN TERKECIL TERSEBUT DENGAN
		NILAI YANG DITUNJUK OLEH (posAWAL) PROSES SEPERTI ITU DIULANG DARI (posAWAL) BERNILAI 0 HINGGA N-2
		DENGAN N MENYATAKAN JUMLAH ELEMEN LARIK
*/

	void tampil_larik(int data[], int n){

		for(int i=0; i<n; i++){

			cout << data[i] << " ";
		}
	}

		void selection_sort(int data[], int n){

			int posMIN, posAWAL, tmp;

				for(posAWAL=0; posAWAL<n-1; posAWAL++){

					posMIN = posAWAL;

						for(int j=posAWAL+1; j<n; j++){

							if(data[posMIN] > data[j]){

								posMIN = j;
							}
						}
					//TUKARKAN
					tmp = data[posAWAL];
					data[posAWAL] = data[posMIN];
					data[posMIN] = tmp;

					cout << "Hasil posAWAL= " << posAWAL << ": ";
					tampil_larik(data, n);
					cout << endl << endl;
				}
		}

int main(){

	//PENGURUTAN DATA SELECTION SORT

	const int jum = 8;
	int i;
	int data[] = {25,57,48,37,12,92,80,33};

		selection_sort(data,jum);

			cout << "Hasil pengurutan: " << endl << endl;
			tampil_larik(data, jum);


	getch();
	return 0;
}
