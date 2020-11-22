#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

 void balik(long int bil){

	long int digitTersisaDikiri;

	cout << bil % 10;
	digitTersisaDikiri = bil / 10;
	if(digitTersisaDikiri != 0){

		balik(digitTersisaDikiri);
	}
 }

int main(){

	// REKURSI
	// PROGRAM UNTUK MEMBALIKAN SUATU BILANGAN
	int bil;

	cout << "Bilangan bulat = ";
	cin >> bil;

	balik(bil);


	getch();
	return 0;
}
