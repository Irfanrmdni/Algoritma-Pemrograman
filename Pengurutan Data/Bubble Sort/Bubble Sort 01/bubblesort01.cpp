#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	void tampil_larik(int data[], int elemen_larik){

		for(int i=0; i<elemen_larik; i++){

			cout << data[i] << " ";
		}
	}

	void bubble_sort(int data[], int elemen_larik){

		int temp;
		int i;
		int j;

			for(i=1; i<elemen_larik; i++){

				for(j=0; j<elemen_larik-i; j++){

					if(data[j] > data[j+1]){

						temp = data[j];
						data[j] = data[j+1];
						data[j+1] = temp;
					}
				}
				tampil_larik(data,elemen_larik);
				cout << endl;
			}
	}

int main(){

	//PENGURUTAN DATA DENGAN METODE BUBBLE SORT
	int data[10] = {29,15,8,2,4,90,77,67,45,30};
	int const jum = 10;

	cout << "Data :" << endl;
	bubble_sort(data,jum);
	cout << "Hasil Pengurutan :" << endl;
	tampil_larik(data,jum);



	return 0;
}
