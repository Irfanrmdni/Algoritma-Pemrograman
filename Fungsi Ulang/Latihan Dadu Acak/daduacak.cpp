#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib> // MENGANDUNG FUNGSI ACAK / RANDOM

using namespace std;

int main(){

	//LATIHAN DADU ACAK
	char lanjut;


	while(true){

		cout << "Main dadu gak ? (y/t): ";
		cin >> lanjut;

		if(lanjut=='y' || lanjut=='Y'){

			cout << 1 + (rand() % 6) << endl;
		}else if(lanjut=='t' || lanjut=='T'){

			break;
		}else{

			cout << "Masukan kata y atau t dong kakak!!!" << endl;
		}
	}


	getch();
	return 0;
}
