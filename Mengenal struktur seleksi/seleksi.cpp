#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

/*
		Mengenal struktur seleksi
		menyatakan pemilihan langkah yang didasarkan oleh suatu kondisi (pengambilan keputusan)
        seleksi menyediakan 2 buah pernyataan yaitu if dan switch

        penggunaan perintah switch hanya bisa digunakan kalau anda ingin mengevaluasi suatu nilai
        apakah nilainya sama dengan nilai-nilai tertentu
        dengan kata lain kalau anda ingin melakukan pembandingan seperti lebih besar dari atau kurang dari
        maka pertanyaan switch tidak bisa digunakan

		penerjemahan bentuk jika...akhir...jika atau if

		jika suatu kondisi benar MAKA
		langkah 1
		SEBALIKNYA
		langkah 2
		AKHIR-JIKA

		if(kondisi)
		  {
			pernyataan_1

		  }
		else
		{
		  pernyataan_2

		}

		penerjemahan bentuk cocok...akhir...cocok atau switch

		COCOK nilai
		 DENGAN nilai1 MAKA
		  pernyataan-10
		  pernyataan-11
		DENGAN nilai2 MAKA
		 pernyataan-20
		 pernyataan-21
		LAINNYA
		 pernyataan-n1
		 pernyataan-n2
		AKHIR-COCOK

		switch(nilai)
		{
			case nilai1;
				pernyataan_10;
				pernyataan_11;
				break;
			case nilai2;
				pernyataan_20;
				pernyataan_21;
				break;
			case nilai3;
				pernyataan_30;
				pernyataan_31;
				break;
			default
				pernyataan_n1;
				pernyataan_n2;
				break;
		}

		pernyataan break pada pernyataan switch digunakan agar eksekusi dilanjutkan
		ke pernyataan yang terletak sesudah pernyataan switch

		bagian default pada switch bersifat optional bagian ini hanya dijalankan kalau tak ada satupun
		bagian case yang cocok dengan nilai switch


    */

int main(){

	//PROGRAM SELEKSI SEDERHANA
	//Contoh menentukan bilangan genap atau bilangan ganjil


    int bil;

    cout << "Masukan bilangan = ";
    cin >> bil;

    if(bil % 2 == 0){

		cout << "Bilangan Genap" << endl;
    }else{

		cout << "Bilangan Ganjil" << endl;
    }

	cout << endl << endl;

	//Contoh mencari bilangan terbesar
	double a, b;

	cout << "Masukan nilai a = ";
	cin >> a;

	cout << "Masukan nilai b = ";
	cin >> b;

    if(a>b){

		cout << "Bilangan terbesar nya a adalah = " << a << endl;
    }else if(b>a){

		cout << "Bilangan terbesar nya b adalah = " << b << endl;
    }
	cout << endl << endl;

	//PROGRAM SELEKSI MAJEMUK (2 atau lebih kondisi)
	//contoh menentukan validasi nilai ujian
	int nilai;

	cout << "Masukan Nilai Ujian anda = ";
	cin >> nilai;

	if(nilai >=0 && nilai <=100){

		cout << "Nilai Absah" << endl;
	}else{

		cout << "Nilai tidak absah" << endl;
	}


    //Contoh menentukan huruf kapital atau bukan

    string huruf;

    cout << "Masukan huruf : ";
    cin >> huruf;

    if(huruf >= "A" && huruf <="Z"){

		cout << "HURUF KAPITAL" << endl;
    }else{

		cout << "BUKAN HURUF KAPITAL" << endl;
    }
	cout << endl;

	//SELEKSI BERSARANG
	//suatu bentuk seleksi bertingkat (bersarang)

	int tahunKabisat;

	cout << "Masukan tahun = ";
	cin >> tahunKabisat;

	//tahunKabisat harus habis dibagi 4
	if(tahunKabisat%4!=0){

		cout << "BUKAN TAHUN KABISAT" <<endl;
	}
	else if(tahunKabisat%100==0 && tahunKabisat%400!=0){

		cout << "BUKAN TAHUN KABISAT" << endl;
	}
	else{

		cout << "KABISAT" << endl;
	}
















	getch();
	return 0;
}
