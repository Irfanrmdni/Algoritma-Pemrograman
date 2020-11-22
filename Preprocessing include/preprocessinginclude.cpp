#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string> //JIKA KITA PAKAI LAGI LIBRARY STRING MAKA KITA MEMAKAI 2 LIBRARY

#include "librarysaya.h" // INI DI DALAMNYA KITA SUDAH PAKAI LIBRARY STRING

using namespace std;

int main(){

	//PREPROCESSING INCLUDE

	cout << "PI = " << PI << endl;
	cout << "KUADRAT = " << KUADRAT(5) << endl;
	cout << "MAX: " << MAX(10,8) << endl;
	cout << "STRING " << DATA << endl;


	getch();
	return 0;
}
