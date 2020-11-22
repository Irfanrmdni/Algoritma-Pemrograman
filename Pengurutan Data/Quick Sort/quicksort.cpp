#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
/*
		QUICK SORT ADALAH METODE DENGAN MENGGUNAKAN STRATEGI PECAH BELAH
		DENGAN MEKANISME BERIKUT:
		LARIK DATA[P...R] DENGAN INDEKS TERKECIL P DAN INDEKS TERBESAR R. DISUSUN ULANG(PARTISI)
		MENJADI DUA BUAH LARIK A[P...Q] DAN A[Q+1...R] SEHINGGA SETIAP ELEMEN DALAM A[P..Q] SELALU BERNILAI
		LEBIH KECIL DARIPADA SETIAP ELEMEN DALAM A[Q+1...R] SELANJUTNYA KEDUA LARIK TERSEBUT DIURUTKAN
		SECARA REKURSIF. DENGAN SENDIRINYA KOMBINASI KEDUA LARIK TERSEBUT MEMBENTUK LARIK DENGAN DATA YANG TERURUT
*/

	void tampil_larik(int data[], int indeks){

		for(int i=0; i<indeks; i++){

			cout << data[i] << " ";
		}
	}
		int partisi(int data[], int p, int r){

			int x, i, j, temp;

				x = data[p]; // UNTUK MEMBAGI LARIK DATA[P..R] MENJADI 2 BAGIAN
				i = p;
				j = r;

					while(1){

						while(data[j] > x){

							j = j - 1;

						}

							while(data[i] < x){

								i = i + 1;
							}

								if(i < j){

									//TUKARKAN DATA
									temp = data[i];
									data[i] = data[j];
									data[j] = temp;

								}else{

									return j;
								}
					}

		}

	void quick_sort(int data[], int p, int r){

		int q;

			if(p < r){

				q = partisi(data,p,r);
				quick_sort(data,p,q);
				quick_sort(data,q+1,r);
			}
	}


int main(){

	//PENGURUTAN DATA DENGAN METODE QUICK SORT

	const int jum = 9;
	int i;
	int data[] = {25,57,48,37,12,92,80,33,1};

		quick_sort(data, 0, jum-1);
		cout << "Hasil pengurutan: " << endl;
		tampil_larik(data,jum);



	getch();
	return 0;
}
