#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

	//GETLINE CONSOLE STRING
	//MENGINPUTKAN SUATU VARIBEL DARI CONSOLE

	string kalimat_input;
	//CIN ITU DARI SI IOSTREAM BERFUNGSI UNTUK MENGINPUTKAN
	cout << "Masukan kalimat: ";
	getline(cin,kalimat_input);
	cout << "Kalimat yang di input: " << kalimat_input << endl;

	//MENGHITUNG JUMLAH KATA INPUT
	//CONTOH NYA MENGHITUNG ADA BERAPA JUMLAH SPASI PADA KALIMAT
	int posisi = 0;
	int jumlah = 0;

	while(true){
		posisi = kalimat_input.find(" ", posisi + 1);
		jumlah++;
		//JUMLAH ITU NILAI NYA = 0 JADI KETIKA BERADA DI DALAM LOOPING DIAKAN SELALU BERTAMBAH SESUAI LOOPING NYA
		cout << "Posisi nya: " << posisi << endl;
		if(posisi < 0){

			break;
		}

	}

	cout << "Jumlah kata: " << jumlah << endl;


	getch();
	return 0;
}
