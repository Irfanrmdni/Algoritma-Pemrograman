#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip> // jika ingin menggunakan manipulator setw(), setprecision(), setfill, setiosflags dan resetiosflags
				  // program harus menggunakan header bernama <iomanip>

using namespace std;

int main(){

	// Menampilkan Informasi ke Layar

	int bil = 23;

	cout << "Desimal = " << bil << endl;
	cout << "Hexadecimal = " << hex << bil << endl; // Hex = untuk menampilkan bilangan dalam bentuk hexadecimal
	cout << "Octadecimal = " << oct << bil << endl; // Oct = untuk menampilkan bilangan dalam bentuk Octadecimal
	cout << endl << endl;

	// Contoh Manipulator lain
	// setw(n) = untuk menambahkan lebar tampilan sebanyak n
	// setfill(karakter) = untuk menambahkan karakter pada bagian ruang yang ditentukan oleh setw default nya tidak berisi
	// karakter apapun
	// setprecision(n) = untuk menentukan jumlah digit pecahan
	// manipulator setiosflags = digunakan untuk menyetel suatu keadaan
	// manipulator resetiosflags = digunakan untuk menghilangkan suatu keadaan
	/*
	   argumen dari manipulator setiosflags dan resetiosflags
	   ios::skipws = mengabaikan spasi putih pada pemasukan data
	   ios::left = keluaran diatur data kiri
	   ios::right = keluaran diatur data kanan
	   ios::dec = konversi ke sistem desimal
	   ios::hex = konversi ke sistem hexadesimal
	   ios::oct = konversi ke sistem oktal
	   ios::uppercase = keluaran dalam sistem hexadesimal menggunakan huruf kapital
	   ios::fixed = menggunakan notasi tetap bukan sains

	*/

	int bilangan = 15;
	char st[]="hellokalian";

	cout << bilangan << endl;
	cout << setw(4) << bilangan << endl;
	cout << setw(6) << bilangan << endl;
	cout << endl;

	cout << bilangan << endl;
	cout << setw(7) << setfill('-') << bilangan << endl;
	cout << setw(8) << setfill('*') << bilangan << endl;
	cout << endl;

	cout << st << endl;
	cout << setw(15) << setfill('+') << st << endl;
	cout << setw(20) << setfill('-') << st << endl;
	cout << endl << endl;

	double bil2 = 4567.1234;

	cout << bil2 << endl;
	cout << setiosflags(ios::fixed) << setw(14) << setprecision(4) << bil2 << endl;
	cout << setiosflags(ios::scientific) << setw(14) << setprecision(4) << bil2 << endl;

	cout << endl;
	cout << setw(16) << setprecision(4) << bil2 << endl;
	cout << setw(17) << setprecision(5) << bil2 << endl;

	cout << bil2 << endl;
	cout << setprecision(ios::scientific) << bil2 << endl;




	return 0;
}
