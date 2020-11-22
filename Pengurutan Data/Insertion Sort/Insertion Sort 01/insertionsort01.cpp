#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	void tampil(int data[], int elemen_input){

		for(int i=0; i<elemen_input; i++){

			cout << data[i] << " ";
		}
	}

	void insertion_sort(int data[], int elemen_input){

		int i;
		int k;
		int ketemu;
		int x;

			for(k=0; k<elemen_input; k++){

				x = data[k];
				i = k-1;
				ketemu = 0;

				while((i>=0) && (!ketemu)){

					if(x<data[i]){

						data[i+1] = data[i];
						i = i - 1;
					}else{

						ketemu = 1;
					}

					data[i+1] = x;
				}
			}
	}

int main(){

	//PENGURUTAN DATA DENGAN METODE INSERTION SORT
	const int jum = 8;
	int data[8] = {10,31,15,43,25,51,5,21};

		insertion_sort(data,jum);
		cout << "Hasil Pengurutan: " << endl;
		tampil(data,jum);

	getch();
	return 0;
}
