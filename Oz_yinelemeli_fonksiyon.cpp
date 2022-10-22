//Girilen sayinin rakamlari toplamini veren oz yinelemeli fonkisyon

#include <iostream>

using namespace std;


int ozYineleme(int a)
{

	if (a != 0)
	{
		return a % 10 + ozYineleme(a / 10);
	}
	else {

		return 0;
	}
}


int main()
{
	int gsayi;
	cout << "Sayinizi giriniz: ";
	cin >> gsayi;

	int rakamlartoplam = ozYineleme(gsayi);

	cout <<"\nGirilen sayinin rakamlari toplami: "<< rakamlartoplam;

	return 0;
}