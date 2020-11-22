#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

	//SELEKSI BERSARANG
	//PROGRAM MENENTUKAN NAMA BULAN DENGAN ANGKA
	//CONTOH PROGRAM

	int kodeBulan;

	cout << "Masukan Kode Bulan = ";
	cin >> kodeBulan;

	if(kodeBulan==1){

		cout << "BULAN JANUARI"<<endl;
	}
	else if(kodeBulan==2){

		cout << "BULAN FEBRUARI"<<endl;
	}
	else if(kodeBulan==3){

		cout << "BULAN MARET"<<endl;
	}
	else if(kodeBulan==4){

		cout << "BULAN APRIL"<<endl;
	}
	else if(kodeBulan==5){

		cout << "BULAN MEI"<<endl;
	}
	else if(kodeBulan==6){

		cout << "BULAN JUNI"<<endl;
	}
	else if(kodeBulan==7){

		cout << "BULAN JULI"<<endl;
	}
	else if(kodeBulan==8){

		cout << "BULAN AGUSTUS"<<endl;
	}
	else if(kodeBulan==9){

		cout << "BULAN SEPTEMBER"<<endl;
	}
	else if(kodeBulan==10){

		cout << "BULAN OKTOBER"<<endl;
	}
	else if(kodeBulan==11){

		cout << "BULAN NOVEMBER"<<endl;
	}
	else if(kodeBulan==12){

		cout << "BULAN DESEMBER"<<endl;
	}
	else{

		cout << "MASUKAN KODE DENGAN BENAR"<<endl;
	}


	getch();
	return 0;
}
