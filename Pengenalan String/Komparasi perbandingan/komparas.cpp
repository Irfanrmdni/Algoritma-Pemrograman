#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

	//KOMPARASI PERBANDINGAN

	//MEBANDINGKAN KATA
	string kata("ujang");

	if(kata == "ujang"){

		cout << "Benar" << endl;
	}

	//CONTOH PROGRAM MENEMBAK NAMA
	string kata_rahasia("kucing");
	string input;

	while(true){

		cout << "masukan hewan peliharaan anda: ";
		cin >> input;
		if(input == kata_rahasia){

			cout << "Tebakan anda benar!!!" << endl;
			break;
		}else{

			cout << "Tebakan anda salah!!!" << endl;
		}
	}



	getch();
	return 0;
}
