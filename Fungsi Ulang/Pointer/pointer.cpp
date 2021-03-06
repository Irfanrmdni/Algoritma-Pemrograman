#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
/*
	POINTER BERGUNA UNTUK MEMANAGEMENT MEMORY / AGAR TIDAK MEMBUAT BANYAK ADDRES MEMORY / DUPLIKASI
	DENGAN MENGGUNAKAN & = BERFUNGSI UNTUK MEMANGGIL ADDRES MEMORY

	ADDRES MEMORY = ALAMAT MEMORI

	ADDRES MEMORY ITU SELALU BERPINDAH-PINDAH

	JADI POINTER ITU HANYALAH ALAMAT YANG BISA DIPAKAI UNTUK MENYIMPAN ALAMAT DARI SEBUAH VARIABEL

	CONTOH NYA SI A DAN B
*/

int main(){

	//POINTER
	//KETIKA AKAN MENGUBAH NILAI DARI SI ADDRES A ITU TIDAK BISA. MAKANYA KITA BUTUH NAMA UNTUK SI ADDRES NYA
	//KEMUDIAN KITA AKAN MENYIMPAN ALAMAT NYA DARI SI A. CARANYA MENGGUNAKAN POINTER
	int a = 100;

	//CARA MEMASUKAN SI ADDRES DARI A. UNTUK MENDAPATKAN VARIABEL POINTER NYA

	int *aPointer = &a;

	cout << "Nilai dari a: " << a << endl;

	//SEKARANG KITA SUDAH MEMBERI NAMA DARI ALAMAT ADDRES A KEDALAM *aPOINTER
	cout << "Alamat dari a: " << aPointer << endl;

	//MENDEKLARASIKAN POINTER DENGAN NULL / ADDRES YANG MASIH KOSONG / BELUM ADA ALAMAT
	int b = 10;
	int *bPointer = nullptr;
	bPointer = &b;
	cout << "Alamat dari b: " << bPointer << endl;

	//BAGAIMANA CARA KITA AGAR MENGAMBIL NILAI DARI SI ALAMAT NYA

	//YAITU DENGAN MENGGUNAKAN DEREFERENCING = MENGAMBIL DATA DARI SEBUAH POINTER
	//HARUS MENGGUNAKAN TANDA *
	cout << "Mengambil nilai dari pointer bPointer : " << *bPointer << endl;





	getch();
	return 0;
}
