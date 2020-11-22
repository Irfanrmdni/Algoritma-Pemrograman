#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <process.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// MENENTUKAN BILANGAN PRIMA YANG LEBIH BESAR DARI 2

	int bil, prima;

	cout << "Masukan bilangan bulat positif = ";
	cin >> bil;

	if(bil<2){

		cout << "Bilangan harus lebih besar dari 2" <<endl;
		exit(1); // akhiri program dengan nilai yang keluar 1
	}

	prima = 1; // berarti bilangan prima

	for(int i = 2; i <= bil / 2; i++){

		prima = 0; // berarti bukan bilangan prima
		break; // keluar dari for
	}
	if(prima){

		cout << "Bilangan prima" << endl;
	}else{

		cout << "Bukan bilangan prima" << endl;
	}


	getch();
	return 0;
}
