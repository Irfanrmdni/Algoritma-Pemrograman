#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "otong.h"
/*using namespace std; INI ADALAH NAMESPACE STD DARI IOSTREAM JADI KETIKA KITA MENULIS PRORGAM TIDAK USAH LAGI MEMAKAI STD::
namespace otong{

	int b = 20;

	//MENYALIN DARI FUNGSI VOID KE DALAM NAMESPACE OTONG
	void fungsi(){

		std::cout << "ini adalah fungsi namespace otong" << std::endl;
	}

	void cout(int a){

		std::cout << a << std::endl;
	}
}
*/
void fungsi2(){

	std::cout << "ini adalah fungsi biasa" << std::endl;
}

//MEMBUAT NAMESPACE SENDIRI
//using namespace otong; //JADI KITA TIDAK AKAN MEMAKAI LAGI OTONG:: PADA PENULISAN PROGRAM SEPERTI PADA NAMESPACE STD::

int main(){

	//NAMESPACE
	//KETIKA MEMANGGIL FUNGSI DARI NAMESPACE KITA HARUS TULIS NAMESPACE NYA DAN STATEMENT NYA
	std::cout << otong::b << std::endl; //SEBELUM MEMAKAI NAMESPACE OTONG JADI OTONG::B
	fungsi2(); //FUNGSI BIASA
	otong::fungsi(); //FUNGSI DENGAN NAMESPACE OTONG. SEBELUM MEMAKAI NAMESPACE OTONG JADI OTONG::FUNGSI
	otong::cout(90); //SEBELUM MEMAKAI NAMESPACE OTONG JADI OTONG::COUT

	getch();
	return 0;
}
