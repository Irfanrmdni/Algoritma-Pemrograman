#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int mencari(int data[], int n, int k){

		int posisi, ketemu, i;

		if(n <= 0){

			posisi  = -1;
		}else{

			ketemu = 0;
			i = n-1;
			while(i>=0 && !ketemu){
				cout << endl << " ini i : " << i << endl;
				if(k == data[i]){
					posisi = i;
					ketemu = 1;
					cout << endl << " ini posisi : " << posisi << endl;
				}else
					i--;
				if(!ketemu)
					posisi = -1;
			}
		}

		return posisi;
	}

int main(){

	// PENCARIAN DATA DALAM LARIK DIMULAI DARI KANAN

	int data[8] = {6,7,8,5,7,8,1,9};
	int dicari = 8;
	cout << endl;
	cout << "Posisi " << dicari << " dalam larik data: " << mencari(data,8,dicari);


	getch();
	return 0;
}
