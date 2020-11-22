#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <exception>
#include <array>

using namespace std;

/*	1. SYNTAX ERROR
	YAITU ERROR YANG KETIKA SALAH DALAM PENULISAN SYNTAX SEPERTI KURANG ; , KURANG ) DAN LAIN-LAIN
	CONTOH :
	INT A = 10	=> KURANG SYNTAX ;
	IF(A<5	=> KURANG SYNTAX KURUNG

	2. LINKING ERROR
	YAITU KETIKA ERROR YANG TERJADI BUKAN PADA SYNTAX TETAPI PADA SAAT MELINKING DARI SUATU PROESES
	CONTOH :

	PROTOTYPE
	INT KUADRAT(INT &VALUE); => INI HANYA PROTOTYPE NYA SAJA TIDAK ADA PROSES LINKING NYA

	HARUSNYA DIBUAT SUATU PROSESNYA SEPERTI INI
	INT KUADRAT(INT &VALUE){

		RETURN VALUE*VALUE;
	}

	ATAU MISALNYA TIPE DATA DI PROTOTYPE DAN DI PROSES NYA TIDAK SAMA
	PROTOTYPE
	DOUBLE KUADRAT(INT &VALUE); => TIPE DATA TIDAK SAMA . BISA JUGA NAMA DARI PROTOTYPE DAN DI PROSES NYA TIDAK SAMA

	INT KUADRAT(INT &VALUE){

		RETURN VALUE*VALUE;
	}

	3. NON ERROR YAITU KETIKA PROGRAM YANG DIJALANKAN TIDAK SESUAI DENGAN HASILNYA
	CONTOH :
	int a = 10;
	int b = -5;
	COUT << a*b << ENDL; => HASILNYA = -50 INI KESALAHAN PROGRAM

	4. RUNTIME ERROR YAITU ERROR YANG TERJADI PADA SAAT TERJADINYA PROGRAM
	CONTOH :

	INT A = 5;
	INT B = 0;
	COUT << A/B << ENDL; => MAKA HASILNYA FLOATING POINT 8 / ERROR

	CONTOH LAIN :
	INT ARRAY[5] = {0,1,2,3,4};
	COUT << ARRAY[6] << ENDL; => MAKA HASILNYA RANDOM / ERROR KARENA BATAS ELEMEN ARRAYNYA SAMPAI 4

*/

	int pembagi(int &num, int &denum){

		if(denum == 0){
			throw overflow_error("Error pembagi 0"); //INI NGAMBIL DARI EXCEPTION &E
			//throw "error pembagi 0";
		}

		return num/denum;
	}

int main(){

	//ERROR HANDLING

	int a;
	int b;
	int c;

		while(true){

			cout << "num: ";
			cin >> a;
			cout << "denum: ";
			cin >> b;

			try{

				c = pembagi(a,b);
				cout << c << endl;
				//catch(const char* e)
			}catch(exception &e){
				//JADI KETIKA ERROR AKAN DITAMPILKAN THROW
				//cout << e << endl;
				cout << e.what() << endl;
			}
		}

		cout << "Akhir dari program" << endl;

	getch();
	return 0;
}

/*
	array<int, 5> a = {0,1,2,3,4};

	try{
		//MENGAMBIL NILAI ELEMEN DARI A KE 5 DENGAN MENGGUNAKAN TRY. DICOBA KALO ADA ERROR
		cout << a.at(5) << endl;
	//MAKA DITANGKAP SI ERROR TADI OLEH EXCEPTION DAN DITAMPUNG DI ADDRESS E
	}catch(exception &e){
	//KITA TAMPILKAN APA ERROR TERSEBUT
		cout << e.what() << endl;
	}
	cout << "Akhir dari program" << endl;
*/
