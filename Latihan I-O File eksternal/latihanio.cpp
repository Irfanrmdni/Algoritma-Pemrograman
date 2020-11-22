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

	mahasiswa ambildata(int posisi, fstream &file){

		mahasiswa buffer;

		file.seekp((posisi-1)*sizeof(mahasiswa));
		file.read(reinterpret_cast<char*>(&buffer),sizeof(mahasiswa));

		return buffer;
	}

	void menulisData(mahasiswa &data, fstream &file){

		file.write(reinterpret_cast<char*>(&data),sizeof(mahasiswa));
	}

	void menulisData_byPos(int posisi, mahasiswa &buffer, fstream &file){

		file.seekg((posisi-1)*sizeof(mahasiswa));
		file.write(reinterpret_cast<char*>(&buffer),sizeof(mahasiswa));
	}

int main(){

	//LATIHAN I/O FILE EKSTERNAL BINARY
	fstream file;
	mahasiswa mahasiswa_1, mahasiswa_2, mahasiswa_3, output1, output2, output3;

	file.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary);

	mahasiswa_1.nama = "ujang";
	mahasiswa_1.nim = 144;
	mahasiswa_1.jurusan = "akuntansi";

	mahasiswa_2.nama = "asep";
	mahasiswa_2.nim = 155;
	mahasiswa_2.jurusan = "memasak";

	mahasiswa_3.nama = "bogel";
	mahasiswa_3.nim = 166;
	mahasiswa_3.jurusan = "motret";

	menulisData(mahasiswa_1,file);
	menulisData(mahasiswa_2,file);
	menulisData(mahasiswa_3,file);

	mahasiswa_1.nama = "Nurul Fatimah";
	mahasiswa_2.nama = "Anisa azizah";
	mahasiswa_3.nama = "Bagas setiawan";

	menulisData_byPos(1,mahasiswa_1,file);
	menulisData_byPos(2,mahasiswa_2,file);
	menulisData_byPos(3,mahasiswa_3,file);

	output1 = ambildata(1,file);
	output2 = ambildata(2,file);
	output3 = ambildata(3,file);

	cout << output1.nama << endl;
	cout << output1.nim << endl;
	cout << output1.jurusan << endl << endl;

	cout << output2.nama << endl;
	cout << output2.nim << endl;
	cout << output2.jurusan << endl << endl;

	cout << output3.nama << endl;
	cout << output3.nim << endl;
	cout << output3.jurusan << endl << endl;

	file.close();

	getch();
	return 0;
}
