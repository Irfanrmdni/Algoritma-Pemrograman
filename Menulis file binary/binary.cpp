#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

int main(){

	//MENULIS FILE BINARY
	fstream Myfile;
	int number = 111101; // CARA MERUBAH NUMBER KE BENTUK BINARY

	Myfile.open("data.bin",ios::out | ios::binary);

	Myfile.write(reinterpret_cast<char*>(&number),sizeof(number));

	Myfile.close();





	getch();
	return 0;
}
