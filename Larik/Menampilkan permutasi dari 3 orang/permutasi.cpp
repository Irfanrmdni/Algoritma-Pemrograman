#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK
	// PROGRAM MENAMPILKAN PERMUTASI DARI 3 ORANG

	char nama[][10]={"Budi","Andin","Toni"};

	for(int i=0; i<=2; i++){

		for(int j=0; j<=2; j++){

			if(i!=j){

				for(int k=0; k<=2; k++){

					if(i!=k && j!=k){

						cout << "i: " << nama[i] << " j: " << nama[j] << " k: " << nama[k] << endl;
					}
				}
			}
		}
	}


	getch();
	return 0;
}
