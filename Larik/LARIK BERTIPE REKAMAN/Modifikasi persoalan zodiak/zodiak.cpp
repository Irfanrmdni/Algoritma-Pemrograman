#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI LARIK BERTIPE STRUKTUR
	// PROGRAM MEMODIFIKASI PERSOALAN ZODIAK
	struct zodiak{

		char nama[12];
		int tgl_awal;
		int tgl_akhir;
		int bln_awal;
		int bln_akhir;

	};

	struct zodiak data[] = {

	{"Aries",21,3,19,4},
	{"Taurus",20,4,20,5},
	{"Gemini",21,5,20,6},
	{"Cancer",21,6,22,7},
	{"Leo",23,7,22,8},
	{"Virgo",23,8,22,9},
	{"Libra",23,9,22,10},
	{"Scorpio",23,10,21,11},
	{"Sagitarius",22,11,21,12},
	{"Capricorn",22,12,19,1},
	{"Aquarius",20,1,18,2},
	{"Pisces",19,2,20,3}};

	int tanggal, bulan;

	cout << "Masukan tanggal = ";
	cin >> tanggal;
	cout << "Masukan bulan   = ";
	cin >> bulan;

	for(int i=0; i<12; i++){

		if((tanggal >= data[i].tgl_awal && bulan == data[i].bln_awal)

			|| (tanggal <= data[i].tgl_akhir && bulan == data[i].bln_akhir))
			{
				cout << data[i].nama << "\n";
				break;
			}
	}



	return 0;
}
