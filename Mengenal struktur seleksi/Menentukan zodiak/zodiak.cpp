#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	//SELEKSI BERSARANG
	//PROGRAM MENENTUKAN ZODIAK
	//CONTOH

	int tanggal, bulan;

	cout << "Masukan tanggal anda = ";
	cin >> tanggal;

	cout << "Masukan bulan anda = ";
	cin >> bulan;

	if(tanggal>=21 && bulan==3 || tanggal<=19 && bulan==4){

		cout << "ZODIAK ANDA ADALAH ARIES"<<endl;
	}
	else if(tanggal>=20 && bulan==4 || tanggal<=20 && bulan==5){

		cout << "ZODIAK ANDA ADALAH TAURUS"<<endl;
	}
	else if(tanggal>=21 && bulan==5 || tanggal<=20 && bulan==6){

		cout << "ZODIAK ANDA ADALAH GEMINI"<<endl;
	}
	else if(tanggal>=21 && bulan==6 || tanggal<=22 && bulan==7){

		cout << "ZODIAK ANDA ADALAH CANCER"<<endl;
	}
	else if(tanggal>=23 && bulan==7 || tanggal<=22 && bulan==8){

		cout << "ZODIAK ANDA ADALAH LEO"<<endl;
	}
	else if(tanggal>=23 && bulan==8 || tanggal<=22 && bulan==9){

		cout << "ZODIAK ANDA ADALAH VIRGO"<<endl;
	}
	else if(tanggal>=23 && bulan==9 || tanggal<=22 && bulan==10){

		cout << "ZODIAK ANDA ADALAH LIBRA"<<endl;
	}
	else if(tanggal>=23 && bulan==10 || tanggal<=21 && bulan==11){

		cout << "ZODIAK ANDA ADALAH SCORPIO"<<endl;
	}
	else if(tanggal>=22 && bulan==11 || tanggal<=21 && bulan==12){

		cout << "ZODIAK ANDA ADALAH SAGITARIUS"<<endl;
	}
	else if(tanggal>=22 && bulan==12 || tanggal<=19 && bulan==1){

		cout << "ZODIAK ANDA ADALAH CAPRICORN"<<endl;
	}
	else if(tanggal>=20 && bulan==1 || tanggal<=18 && bulan==2){

		cout << "ZODIAK ANDA ADALAH AQUARIUS"<<endl;
	}
	else if(tanggal>=19 && bulan==2 || tanggal<=20 && bulan==3){

		cout << "ZODIAK ANDA ADALAH PISCES"<<endl;
	}









	getch();
	return 0;
}
