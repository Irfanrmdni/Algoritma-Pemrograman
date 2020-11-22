#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK
	// PRORGAM MENGURUTKAN LARIK

	int data[8] = {8,9,4,7,6,1,5,3};

	// MULAI NYA HARUS DARI INDEKS KE 7 SAMPAI KE 0
	// INDEKS KE 7 = 3 & INDEKS KE 0 = 8
	for(int i=7; i>=0; i--){

		cout << data[i];
	}


	getch();
	return 0;
}
