#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

	char *ulang(char st[], int n){

		int panjang, i, j, posisi;
		static char strTemp[1024];

		panjang = strlen(st); // panjang ITU SAMA DENGAN PANJANG DARI ELEMEN/INDEKS st

		if(panjang == 0){ // JIKA panjang NYA SAMA DENGAN 0 MAKA NILAI BALIK NYA KOSONG/0

			return (char *) 0;
		}
		posisi = 0; // POSISI NYA SAMA DENGAN 0
		for(i=0; i<n; i++){ // I NYA SAMA DENGAN 0 DAN I KURANG DARI N I BERTAMBAH 1 SETIAP PENGULANGAN

			for(j=0; j<panjang; j++){

				strTemp[posisi] = st[j];
				posisi++;
			}
		}
		strTemp[posisi] = 0;

		return (char *)strTemp;
	}

int main(){

	// SUBRUTIN FUNGSI
	// PRORGRAM MENGULANG STRING DENGAN JUMLAH BILANGAN YANG DITENTUKAN

	cout << ulang("asu ",3) << endl;

	getch();
	return 0;
}
