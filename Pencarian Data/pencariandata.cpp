#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	// PENCARIAN DATA
	/*
		PENCARIAN DATA (SEARCHING) MERUPAKAN TINDAKAN UNTUK MENDAPATKAN SUATU DATA
		DALAM KUMPULAN DATA. DALAM KEHIDUPAN SEHARI-HARI.

		ALGORITMA PENCARIAN = ALGORITMA YANG MENERIMA SEBUAH ARGUMEN A DAN MENCOBA UNTUK
		MENEMUKAN SEBUAH REKAMAN YANG MEMILIKI KUNCI A

		CONTOH UNTUK MENDAPATKAN MAHASISWA DENGAN NOMOR 259285. HASILNYA ADALAH REKAMAN
		YANG BERISI DATA MAHASISWA TERSEBUT. YANG BARANGKALI BERISI NAMA. ALAMAT. TANGGAL LAHIR

		PENCARIAN YANG DILAKUKAN DALAM MEMORI KOMPUTER DISEBUT PENCARIAN INTERNAL
		PENCARIAN YANG DILAKUKAN PADA MEDIA PENYIMPANAN EKSTERNAL DISEBUT PENCARIAN EKSTERNAL

		PENCARIAN SEKUENSIAL / PENCARIAN LINEAR
		MERUPAKAN MODEL PENCARIAN YANG PALING SEDERHANA YANG DILAKUKAN TERHADAP SUATU KUMPULAN DATA
		CONTOH:

		TERDAPAT L YANG MERUPAKAN LARIK YANG BERISI N BUAH DATA(L[0],L[1],L[-1])
		DAN K ADALAH DATA YANG HENDAK DICARI
		PENCARIAN DILAKUKAN UNTUK MENEMUKAN L[i] = K. DENGAN i ADALAH INDEKS TERKECIL
		YANG MEMENUHI KONDISI 0 <= K <= N - 1
		KEMUNGKINAN BAHWA DATA YANG DICARI TIDAK DITEMUKAN
		CONTOH:

			L = [10,9,4,6,4,3,2,5]

		DIMANAKAH POSISI 4 YANG PERTAMA ? DALAM HAL INI K ADALAH 4 DAN K DITEMUKAN PADA POSISI
		DENGAN INDEKS BERUPA 2

	*/

	int cari(int data[], int n, int k){ // L = LARIK, N=JUMLAH DATA DI DALAM LARIK, K = DATA YANG DICARI

		int posisi, ketemu, i;

		if(n<=0){

			posisi = -1;
		}else{

			ketemu = 0; // KETEMU SALAH
			i = 1;
			while((i < n-1) && !ketemu){ // TIDAK KETEMU

				if(data[i] == k){
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

int main(){

	int data[8] = {6,7,8,5,7,8,1,9};
	int dicari = 5;

	cout << "Posisi " << dicari << " dalam larik data: " << cari(data,8,dicari);


	getch();
	return 0;
}
