#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

	struct mahasiswa{
		int pk;
		string nim;
		string nama;
		string jurusan;


	};

	int getOption();
	void cekDatabase(fstream &data);
	void writeData(fstream &data, int posisi, mahasiswa &input_mahasiswa);
	int getDatasize(fstream &data);
	mahasiswa readData(fstream &data, int posisi);
	void add_dataMahasiswa(fstream &data);
	void displayDataMahasiswa(fstream &data);
	void UpdateRecord(fstream &data);
	void deleteRecord(fstream &data);

int main(){

	//PROJECT CRUD
	fstream data;

	//FUNGSI DARI CEKDATABASE
	cekDatabase(data);

	int pilihan;
	pilihan = getOption();
	char is_continue;

	//TAMBAH=1 ITU MULAI NYA DARI 1 SAMPAI SELESAI=5
	//BERFUNGSI AGAR KITA TIDAK MENGGUNAKAN ANGKA UNTUK PILIHAN SIWTCH CASE NYA JADI DIGANTI DENGNA ENUM
	enum input_pilihan{tambah=1, tampilkan, ubah, hapus, selesai};

	while(pilihan != selesai){

		//pilihan = getOption();
		switch(pilihan){
		case tambah:
			cout << "Tambah data mahasiswa" << endl;
			add_dataMahasiswa(data);
			break;
		case tampilkan:
			cout << "Tampilkan data mahasiswa" << endl;
			displayDataMahasiswa(data);
			break;
		case ubah:
			cout << "Ubah data mahasiswa" << endl;
			displayDataMahasiswa(data);
			UpdateRecord(data);
			displayDataMahasiswa(data);
			break;
		case hapus:
			cout << "Hapus data mahasiswa" << endl;
			displayDataMahasiswa(data);
			deleteRecord(data);
			displayDataMahasiswa(data);
			break;
		default:
			cout << "Pilihan tidak ditemukan" << endl;
			break;
		}
		//SALAH SATU CONTROL FLOW DIA AKAN KEMBALI LAGI KE SATU PROGRAM
		label_continue:
		cout << "Ingin Melanjutkan? (y/t): ";
		cin >> is_continue;
		if((is_continue == 'y') || (is_continue == 'Y')){

			pilihan = getOption();

		}else if((is_continue == 't') || (is_continue == 'T')){

			break;

		}else{
			//INI AGAR SUPAYA KETIKA USER SALAH DALAM INPUT DIA AKAN LONCAT KE ATAS
			goto label_continue;
		}
	}

	cout << "Akhir dari program" << endl;


	getch();
	return 0;
}

