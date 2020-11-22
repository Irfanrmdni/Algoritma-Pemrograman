#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
/*
	APABILA KUMPULAN DATA SUDAH TERURUT PENCARIAN DATA MENGGUNAKAN PENCARIAN SEKUENSIAL AKAN MEMAKAN WAKTU
	YANG LAMA JIKA DATA DALAM KUMPULAN DATA TERSEBUT SANGAT BANYAK

	HAL INI DAPAT DIATASI DENGAN METODE PENCARIAN BINER (BINARY SEARCH)

	1. DATA YANG DICARI SAMA DENGAN ELEMEN TERAKHIR PADA BAGIAN PERTAMA DALAM LARIK
	2. DATA YANG DICARI BERNILAI KURANG DARI NILAI ELEMEN TERAKHIR PADA BAGIAN PERTAMA DALAM LARIK
	PENCARIAN INI DITERUSKAN PADA BAGIAN PERTAMA
	3. DATA YANG DICARI BERNILAI LEBIH DARI NILAI ELEMEN TERAKHIR PADA BAGIAN PERTAMA DALAM LARIK
	PENCARIAN INI DITERUSKAN PADA BAGIAN KEDUA
*/

	int cari_biner(int data[], int n, int k){

		int ada = 0;
		int bawah = 0;
		int atas = n-1;
		int tengah;
		int posisi;

			while(atas>=bawah){

				tengah = (atas + bawah)/2; // PEMBAGIAN BULAT

					if(k>data[tengah]){

						// KEMUNGKINAN DATA DICARI ADA DI KANAN
						bawah = tengah + 1;
					}else if(k<data[tengah]){

						atas = tengah - 1;
					}else{

						// BERARTI DATA KETEMU
						ada = 1;
						posisi = tengah;
						bawah = atas + 1; // SUPAYA PENGULANGAN BERAKHIR
					}
			}

			if(!ada){
			posisi = -1;
		}

		return posisi;
	}

int main(){

	// PENCARIAN DATA URUT
	int data[] = {1,2,4,4,5,7,8,10,13,14,15};
	int dicari = 13;

	cout << "Posisi " << dicari << " Dalam larik data: " << cari_biner(data,11,dicari) << endl;


	getch();
	return 0;
}
