#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void print_array(int *ptr_array, int baris, int kolom){

		int index = 0;

		for(int i=0; i<baris; i++){

			for(int j=0; j<kolom; j++){

				cout << *(ptr_array + index) << " ";
				index++;

			}
			cout << endl;
		}

	}

int main(){

	//Array 2D
	//CARA LAIN
	const int baris = 2;
	const int kolom = 2;
	//KALAU DI ARRAY KETIKA BARIS DAN KOLOM NYA ITU HARUS KONSTAN MAKA NYA KITA PAKAI const int
	int array2d[baris][kolom] = {2,4,6,8};

	print_array(*array2d, baris, kolom);


	getch();
	return 0;
}
