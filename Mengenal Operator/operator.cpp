#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h> // operasi aritmatika memiliki sejumlah fungsi dengan menggunakan header <math.h> bertipe double
				  /* contoh : sqrt() = menghitung akar dari sebuah nilai
							  pow(x,y) = menghitung akar kuadrat (x akar y)
							  tan(x) = menghitung nilai dari tangen
							  sin(x) = menghitung nilai dari sinus
							  cos(x) = menghitung nilai dari cosinus
							  log(x) = menghitung nilai dari logaritma dengan basis natural
							  log10(x) = menghitung nilai dari logaritma dengan basis 10
							  exp(x) = menghitung nilai eksponen

				  */

using namespace std;

int main(){

	// Mengenal Operator
	// + - / * ? % itu adalah disebut operator aritmatika
	// 2 + 3 (angka 2 dan 3 disebut operand)
	// 2 + 3 (ini dinamakan juga ekspresi)

	/*
		operator dapat dibedakan jadi 3 macam

		operator unuary = operator yang hanya melibatkan sebuah operand
		contoh : +1 , -1

		operator binary = operator yang melibatkan dua buah operand
		contoh : 2 + 3 , 5 * 2 , 10 - 2

		operator tertiary = operator yang melibatkan tiga buah operand
		contoh : a > b ? 1 : 0
		artinya jika a lebih besar dari b maka ekspresi menghasilkan nilai i kalau tidak akan menghasilkan nilai 0

	*/

	double kecepatan, sudut, jarak;

	cout << "Masukan angka kecepatan = ";
	cin >> kecepatan;

	cout << "Masukan angka sudut = ";
	cin >> sudut;

	jarak = 2 * kecepatan * kecepatan * sin(sudut * 3.14 / 180) * cos(sudut * 3.14 / 180) / 9.8;

	cout << "jaraknya = " << jarak << endl;

	//====================================================================================================================

	/*
		operator perbandingan atau disebut operator relasional
		untuk melakukan perbandingan terhadap dua buah nilai
		hasil pembandingan bernilai 1 dan 0
		nilai nol atau 0 pembandingan bernilai salah sedangkan nilai satu atau 1 bernilai benar

		contoh: > lebih dari
				>= lebih dari atau sama dengan
				< kurang dari
				<= kurang dari atau sama dengan
				!= tidak sama dengan
				== sama dengan
	*/

    int a;
    int b;

	cout << endl << endl;
	cout << "Masukan angka pertama = ";
	cin >> a;
	cout << "Masukan angka kedua = ";
	cin >> b;

	cout << endl;
	if(a>=b){

		cout << "nilai angka pertama lebih besar dari angka kedua" << endl;
	}else{

		cout << "nilai angka pertama lebih kecil dari angka kedua" << endl;
	}
	cout << endl;
	//====================================================================================================================

    /*
		operator logika = digunakan membentuk suatu ekspresi pembandingan dari satu atau duah buah ekspresi pembandingan

		contoh : && operator dan =
				 || operator atau
				 !  operator bukan
    */

	int c, d;


	cout << "Masukan nilai 1 : ";
	cin >> c;

	cout << "Masukan nilai 2 : ";
	cin >> d;

	double rata;
	string mutu;

	rata = (c+d)/2;
    if (rata>=70 && rata<=100){

		mutu = "BAGUS";
    }
    else{

		mutu = "CUKUP";
    }
	cout << endl;
	cout << "rata-rata : " << rata <<endl;
	cout << "mutu : " << mutu << endl;
	if(mutu=="BAGUS"||mutu=="CUKUP"){

		cout << "lulus";
	}else{

		cout << "tidak lulus";
	}

	//====================================================================================================================

	//Mengenal pengonversian tipe
	// jika salah satu operand bertipe double maka yangg lain akan dikonversi ke double
	// jika salah satu operand bertipe float maka yangg lain akan dikonversi ke float dan seterusnya

	/*
		contoh int jumlah
			   float hargaPerunit
			   double hargaTotal

		dari tipe data diatas int akan dikonversi ke float dan float akan di konversi ke double

	*/

	char kar = 'A';
	int nilaiA;

	// isi variabel kar akan dikonversi ke int kemudian akan disimpan ke int
	nilaiA = (int) kar;
	cout << endl << endl;
    cout << "nilai : " << kar << nilaiA << endl;






	getch();
	return 0;
}
