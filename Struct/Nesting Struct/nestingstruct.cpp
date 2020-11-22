#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

	struct aktor{

		string nama_aktor;
		int tahun_lahir;
	};

	struct film{

		string judul_film;
		string genre_film;
		int tahun_film;

		aktor pemeran_1;
		aktor pemeran_2;
		aktor pemeran_3;

	};

int main(){

	//NESTING STRUCT

	// BUAT VARIABEL NAMA UNTUK MENAMPUNG DATA STRUCT
	aktor aktor_1, aktor_2, aktor_3;
	film film_1, film_2, film_3;

	//BUAT AKTOR 1
	aktor_1.nama_aktor = "Kupad Bin Japra";
	aktor_1.tahun_lahir = 1978;

	//BUAT AKTOR 2
	aktor_2.nama_aktor = "Mang Oleh";
	aktor_2.tahun_lahir = 1885;

	//BUAT AKTOR 3
	aktor_3.nama_aktor = "Mang Ucup";
	aktor_3.tahun_lahir = 2003;

	  //BUAT FILM 1
	  film_1.judul_film = "Pengabdi setan";
	  film_1.genre_film = "Horror";
	  film_1.tahun_film = 2004;
	  film_1.pemeran_1 = aktor_1; // FILM.PEMERAN_1 ITU SAMA DENGAN AKTOR_1

	  //BUAT FILM 2
	  film_2.judul_film = "Odading Mang Oleh Full Movie";
	  film_2.genre_film = "Dokumenter";
	  film_2.tahun_film = 1990;
	  film_2.pemeran_2 = aktor_2; // FILM.PEMERAN_2 ITU SAMA DENGAN AKTOR_2

	   //BUAT FILM 3
	  film_3.judul_film = "Like Young Mother";
	  film_3.genre_film = "Romance";
	  film_3.tahun_film = 1890;;
	  film_3.pemeran_3 = aktor_3; // FILM.PEMERAN_2 ITU SAMA DENGAN AKTOR_2

	    //MENAMPILKAN DATA FILM 1
	    cout << "Judul Film: " << film_1.judul_film << endl;
	    cout << "Genre Film: " << film_1.genre_film << endl;
	    cout << "Tahun Film: " << film_1.tahun_film << endl;
	    cout << "Aktor Film: " << film_1.pemeran_1.nama_aktor << endl;
	    cout << "Tahun Lahir: " << film_1.pemeran_1.tahun_lahir << endl << endl;

	    //MENAMPILKAN DATA FILM 2
	    cout << "Judul Film: " << film_2.judul_film << endl;
	    cout << "Genre Film: " << film_2.genre_film << endl;
	    cout << "Tahun Film: " << film_2.tahun_film << endl;
	    cout << "Aktor Film: " << film_2.pemeran_2.nama_aktor << endl;
	    cout << "Tahun Lahir: " << film_2.pemeran_2.tahun_lahir << endl << endl;

	    //MENAMPILKAN DATA FILM 3
	    cout << "Judul Film: " << film_3.judul_film << endl;
	    cout << "Genre Film: " << film_3.genre_film << endl;
	    cout << "Tahun Film: " << film_3.tahun_film << endl;
	    cout << "Aktor Film: " << film_3.pemeran_3.nama_aktor << endl;
	    cout << "Tahun Lahir: " << film_3.pemeran_3.tahun_lahir << endl;

	getch();
	return 0;
}
