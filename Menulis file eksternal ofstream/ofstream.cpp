#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>

/*	STRREAM KE FILE EKSTERNAL
	TERDIRI DARI 3 :
	OFSTREAM = OUTPUT STREAM
	IFSTREAM = INPUT STREAM
	FSTREAM

	IOS::OUT = OPERASI OUTPUT YANG BERFUNGSI UNTUK MENULISKAN OUTPUT KE FSTREAM/EKSTERNAL INI DEFAULT NYA
	IOS::APP = MENULISKAN PADA AKHIR BARIS APP ITU = APPEND
	IOS::TRUNCT = MEMBUAT FILE JIKA TIDAK ADA DAN KALAU ADA MAKA AKAN DIHAPUS DAN DIGANTIKAN DENGAN YANG BARU

	IOS::OUT DAN IOS::TRUNCT MODE NYA SAMA
*/



using namespace std;

int main(){

	//MENULIS FILE EKSTERNAL OFSTREAM

	ofstream Myfile;
	int a = 1012;
	// KETIKA DATA NYA BELUM DIBUAT MAKA SECARA OTOMATIS AKAN DIBUATKAN SENDIRI
	Myfile.open("data01.txt",ios::out);
	Myfile << "Hello Word data OUT\n";
	Myfile << a;
	Myfile.close(); //AGAR SUPAYA KETIKA PROGRAM DIBUKA ITU AKAN OTOMATIS DITUTUP

	Myfile.open("data02.txt",ios::trunc);
	Myfile << "\nHello Word data TRUNCT";
	Myfile.close();

	Myfile.open("data03.txt",ios::app);
	Myfile << "\nADA APA DENGAN CINTA";
	Myfile.close();

	getch();
	return 0;
}
