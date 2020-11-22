#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	//#define BAHASA "INDONESIA"
	//#define BAHASA "ENGLISH"
	#define ID 1

	#if ID == 1
		#define BAHASA "INDONESIA"
	#else
		#define BAHASA "ENGLISH"
	#endif // ID

int main(){

	//PREPROCESSING DIRECTIVE IF ELSE
	cout << "Bahasa : " << BAHASA << endl;


	getch();
	return 0;
}
