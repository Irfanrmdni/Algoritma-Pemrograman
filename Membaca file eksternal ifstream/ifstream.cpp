#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

/*Myfile >> data; // CONTAINER DATA UNTUK MENAMPILKAN FILE EKSTERNAL MELALUI STRING DATA
	getline(Myfile,tampung); // GETLINE UNTUK MENGAMBIL SEMUA DATA DARI Myfle KE DATA
	output.append(tampung); // APPEND UNTUK MENEMPELKAN KALIMAT/DATA .

	TERDAPAT TIGA MACAM

	IOS::IN DEFAULT
	IOS::ATE = UNTUK MEMMULAI DARI AKHIR FILE
	IOS::BINARY = UNTUK MEMBACA FILE BINARY
*/
int main(){

	//MENULIS FILE EKSTERNAL IFSTREAM
	ifstream Myfile;
	string output, tampung;
	bool isData = false;
	int no;
	string nama;
	int jum_data = 0;

	Myfile.open("data.txt");

	while(!isData){

		getline(Myfile,tampung);
		output.append("\n" + tampung);
		if(tampung == "data"){

			isData = true;
		}
	}
	cout << output << endl;

	getline(Myfile,tampung);
	cout << tampung << endl;
	while(!Myfile.eof()){ // JIKA TIDAK/BELUM MyFile SAMPAI AKHIR DARI FILE DIA AKAN TERUS LOOPING

		Myfile >> no;
		Myfile >> nama;
		jum_data++;
		cout << no << "\t" << nama << endl;
	}
	cout << "Jumlah data = " << jum_data << endl;

	getch();
	return 0;
}