//PILIHAN MENU
	int getOption(){
	int input;
	system("cls");//BERFUNGSI UNTUK FLASH


		cout << "PROGRAM CRUD DATA MAHASISWA" << endl;
		cout << "==========================" << endl;
		cout << "1. Tambah data mahasiswa" << endl;
		cout << "2. Tampilkan data mahasiswa" << endl;
		cout << "3. Ubah data mahasiswa" << endl;
		cout << "4. Hapus data mahasiswa" << endl;
		cout << "5. Selesai" << endl;
		cout << "==========================" << endl;
		cout << "Silahkan pilih (1-5) = ";
		cin >> input;
		cin.ignore(numeric_limits<streamsize>::max(),'\n'); // AGAR DAPAT MENGATUR ENTER/BARIS BARU
		return input;
	};

	void cekDatabase(fstream &data){

	data.open("data.bin",ios::out | ios::in | ios::binary); //KALAU PAKE IOS::TRUNCT DISINI DIA AKAN HILANG DATA NYA/MEREPLACE
	//CHECK FILE DATA ADA ATAU TIDAK ADA
	if(data.is_open()){

		cout << "Database ditemukan" << endl << endl;
	}else{

		cout << "Database tidak ditemukan. buat Database baru" << endl << endl;
		//UNTUK KELUAR DARI DATA
		data.close();
		//BUAT LAGI DATA BARU MEMAKAI IOS::TRUNCT
		data.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary); //MAKANYA DIBUATKAN DISINI
		}
	}

	//MENULISKAN DATA MAHASISWA
	void writeData(fstream &data, int posisi, mahasiswa &input_mahasiswa){

		data.seekp((posisi-1)*sizeof(mahasiswa),ios::beg);
		data.write(reinterpret_cast<char*>(&input_mahasiswa),sizeof(mahasiswa));
	}

	//UNTUK MENCARI UKURAN DATA DARI BIN
	int getDatasize(fstream &data){

		int start,end;

		data.seekg(0,ios::beg);
		start = data.tellg();
		data.seekg(0,ios::end);
		end = data.tellg();

		return (end-start)/sizeof(mahasiswa);
	}

	mahasiswa readData(fstream &data, int posisi){

		mahasiswa readMahasiswa;
		data.seekg((posisi-1)*sizeof(mahasiswa),ios::beg);
		data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(mahasiswa));

		return readMahasiswa;
	}


	//MENAMBAH DATA MAHASISWA KEDALAM DATA.BIN
	void add_dataMahasiswa(fstream &data){

		mahasiswa input_mahasiswa, lastMahasiswa;
		//SEKARANG BAGAIMANA CARA AGAR DATA POSISI 1 ITU AKAN MENAMBAH LAGI DATA
		int size = getDatasize(data);
		cout << "ukuran data: " << size << endl;

		if(size == 0){
			input_mahasiswa.pk = 1;
		}else{
			lastMahasiswa = readData(data,size);
			cout << "pk = " << lastMahasiswa.pk << endl;
			input_mahasiswa.pk = lastMahasiswa.pk + 1;
		}
		//KITA HARUS TAU UKURAN SI DATA BIN NYA YAITU DENGAN CARA MEMBUAT FUNGSI LAGI GETDATASIZE
		//readData(data,size);
		cout << "Nama: ";
		getline(cin, input_mahasiswa.nama);
		cout << "Jurusan: ";
		getline(cin, input_mahasiswa.jurusan);
		cout << "NIM: ";
		getline(cin, input_mahasiswa.nim);

		//FUNGSI DARI VOID WRITE DATA
		writeData(data,size+1,input_mahasiswa);
	}

	void displayDataMahasiswa(fstream &data){

		int size = getDatasize(data);
		mahasiswa showMahasiswa;
		cout << "No.\tPk.\tNIM.\tNama.\tJurusan" << endl;

		for(int i=1; i<=size; i++){

			showMahasiswa = readData(data,i);
			cout << i << "\t";
			cout << showMahasiswa.pk << "\t";
			cout << showMahasiswa.nim << "\t";
			cout << showMahasiswa.nama << "\t";
			cout << showMahasiswa.jurusan << endl;


		}
	}

	void UpdateRecord(fstream &data){

		int nomor;
		mahasiswa updateMahasiswa;
		cout << "Pilih nomor: ";
		cin >> nomor;
		cin.ignore(numeric_limits<streamsize>::max(),'\n');

		updateMahasiswa = readData(data,nomor);

		cout << "\n\nPilihan data: " << endl;
		cout << "NIM: " << updateMahasiswa.nim << endl;
		cout << "Nama: " << updateMahasiswa.nama << endl;
		cout << "Jurusan: " << updateMahasiswa.jurusan << endl;

		cout << "\nMerubah data: " << endl;
		cout << "NIM: ";
		getline(cin,updateMahasiswa.nim);
		cout << "Nama: ";
		getline(cin,updateMahasiswa.nama);
		cout << "Jurusan: ";
		getline(cin,updateMahasiswa.jurusan);

		writeData(data,nomor,updateMahasiswa);
	}

	void deleteRecord(fstream &data){

		int nomor, size, offset;

		mahasiswa blankMahasiswa, tempMahasiswa;
		fstream dataSementara;

		size = getDatasize(data);

		//PILIH NOMOR
		cout << "Pilih nomor: ";
		cin >> nomor;
		//DIPOSISI INI DIISI DENGAN DATA KOSONG
		writeData(data,nomor,blankMahasiswa);
		//KITA CEK DATA YANG ADA DI FILE DATA.BIN KALAU ADA DATA KITA PINDAHKAN KE FILE SEMENTARA
		dataSementara.open("temp.dat",ios::trunc | ios::out | ios::in | ios::binary);

		//CEK DATA BIN APAKAH DATANYA TIDAK KOSONG
		offset = 0;

		for(int i=1; i<=size; i++){

			tempMahasiswa = readData(data,i);

			if(!tempMahasiswa.nama.empty()){

				writeData(dataSementara,i-offset,tempMahasiswa);//KALO TIDAK KOSONG DIA AKAN DI SIMPAN KE DATA SEMENTARA
			}else{

				offset++;
				cout << "Hapus data" << endl;
			}
		}

		size = getDatasize(dataSementara);
		data.close();
		data.open("data.bin",ios::trunc | ios::out | ios::binary);
		data.close();
		data.open("data.bin",ios::out | ios::in | ios::binary);


		for(int i=1; i<=size; i++){

			tempMahasiswa = readData(dataSementara,i);
			writeData(data,i,tempMahasiswa);
		}
	}

