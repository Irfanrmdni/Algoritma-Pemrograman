#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

	int posstr(char st1[], char st2[]){

		int indeks1, indeks2, indeks3;
		int ketemu;
		int posisi;
		int panjang1 = strlen(st1);
		int panjang2 = strlen(st2);

			indeks1 = 0;
			posisi = -1;
			ketemu = 0;

				while((indeks1<panjang1) && !ketemu){

					if(panjang2 > (panjang1 - indeks1))

						break;

					indeks3 = indeks1;
					ketemu = 1;
					for(indeks2 = 0; indeks2 < panjang2; indeks2++){

						if(st1[indeks3] == st2[indeks2])

							indeks3 = indeks3 + 1;

						else{

							ketemu = 0;
							break;
						}
					}

					if(ketemu){

						posisi = indeks1;
					}else{

						indeks1 = indeks1 + 1;
					}
				}


		return posisi;
	}

int main(){

	// PENCARIAN DATA
	// SUBRUTIN UNTUK MENAMPILKAN STRING DALAM STRING
	char kalimat[] = "tilas tapi raos naon tah";
	char kata1[] = "raos";
	char kata2[] = "tah";

	  cout << posstr(kalimat, kata1) << endl;
	  cout << posstr(kalimat, kata2) << endl;




	return 0;
}
