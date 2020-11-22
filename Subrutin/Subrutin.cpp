#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	// Subrutin / Fungsi & Void
	// SUBRUTIN DIBEDAKAN MENJADI 2 YAITU FUNGSI DAN PROSEDUR
	// FUNGSI = JENIS SUBRUTIN DENGAN MENGHASILKAN NILAI BALIK KETIKA SUBRUTIN DIPANGGIL
	// PROSEDUR/VOID = JENIS SUBRUTIN DENGAN TIDAK MENGHASILKAN NILAI BALIK
	/*
		SEBUAH PRORGAM YANG BESAR BIASANYA DISUSUN ATAS SEJUMLAH BAGIAN YANG LEBIH KECIL
		YANG DINAMAKAN SUBRUTIN ATAU SUBPROGRAM

		TUJUAN NYA ADALAH UNTUK MEMUDAHKAN PENGELOLAAN/PENGEMBANGAN PROGRAM MENGINGAT SETIAP
		SUBRUTIN MEMILIKI KODE YANG RELATIF SEDIKIT

		SELAIN ITU SUBRUTIN JUGA DAPAT DIGUNAKAN UNTUK MENGURANGI JUMLAH KODE AKIBAT
		SEJUMLAH KODE YANG SAMA DIGUNAKAN UNTUK MENGURANGI JUMLAH KODE AKIBAT SEJUMLAH
		KODE YANG SAMA DIGUNAKAN BEBERAPA KALI DALAM PROGARM

		Subrutin_a() ================> Subrutin_a()
					 <================

		Subrutin_b() ================> Subrutin_b()
				     <================

		Subrutin_c() ================> Subrutin_c()
					 <================

		PENULISAN ALGORITMA UNTUK SUBRUTIN

		Subrutin NamaSubrutin (Daftar-Parameter)
			Pertanyaan..1
			...
			Pertanyaan..2
		Akhir-Subrutin

		Bagian Subrutin NamaSubrutin
		DISEBUT JUGA JUDUL SUBRUTIN
		SEBUAH SUBRUTIN DAPAT MEMBERIKAN NILAI BALIK ATAUPUN TIDAK
		NILAI BALIK ADALAH NILAI YANG DIBERIKAN KE PEMANGGILNYA

		CONTOH:
		SUBRUTIN Hitung_Keliling_Kotak(Panjang,Lebar)
			Keliling = 2 * (Panjang + Lebar)

			NILAI-BALIK Keliling
		AKHIR-SUBRUTIN

		PADA CONTOH DIATAS Hitung_Keliling_Kotak ADALAH NAMA SUBRUTIN ADAPUN PANJANG
		SERTA LEBAR DISEBUT PARAMETER. PARAMETER MENYATAKAN BAGIAN UNTUK BERKOMUNIKASI
		DENGAN PEMANGGIL SUBRUTIN. PADA PEMANGGIL BAGIAN SUBRUTIN. BAGIAN INI AKAN DIISI
		DENGAN ARGUMEN CONTOH:

		Hasil = Hitung_Keliling_Kotak(10,5)

		PADA PEMANGGILAN SUBRUTIN DIATAS 10 DAN 5 BERKEDUDUKAN SEBAGAI ARGUMEN

	*/
	// Double ADALAH TIPE SUBRUTIN
	// keliling_kotak ADALAH JUDUL/NAMA SUBRUTIN
	// (Double Panjang , Double Lebar) ADALAH PARAMETER DARI SUBRUTIN keliling_kotak

	// FUNGSI DENGAN NILAI BALIK
	double keliling_kotak(double panjang , double lebar){

		double keliling;
		keliling = 2 * (panjang + lebar); // PERNYATAAN UNTUK MENDEKLARASIKAN VARIABEL DENGAN TIPE DOUBLE

		return keliling; //UNTUK MEMBERIKAN NILAI BALIK
	}

	void infoperusahaan(){ // FUNGSI PROSEDUR TANPA MELIBATKAN PARAMETER

		cout << "PT.IRStudio Tech" << endl;
	}

int main(){

	// FUNGSI DENGAN NILAI BALIK
	cout << "Fungsi dengan nilai balik" << endl;
	double keliling, panjang=21, lebar=13;

	keliling = keliling_kotak(panjang,lebar); // MENAMPILKAN NILAI KELILING
	cout << "Keliling: " << keliling << endl;
	cout << endl;

	// FUNGSI TANPA NILAI BALIK
	cout << "Fungsi tanpa nilai balik" << endl;
	infoperusahaan();




	getch();
	return 0;
}
