#include <stdio.h>
#include <iostream>
#include <conio.h>

// DEFINE INI TIDAK MEMAKAI MEMORY
// DAN PI ITU ARTINYA DIGANTI DENGAN 3.148357 / SETIAP ADA PI DIA AKAN DIGANTI DENGAN 3.148357

//MACRO MERUBAH NILAI DENGAN NAMA
#define PI 3.148357
#define BAHASA "INDONESIA"

//MACRO UNTUK FUNGSI
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A:B)

using namespace std;

int main(){

	//PREPROCESSING DIRECTIVE MACRO DEFINE UNDEFINE
	cout << "Nilai dari PI = " << PI << endl;
	cout << "Bahasa : " << BAHASA << endl;
	cout << "Kuadrat = " << KUADRAT(10) << endl;

	//FUNGSI TERNARY OPERATOR
	//JIKA 5 LEBIH BESAR DARI 3 MAKA JIKA BENAR NILAINYA 5 ATAU 3
	cout << "MAX : " << ((5 > 3) ? 5:3) << endl;
	cout << "MAX FUNGSI : " << MAX(4,3) << endl;

	//MERUBAH DEFINE BAHASA DENGAN UNDEF
	#undef BAHASA
	#define BAHASA "SUNDA"
	cout << "Bahasa : " << BAHASA << endl;

	getch();
	return 0;
}
