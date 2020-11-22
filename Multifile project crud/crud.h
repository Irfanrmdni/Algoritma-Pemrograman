#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <limits>

 namespace crud{

	struct mahasiswa{
		int pk;
		std::string nim;
		std::string nama;
		std::string jurusan;
	};

	int getOption();
	void cekDatabase(std::fstream &data);
	void writeData(std::fstream &data, int posisi, mahasiswa &input_mahasiswa);
	int getDatasize(std::fstream &data);
	mahasiswa readData(std::fstream &data, int posisi);
	void add_dataMahasiswa(std::fstream &data);
	void displayDataMahasiswa(std::fstream &data);
	void UpdateRecord(std::fstream &data);
	void deleteRecord(std::fstream &data);
 }


