#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

	struct mahasiswa{

		string nama;
		int nim;
		string jurusan;
	};

	mahasiswa ambildata(int &posisi, fstream &file){

		mahasiswa buffer;

		file.seekp((posisi-1)*sizeof(mahasiswa));
		file.read(reinterpret_cast<char*>(&buffer),sizeof(mahasiswa));

		return buffer;
	}


int main(){

	mahasiswa databaca;
	fstream file;
	int posisi = 2;

	file.open("data.bin",ios::in | ios::binary);
	//SEEKP BERFUNGSI UNTUK MEMBACA FILE DARI BIT KEBERAPA. KARENA JUMLAH BIT NYA MAHASIWA=72 MAKA 1*56 AKAN MENAMPILKAN DATA KE 2
	//file.seekp(1*sizeof(mahasiswa));
	//cout << sizeof(mahasiswa) << endl; JUMLAH BIT MAHASISWA = 72
	//file.read(reinterpret_cast<char*>(&databaca),sizeof(mahasiswa));
	databaca = ambildata(posisi,file);

	cout << databaca.nama << endl;
	cout << databaca.nim << endl;
	cout << databaca.jurusan << endl;

	file.close();

	getch();
	return 0;
}
