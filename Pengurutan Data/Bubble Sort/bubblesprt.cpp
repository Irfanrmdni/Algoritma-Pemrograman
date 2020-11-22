#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	void tampil_larik(int data[], int n){

		for(int i=0; i<n; i++){

			cout << data[i] << " ";
		}
	}

		void bubble_sort(int data[], int n){

			int tmp, tahap, ada_penukaran;

				tahap = 1;
				ada_penukaran = 1;

					while(tahap<n-1 && ada_penukaran){

						ada_penukaran = 0;

							for(int j=0; j<n-tahap; j++){

								if(data[j]>data[j+1]){

									ada_penukaran = 1;

									//LAKUKAN PENUKARAN
									tmp = data[j];
									data[j] = data[j+1];
									data[j+1] = tmp;
								}
							}

						cout << "Hasil tahap " << tahap << " : ";
						tampil_larik(data, n);

						tahap = tahap + 1;
						cout << endl;
					}
		}

int main(){

	//METODE PENGURUTAN DATA BUBBLE SORT
	const int jum = 8;
	int i;
	int data[] = {25,57,48,37,12,92,80,33};

		bubble_sort(data,jum);

			cout << "Hasil pengurutan: " << endl;

				tampil_larik(data, jum);


	getch();
	return 0;
}
