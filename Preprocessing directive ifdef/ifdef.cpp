#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "bersama.h"
//#include "foo.h"
//#include "bar.h"
/*#define FOO "foo lama"
//IFDEF
//INI ARTINYA JIKA ITU SUDAH TERDEFINISI
#ifdef FOO //JIKA FOO SUDAH TERDEFINISI
	#define TEST_FOO "Foo ada"
#else
	#define TEST_FOO "Foo tidak ada"
#endif

//IFNDEF
//INI ARTINYA JIKA TIDAK TERDEFINISI
#ifndef FOO // JIKA FOO TIDAK ADA MAKA KITA AKAN MEMBUAT FOO
#define FOO "foo baru"
#endif

//PRAGMA ONCE
*/
using namespace std;

int main(){
	mahasiswa data;
	data.NIM = 100;
	cout << data.NIM << endl;


	getch();
	return 0;
}
