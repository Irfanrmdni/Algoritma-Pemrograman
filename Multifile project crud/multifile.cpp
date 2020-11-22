#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <limits>
#include "crud.h"

//using namespace std;
/*
	int getOption();
	void cekDatabase(fstream &data);
	void writeData(fstream &data, int posisi, mahasiswa &input_mahasiswa);
	int getDatasize(fstream &data);
	mahasiswa readData(fstream &data, int posisi);
	void add_dataMahasiswa(fstream &data);
	void displayDataMahasiswa(fstream &data);
	void UpdateRecord(fstream &data);
	void deleteRecord(fstream &data);
*/
int main(){

	//PROJECT CRUD
	std::fstream data;

	//FUNGSI DARI CEKDATABASE
	crud::cekDatabase(data);

	int pilihan;
	pilihan = crud::getOption();
	char is_continue;

	//TAMBAH=1 ITU MULAI NYA DARI 1 SAMPAI SELESAI=5
	//BERFUNGSI AGAR KITA TIDAK MENGGUNAKAN ANGKA UNTUK PILIHAN SIWTCH CASE NYA JADI DIGANTI DENGNA ENUM
	enum input_pilihan{tambah=1, tampilkan, ubah, hapus, selesai};

	while(pilihan != selesai){

		//pilihan = getOption();
		switch(pilihan){
		case tambah:
			std::cout << "Tambah data mahasiswa" << std::endl;
			crud::add_dataMahasiswa(data);
			break;
		case tampilkan:
			std::cout << "Tampilkan data mahasiswa" << std::endl;
			crud::displayDataMahasiswa(data);
			break;
		case ubah:
			std::cout << "Ubah data mahasiswa" << std::endl;
			crud::displayDataMahasiswa(data);
			crud::UpdateRecord(data);
			crud::displayDataMahasiswa(data);
			break;
		case hapus:
			std::cout << "Hapus data mahasiswa" << std::endl;
			crud::displayDataMahasiswa(data);
			crud::deleteRecord(data);
			crud::displayDataMahasiswa(data);
			break;
		default:
			std::cout << "Pilihan tidak ditemukan" << std::endl;
			break;
		}
		//SALAH SATU CONTROL FLOW DIA AKAN KEMBALI LAGI KE SATU PROGRAM
		label_continue:
		std::cout << "Ingin Melanjutkan? (y/t): ";
		std::cin >> is_continue;
		if((is_continue == 'y') || (is_continue == 'Y')){

			pilihan = crud::getOption();

		}else if((is_continue == 't') || (is_continue == 'T')){

			break;

		}else{
			//INI AGAR SUPAYA KETIKA USER SALAH DALAM INPUT DIA AKAN LONCAT KE ATAS
			goto label_continue;
		}
	}

	std::cout << "Akhir dari program" << std::endl;


	getch();
	return 0;
}



