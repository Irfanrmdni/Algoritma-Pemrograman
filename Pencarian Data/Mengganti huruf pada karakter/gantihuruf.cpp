#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

	char *ganti(char st[], char c1, char c2){
		// C1 = KARAKTER YANG AKAN DIGANTI
		// C2 = ADALAH KARAKTER PENGGANTI

		int i;
		static char stTemp[80];

		    // SALIN STRING
			strcpy(stTemp,st);

				// PROSES PENGGANTIAN KARAKTER
					for(i = 0; i<strlen(stTemp); i++){

						if(stTemp[i] == c1){

							stTemp[i] = c2;
						}
					}
		return (char *)stTemp;
	}

int main(){

	// PENCARIAN DATA
	// MENGGANTI HURUF PADA KARAKTER

	char kalimat[] = "sanguan moal";

	  cout << ganti(kalimat, 'u','E') << endl;


	getch();
	return 0;
}
