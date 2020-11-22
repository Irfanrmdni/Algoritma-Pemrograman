#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	 // data ITU BERISI ELEMEN LARIK
	// n ITU BERISI JUMLAH ELEMEN LARIK
   // k ITU BERISI 4 BUAH ELEMEN YANG AKAN DICARI BILANGAN TERBESAR NYA
	int maks(int data[], int n, int k){

		if(k>n){

			k = n;
		}
		if(k==1){

			return data[0];
		}
		else if(k>1)

			if(data[k-1]>maks(data, n, k-1))

				return data[k-1];
			else
				return maks(data, n, k-1);

			else // BERARTI K < 1
				return -32768;

	}

int main(){

	// REKURSI
	// PROGRAM SUBRUTIN LARIK YANG AKAN MENGHASILKAN BILANGAN TERBESAR

	int l[] = {1,4,6,2,8,5,1,4,3};

	cout << maks(l,9,2) << endl;
	cout << maks(l,9,4) << endl;
	cout << maks(l,9,9) << endl;


	getch();
	return 0;
}
