#include <iostream>

using namespace std;

int main()
{

	int sayac;
	int encokTekrarsayisi = 0;
	int encoktekrarEden;

	int dizi[10] = { 1,8,5,7,2,7,1,8,6,7 };


	for (int i = 0; i < 10; i++) {

		sayac = 0;

		for (int j = 0; j < 10; j++) {

			if (dizi[i] == dizi[j]) {
				sayac++;
			}

			if (sayac > encokTekrarsayisi) {
				encokTekrarsayisi = sayac;
				encoktekrarEden = dizi[i];
			}
		}

	}

	cout << "Dizi icerisinde en cok tekrar eden sayi = " << encoktekrarEden << endl << "Tekrar sayisi = " << encokTekrarsayisi;


	return 0;
}