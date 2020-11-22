#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK
	// PROGRAM MEMPEROLEH LARIK YANG BERISI INTERSEKSI DARI KEDUA LARIK TERSEBUT

	int a[6] = {1,2,3,5,6,8};
	int b[6] = {4,6,1,5,2,8};
	int c[6];
	int cari, jum_interseksi;

	for(int i=0; i<=5; i++){

		cari = a[i];
		for(int j=0; j<=5; j++){

			if(cari==b[j]){

				c[jum_interseksi] = cari;
				jum_interseksi = jum_interseksi + 1;
				break;
			}
		}
	}

	// UNTUK MENAMPILKAN/MENAMPUNG OUTPUT KE LAYAR DARI PROGAM DIATAS
	if(jum_interseksi==0){

		cout << "Hasil interseksi tidak ada" << endl;
	}
	else{

		cout << "Interseksi: " << endl;
		for(int i=0; i<jum_interseksi; i++){
			cout << c[i] << endl;
		}
	}


	getch();
	return 0;
}
