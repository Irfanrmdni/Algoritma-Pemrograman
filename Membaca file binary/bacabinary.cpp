#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

int main(){

	//MEMBACA FILE BINARY
	fstream Myfile;
	int hasil;

	Myfile.open("data.bin",ios::in | ios::binary);

	Myfile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

	cout << "Besar int = " << sizeof(hasil) << endl;
	cout << hasil << endl;

	Myfile.close();




	getch();
	return 0;
}
