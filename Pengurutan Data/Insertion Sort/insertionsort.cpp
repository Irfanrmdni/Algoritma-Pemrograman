#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
/*
	INSERTION SORT ADALAH METODE YANG MELAKUKAN PENGURUTAN DENGAN CARA MENYISIPKAN DATA
	YANG BELUM TERURUT KEDALAM BAGIAN DATA YANG TELAH DI URUTKAN
*/

	void tampilkan_larik(int data[], int elemen){

		for(int i=0; i<elemen; i++){

			cout << data[i] << " ";
		}
	}

		void insertion_sort(int data[], int elemen){

			int ketemu;
			int k;
			int x;
			int i;

				for(int k=1; k<elemen; k++){

					x = data[k];

					//SISIPKAN X KEDALAM DATA [0..K-1]
					i = k-1;
					ketemu = 0;

						while((i>=0) && (!ketemu)){

							if(x<data[i]){

								data[i+1] = data[i];
								i = i-1;
							}else{

								ketemu = 1;
							}

								data[i+1] = x;
						}

				}

		}

int main(){

	//INSERTION SORT / PENGURUTAN DENGAN PENYISIPAN
	const int jum = 8;
	int i;
	int data[] = {25,57,48,37,12,92,80,33};

		insertion_sort(data, jum);
		cout << "Hasil pengurutan: " << endl;
		tampilkan_larik(data, jum);


	getch();
	return 0;
}
