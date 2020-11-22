#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// MENAMPILKAN STRING DAN MENGUBAH HURUF KECIL JADI KAPITAL DAN SEBALIKNYA

	char kar;
	char kata[100];

	cout << "Masukan kata : ";
	gets(kata);

	for(int i=0; i<strlen(kata); i++){

		kar = kata[i];
		if(kar>='A' && kar<='Z'){

			cout << (char) (kar+32);
		}
		else if(kar>='a' && kar<='z'){

			cout << (char) (kar-32);
		}
		else{

			cout << kar;
		}
	}

	cout << endl;

	getch();
	return 0;
}
