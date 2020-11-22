#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

	int poskar(char st[], char k){

		int i, posisi, panjang; // PANJANG ITU SAMA DENGAN PANJANG DARI ST[]

			i = 0;
			posisi = -1;
			panjang = strlen(st);

				while((i<panjang-1) && posisi == -1){

					if(st[i] == k)
						posisi = i; // PENGULANGAN BERAKHIR

					i = i + 1;
				}

		return posisi;
	}

int main(){

	// PENCARIAN
	// MENCARI POSISI ANGKA DARI BEBERAPA KARAKTER

	char kalimat[] = "HELLO WORD";
	char dicari = 'W';

	cout << "Posisi " << dicari << " dalam string " << kalimat;
	cout << " : " << poskar(kalimat, dicari) << endl;


	getch();
	return 0;
}
