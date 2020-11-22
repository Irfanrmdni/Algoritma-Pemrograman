#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <limits>
#include "crud.h"


//PILIHAN MENU
	int getOption(){
	int input;
	system("cls");//BERFUNGSI UNTUK FLASH


		std::cout << "PROGRAM CRUD DATA MAHASISWA" << std::endl;
		std::cout << "==========================" << std::endl;
		std::cout << "1. Tambah data mahasiswa" << std::endl;
		std::cout << "2. Tampilkan data mahasiswa" << std::endl;
		std::cout << "3. Ubah data mahasiswa" << std::endl;
		std::cout << "4. Hapus data mahasiswa" << std::endl;
		std::cout << "5. Selesai" << std::endl;
		std::cout << "==========================" << std::endl;
		std::cout << "Silahkan pilih (1-5) = ";
		std::cin >> input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); // AGAR DAPAT MENGATUR ENTER/BARIS BARU
		return input;
	};

	void crud::cekDatabase(std::fstream &data){

	data.open("data.bin",std::ios::out | std::ios::in | std::ios::binary); //KALAU PAKE IOS::TRUNCT DISINI DIA AKAN HILANG DATA NYA/MEREPLACE
	//CHECK FILE DATA ADA ATAU TIDAK ADA
	if(data.is_open()){

		std::cout << "Database ditemukan" << std::endl << std::endl;
	}else{

		std::cout << "Database tidak ditemukan. buat Database baru" << std::endl << std::endl;
		//UNTUK KELUAR DARI DATA
		data.close();
		//BUAT LAGI DATA BARU MEMAKAI IOS::TRUNCT
		data.open("data.bin",std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary); //MAKANYA DIBUATKAN DISINI
		}
	}

	//MENULISKAN DATA MAHASISWA
	void crud::writeData(std::fstream &data, int posisi, crud::mahasiswa &input_mahasiswa){

		data.seekp((posisi-1)*sizeof(crud::mahasiswa),std::ios::beg);
		data.write(reinterpret_cast<char*>(&input_mahasiswa),sizeof(crud::mahasiswa));
	}

	//UNTUK MENCARI UKURAN DATA DARI BIN
	int crud::getDatasize(std::fstream &data){

		int start,end;

		data.seekg(0,std::ios::beg);
		start = data.tellg();
		data.seekg(0,std::ios::end);
		end = data.tellg();

		return (end-start)/sizeof(crud::mahasiswa);
	}

	crud::mahasiswa crud::readData(std::fstream &data, int posisi){

		crud::mahasiswa readMahasiswa;
		data.seekg((posisi-1)*sizeof(crud::mahasiswa),std::ios::beg);
		data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(crud::mahasiswa));

		return readMahasiswa;
	}


	//MENAMBAH DATA MAHASISWA KEDALAM DATA.BIN
	void crud::add_dataMahasiswa(std::fstream &data){

		crud::mahasiswa input_mahasiswa, lastMahasiswa;
		//SEKARANG BAGAIMANA CARA AGAR DATA POSISI 1 ITU AKAN MENAMBAH LAGI DATA
		int size = crud::getDatasize(data);
		std::cout << "ukuran data: " << size << std::endl;

		if(size == 0){
			input_mahasiswa.pk = 1;
		}else{
			lastMahasiswa = crud::readData(data,size);
			std::cout << "pk = " << lastMahasiswa.pk << std::endl;
			input_mahasiswa.pk = lastMahasiswa.pk + 1;
		}
		//KITA HARUS TAU UKURAN SI DATA BIN NYA YAITU DENGAN CARA MEMBUAT FUNGSI LAGI GETDATASIZE
		//readData(data,size);
		std::cout << "Nama: ";
		std::getline(std::cin, input_mahasiswa.nama);
		std::cout << "Jurusan: ";
		std::getline(std::cin, input_mahasiswa.jurusan);
		std::cout << "NIM: ";
		std::getline(std::cin, input_mahasiswa.nim);

		//FUNGSI DARI VOID WRITE DATA
		crud::writeData(data,size+1,input_mahasiswa);
	}

	void crud::displayDataMahasiswa(std::fstream &data){

		int size = crud::getDatasize(data);
		crud::mahasiswa showMahasiswa;
		std::cout << "No.\tPk.\tNIM.\tNama.\tJurusan" << std::endl;

		for(int i=1; i<=size; i++){

			showMahasiswa = crud::readData(data,i);
			std::cout << i << "\t";
			std::cout << showMahasiswa.pk << "\t";
			std::cout << showMahasiswa.nim << "\t";
			std::cout << showMahasiswa.nama << "\t";
			std::cout << showMahasiswa.jurusan << std::endl;


		}
	}

	void crud::UpdateRecord(std::fstream &data){

		int nomor;
		crud::mahasiswa updateMahasiswa;
		std::cout << "Pilih nomor: ";
		std::cin >> nomor;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

		updateMahasiswa = crud::readData(data,nomor);

		std::cout << "\n\nPilihan data: " << std::endl;
		std::cout << "NIM: " << updateMahasiswa.nim << std::endl;
		std::cout << "Nama: " << updateMahasiswa.nama << std::endl;
		std::cout << "Jurusan: " << updateMahasiswa.jurusan << std::endl;

		std::cout << "\nMerubah data: " << std::endl;
		std::cout << "NIM: ";
		std::getline(std::cin,updateMahasiswa.nim);
		std::cout << "Nama: ";
		std::getline(std::cin,updateMahasiswa.nama);
		std::cout << "Jurusan: ";
		std::getline(std::cin,updateMahasiswa.jurusan);

		crud::writeData(data,nomor,updateMahasiswa);
	}

	void crud::deleteRecord(std::fstream &data){

		int nomor, size, offset;

		crud::mahasiswa blankMahasiswa, tempMahasiswa;
		std::fstream dataSementara;

		size = crud::getDatasize(data);

		//PILIH NOMOR
		std::cout << "Pilih nomor: ";
		std::cin >> nomor;
		//DIPOSISI INI DIISI DENGAN DATA KOSONG
		crud::writeData(data,nomor,blankMahasiswa);
		//KITA CEK DATA YANG ADA DI FILE DATA.BIN KALAU ADA DATA KITA PINDAHKAN KE FILE SEMENTARA
		dataSementara.open("temp.dat",std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);

		//CEK DATA BIN APAKAH DATANYA TIDAK KOSONG
		offset = 0;

		for(int i=1; i<=size; i++){

			tempMahasiswa = crud::readData(data,i);

			if(!tempMahasiswa.nama.empty()){

				crud::writeData(dataSementara,i-offset,tempMahasiswa);//KALO TIDAK KOSONG DIA AKAN DI SIMPAN KE DATA SEMENTARA
			}else{

				offset++;
				std::cout << "Hapus data" << std::endl;
			}
		}

		size = crud::getDatasize(dataSementara);
		data.close();
		data.open("data.bin",std::ios::trunc | std::ios::out | std::ios::binary);
		data.close();
		data.open("data.bin",std::ios::out | std::ios::in | std::ios::binary);


		for(int i=1; i<=size; i++){

			tempMahasiswa = crud::readData(dataSementara,i);
			crud::writeData(data,i,tempMahasiswa);
		}
	}
