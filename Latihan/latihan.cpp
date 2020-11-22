#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

	int get_option(){
	//system("cls");
		int input;

		cout << "1.Tambah data" << endl;
		cout << "2.Tampilkan data" << endl;
		cout << "3.Ubah data" << endl;
		cout << "4.Hapus data" << endl;
		cout << "5.Selesai data" << endl;
		cout << "===============" << endl;
		cout << "Pilih: ";
		cin >> input;

		return input;
	}

	struct mahasiswa{

		string nama;
		string jurusan;
		int nim;
	};
	mahasiswa data_mahasiswa;
	void tambah_mahasiswa(){



		cout << "nama: ";
		cin >> data_mahasiswa.nama;

		cout << "jurusan: ";
		cin >> data_mahasiswa.jurusan;

		cout << "nim: ";
		cin >> data_mahasiswa.nim;

		cout << endl;

	}

	void tampil_mahasiswa(){

		cout << "Nama : " << data_mahasiswa.nama << endl;
		cout << "jurusan : " << data_mahasiswa.jurusan << endl;
		cout << "Nim : " << data_mahasiswa.nim << endl;
	}


int main(){

	int pilihan;
	pilihan = get_option();
	char yt;
	enum {tambah=1,tampil,ubah,hapus};

	while(pilihan != 5){

		switch(pilihan){
		case tambah:
			cout << "Menambahkan data: ";
			cout << endl;
			tambah_mahasiswa();
			break;
		case tampil:
			cout << "Tampilkan data: ";
			cout << endl;
			tampil_mahasiswa();
			break;
		case ubah:
			cout << "Ubah data: ";
			break;
		case hapus:
			cout << "Hapus data: ";
			break;
		default:
			cout << "Pilihan tidak ditemukan";

		}
		cout << endl;
		label_continue:
		cout << "Lanjut? (y/t): ";
		cin >> yt;
		if(yt == 'y' || yt == 'Y'){
			pilihan = get_option();
		}else if(yt == 't' || yt == 'T'){
			break;
		}else{
			goto label_continue;
		}
	}
	cout << "Akhir dari proram" << endl;


	getch();
	return 0;
}
/*
int pos_str(char st_1[], char st_2[]){
		int indeks_1, indeks_2, indeks_3;
		int panjang_1 = strlen(st_1);
		int panjang_2 = strlen(st_2);
		int ketemu, posisi;

		indeks_1 = 0;
		posisi = -1;
		ketemu = 0;

		while((indeks_1 < panjang_1) && !ketemu){
			if(panjang_2 > (panjang_1-indeks_1))
				break;
				indeks_3 = indeks_1;
				ketemu = 1;

				for(indeks_2=0; indeks_2<panjang_2; indeks_2++){
					if(st_1[indeks_3] == st_2[indeks_2]){
						indeks_3++;
					}else{
						ketemu = 0;
						break;
					}
				}
				if(ketemu){
				posisi = indeks_1;
				}else{
				indeks_1++;
				}
		}

		return posisi;
	}

	void cari_nama(char data[][35], int jum_data, char nama[]){

	   for(int i=0; i<jum_data; i++){

		if(pos_str(data[i], nama) != -1){

			cout << data[i] << endl;
		}

	   }
	}

	//PENCARIAN DATA
	char daftar_nama[][35] = {

		"ujang acep",
		"ujang bedil",
		"mang oleh",
		"mang ading",
		"ujang ucok",
		"ujang aep"
	};

	cari_nama(daftar_nama,6,"ujang");
*/
/*
int angka_cari(int data[], int jum_elemen, int dicari){

		int jumlah = 0;
		for(int i = 0; i<jum_elemen; i++){

			if(dicari == data[i]){
				jumlah++;
			}
		}
		return jumlah;
	}
*/
/*
int cari_urut(int data[], int jum_elemen, int dicari){

		int ada = 0;
		int bawah = 0;
		int atas = jum_elemen-1;
		int tengah;
		int posisi;

		while(atas >= bawah){

			tengah = (atas + bawah)/2;
			if(dicari > data[tengah]){
				bawah = tengah + 1;
			}else if(dicari < data[tengah]){
				atas= tengah - 1;
			}else{
				ada = 1;
				posisi = tengah;
				bawah = atas + 1;
			}
		}
		if(!ada){
			posisi = -1;
		}
		return posisi;
	}
*/
/*
int mencari(int data[], int jum_larik, int dicari){

		int ketemu, posisi, i;

		if(jum_larik == 0){
			posisi = -1;
		}else{

			ketemu = 0;
			i = 1;
			while((i<jum_larik-1) && !ketemu){
				if(data[i] == dicari){
					posisi = i;
					ketemu = 1;

				}else
					i++;
				if(!ketemu){
					posisi = -1;
				}
			}
		}
		return posisi;
	}
*/
/*

	cout << "  \t      PROGRAM BILLING KASIR RESTORAN" << endl;
	cout << "=============================================================" << endl;
	cout << "Menu Makanan \t\t\t\t Menu Minuman" << endl;
	cout << "1.Nasi Liwet Rp.25.000 \t\t\t Es Goyobod Rp.11.000" << endl;
	cout << "2.Nasi oncom Rp.20.000 \t\t\t Es Dawet Rp.10.000" << endl;
	cout << "3.Nasi timbel Rp.18.000 \t\t Bandrek Rp.15.000" << endl;
	cout << "4.Nasi rames Rp.15.000 \t\t\t Bajigur Rp.12.000" << endl;
	cout << "=============================================================" << endl << endl;

	char yt_makanan;
	int jumlah_makanan, pilih_makanan, harga_makanan;
	int jumlah, jumlah2;
	char yt_minuman;
	int jumlah_minuman, pilih_minuman, harga_minuman;
	bool lanjut = true;
	int total=0;

	cout << "Ingin beli makanan (y/t): ";
	cin >> yt_makanan;
	if(yt_makanan == 'y' || yt_makanan == 'Y'){

		cout << "Masukan jumlah menu makanan: ";
		cin >> jumlah_makanan;
		for(int i=1; i<=jumlah_makanan; i++){

			cout << "Masukan pilihan makanan ke " << i << " : ";
			cin >> pilih_makanan;
			cout << endl;
			switch(pilih_makanan){
				case 1:
					cout << "1.Nasi Liwet Rp.25.000" << endl;
					cout << "=======================" << endl;
					harga_makanan = 25000;
						break;
				case 2:
					cout << "2.Nasi oncom Rp.20.000" << endl;
					cout << "=======================" << endl;
					harga_makanan = 20000;
						break;
				case 3:
					cout << "3.Nasi timbel Rp.18.000" << endl;
					cout << "=======================" << endl;
					harga_makanan = 18000;
						break;
				case 4:
					cout << "4.Nasi rames Rp.15.000" << endl;
					cout << "=======================" << endl;
					harga_makanan = 15000;
						break;
			}
		}

	}else if(yt_makanan == 't' || yt_makanan == 'T'){

		lanjut = false;
	}

		cout << endl;
		jumlah = (jumlah_makanan * harga_makanan);
		cout << "Jumlah harga adalah: " << jumlah << endl << endl;

	cout << "Ingin beli minuman (y/t): ";
	cin >> yt_minuman;
	if(yt_minuman == 'y' || yt_minuman == 'Y'){

		cout << "Masukan jumlah menu minuman: ";
		cin >> jumlah_minuman;
		for(int j=1; j<=jumlah_minuman; j++){

			cout << "Masukan pilihan makanan ke " << j << " : ";
			cin >> pilih_minuman;
			cout << endl;
			switch(pilih_minuman){
				case 1:
					cout << "1.Es Goyobod Rp.11.000" << endl;
					cout << "=======================" << endl;
					harga_minuman = 11000;
						break;
				case 2:
					cout << "2.Es Dawet Rp.10.000" << endl;
					cout << "=======================" << endl;
					harga_minuman = 10000;
						break;
				case 3:
					cout << "3.Bandrek Rp.15.000" << endl;
					cout << "=======================" << endl;
					harga_minuman = 15000;
						break;
				case 4:
					cout << "4.Bajigur Rp.12.000" << endl;
					cout << "=======================" << endl;
					harga_minuman = 12000;
						break;
			}
		}

	}else if(yt_minuman == 't' || yt_minuman == 'T'){

		lanjut = false;
	}

		cout << endl;
		jumlah2 = (jumlah_minuman * harga_minuman);
		cout << "Jumlah harga adalah: " << jumlah2 << endl << endl;

		total = jumlah + jumlah2;
		cout << "Total harga yang harus dibayar: " << total << endl;

*/
/*
struct tummpukan{

		//DATA TUMPUKAN BERJUMLAH SEBANYAK 10
		int data_tumpukan[10];
		//UNTUK MEMULAI DATA TUMPUKAN PALING ATAS
		int top;
	};

	//MENDEKLARASIKAN STRUCT
	tummpukan Stack;

	//Membuat Void Push untuk Menambah inputan data pada stack
	void push(int input_data){

		//Untuk menambah data tumpukan
		Stack.top++;

		//Untuk menambah data pada tumpukan maka top nya atau data yang akan ditambahkan dimasukan ke elemen data_tumpukan
		//Kemudian setelah itu dimasukan ke variabel input_data
		Stack.data_tumpukan[Stack.top] = input_data;
	}

	//Untuk menghapus data tumpukan pada elemen paling atas
	int pop(){

		//Untuk mereturn/nilai balik data pada tumpukan paling atas
		//Jika data pada tumpukan paling atas bernilai 5 maka pop nya 5
		return Stack.data_tumpukan[Stack.top];
	}

	//Untuk mengembalikan nilai awal pada data tumpukan / Meng set nilai awal
	//Atau bisa juga untuk clear data yang ada pada tumpukan
	void set_Awal(){

		// UNTUK NILAI AWAL PROGRAM TUMPUKAN.TOP DARI -1
		Stack.top = -1;
	}

	//Untuk cek apakah data pada tumpukan kosong
	bool is_Empty(){

		//Jika/Kalau data pada tumpukan top nya masih -1.
		//Berati kalau nilainya -1 dia kosong
		if(Stack.top == -1){

			return 1; // NILAI BALIK BENAR / TRUE
		}else{

			return 0; // NILAI BALIK SALAH BERARTI TUMPUKAN NYA SUDAH ADA ISINYA / FALSE
		}
	}

	//Untuk cek apakah data pada tumpukan sudah penuh
	bool is_Full(){
		//Jika/kalau data tumpukan top nya sudah mencapai 9
		if(Stack.top == 9){

			return 1; // NILAI BALIK BENAR / TRUE
		}else{

			return 0; // NILAI BALIK SALAH BERARTI TUMPUKAN NYA SUDAH ADA ISINYA / FALSE
		}
	}

	//Untuk mencetak data tumpukan
	void print_data(){

		cout << "Data Tumpukan : ";
		//Looping/Mengulang cetak data tumpukan sampai dengan 0-9 kali
		for(int i=0; i<=Stack.top; i++){

			//Data tumpukan elemen nya dimasukan ke i
			cout << Stack.data_tumpukan[i] << " ";
		}
	}


int pilih, input;

	set_Awal();

	do{
		cout <<"\n";
		cout << "1.Push Data: " << endl;
		cout << "2.Pop Data: " << endl;
		cout << "3.Print Data: " << endl;
		cout << "4.Clear Data: " << endl;
		cout << "5.Exit Data: " << endl;
		cout << "Pilih: ";
		cin >> pilih;

		switch(pilih){

		case 1:
			//Jika data tumpukan nya sudah penuh. maka akan menampilkan "tumpukan penuh"
			if(is_Full() == 1){

				cout << "Tumpukan penuh" << endl;
			//Kalau tidak penuh maka akan memberi inputan masukan data
			}else{

				cout << "Masukan data: ";
				cin >> input;
				push(input);
			}
			break;

		case 2:
			//Jika data tumpukan nya masih kosong. maka akan menampilkan "tumpukan penuh"
			if(is_Empty() == 1){

				cout << "Tumpukan kosong" << endl;
			}else{
				//Sebaliknya maka akan menampilkan cetak data tumpukan
				cout << "Data yang di pop: " << pop() << endl;
			}
			break;

		case 3:
			if(is_Empty() == 1){

				cout << "Tumpukan kosong" << endl;
			}else{
				//Sebaliknya maka akan menampilkan cetak data tumpukan
				print_data();
			}
			break;
		case 4:
			set_Awal();
			break;

		}

	}while(pilih >= 1 && pilih <= 4);
*/
