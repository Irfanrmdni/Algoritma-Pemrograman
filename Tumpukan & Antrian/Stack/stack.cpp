#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
	/*
		SUATU KUMPULAN DATA YANG DIDALAM NYA TERDAPAT SEBUAH TUMPUKAN
		TERDAPAT 2 FUNGSI UTAMA

		POP = OPERASI UNTUK MENGHAPUS ELEMEN YANG SUDAH DITAMBAHKAN KE DALAM STACK YANG KITA TAMBAHKAN SEBELUMNYA
		PADA POSISI PALING ATAS

		PUSH = OPERASI UNTUK MENAMBAHKAN STACK DALAM PROGRAM

		isEmpty() = UNTUK MENGECEK APAKAH TUMPUKAN KOSONG

		isFull() = UNTUK MENGECEK APAKAH TUMPUKAN PENUH

		printStack = UNTUK MENAMPILKAN DATA YANG ADA DI TUMPUKAN
	*/

	//BUAT STRUCT UNTUK MENYIMPAN DATA PADA STACK
	struct STACK{

		int data_stack[10]; // DATA STACK BERJUMLAH 10 BUAH
		int top; // UNTUK MENANDAI URUTAN DATA PADA STACK PALING ATAS

	};

	STACK tumpukan; // TUMPUKAN = UNTUK MENGAMBIL SI VARIABEL STACK

	//MENAMBAH DATA PADA STACK
	void push(int input_data){
		// UNTUK MENAMBAH DATA BARU
		tumpukan.top++;
		// DATA DARI TUMPUKAN STACK KITA MASUKAN KE TOP INPUT_DATA KITA MASUKAN KE TUMPUKAN.DATA
		tumpukan.data_stack[tumpukan.top] = input_data;
	}

	// TOP DIGUNAKAN UNTUK RETURN/NILAI BALIK DARI TUMPUKAN.DATA YANG BERISI ELEMEN TUMPUKAN.TOP / PALING ATAS
	int pop(){

		//Untuk mereturn/nilai balik data pada tumpukan paling atas
		//Jika data pada tumpukan paling atas bernilai 5 maka pop nya 5
		return tumpukan.data_stack[tumpukan.top];
	}

	// UNTUK MENG-SET NILAI AWAL PROGRAM PADA DATA STACK
	void setAwal(){
		tumpukan.top = -1; // UNTUK NILAI AWAL PROGRAM TUMPUKAN.TOP DARI -1
	}

	// UNTUK CEK APAKAH NILAI DARI TUMPUKAN.TOP MASIH NILAI -1 KALAU YA MAKA AKAN RETURN/NILAI BALIK NYA 1 / BENAR
	bool isEmpty(){

		if(tumpukan.top == -1){

			return 1; // NILAI BALIK BENAR
		}else{

			return 0; // NILAI BALIK SALAH BERARTI TUMPUKAN NYA SUDAH ADA ISINYA
		}
	}
	// UNTUK CEK APAKAH TUMPUKAN PADA DATA STACK SUDAH PENUH
	bool isFull(){

		if(tumpukan.top == 9){ // TOP == 9 KARENA DATA PADA ARRAY NYA 10 = 0-9

			return 1; // NILAI BALIK BENAR
		}else{

			return 0; // NILAI BALIK SALAH BERARTI TUMPUKAN NYA SUDAH ADA ISINYA
		}
	}

	//UNTUK MENCETAK SEMUA DATA PADA TUMPUKAN
	void printStack(){

		cout << "Data: " << endl;
		for(int i=0; i<=tumpukan.top; i++){

			cout << tumpukan.data_stack[i] << " ";

		}
	}

int main(){

	//STACK / TUMPUKAN
	int pilih, input;

	setAwal();

	do{
		cout <<"\n";
		cout << "1.Push Data: " << endl;
		cout << "2.Pop Data: " << endl;
		cout << "3.Print Data: " << endl;
		cout << "4.Clear Data: " << endl;
		cout << "5.Exit Data: " << endl;
		cout << "Pilih : ";
		cin >> pilih;

		switch(pilih){

			case 1: // UNTUK CEK TUMPUKAN PENUH
			{
				if(isFull() == 1){

					cout << "Tumpukan Penuh" << endl;
				}else{

					cout << "Masukan Data yang ingin di Push : ";
					cin >> input;
					cout << endl;
					push(input);
				}
				break;
			}
		case 2: // UNTUK CEK TUMPUKAN KOSONG
			{
				if(isEmpty() == 1){

					cout << "Tumpukan Kosong" << endl;
				}else{

					cout << "Data yang di pop " << pop() << endl;
				}
			}
				break;
		case 3:
			{
				if(isEmpty() == 1){

					cout << "Tumpukan Kosong" << endl;
				}else{

					printStack();
				}
			}
				break;
		case 4:
			{
				setAwal();
				break;
			}
		}



	} while(pilih>=1 && pilih <=4);


	getch();
	return 0;
}




