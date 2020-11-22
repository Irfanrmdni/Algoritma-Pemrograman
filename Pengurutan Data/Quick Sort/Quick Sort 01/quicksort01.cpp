#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	void tampilkan_larik(int data[], int elemen_array){

		for(int i=0; i<elemen_array; i++){

			cout << data[i] << " ";
		}
	}

	int partisi(int data[], int kiri, int kanan){

		int x, i, j, temp;
		i = kiri;
		j = kanan;
		x = data[kiri];

			while(1){

				while(data[j] > x){

					j = j - 1;
				}
				while(data[i] < x){

					i = i + 1;
				}
				if(i < j){

					temp = data[i];
					data[i] = data[j];
					data[j] = temp;
				}else{

					return j;
				}
			}
	}

	void quick_sort(int data[], int kiri, int kanan){

		int q;
		if(kiri<kanan){

			q = partisi(data,kiri,kanan);
			quick_sort(data,kiri,q);
			quick_sort(data,q+1,kanan);
		}

	}

int main(){

	// PENGURUTAN DATA QUICK SORT
	const int jum = 9;
	int i;
	int data[] = {25,57,48,37,12,92,80,33,1};

	quick_sort(data,0,jum-1);
	cout << "Hasil Pengurutan: " << endl;
	tampilkan_larik(data,jum);


	getch();
	return 0;
}
