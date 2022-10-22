#include <iostream>

using namespace std;


void dizileriDegis(int* adr1, int* adr2)
{
	int temp;

	for (int i = 0; i < 5; i++)
	{

		temp = *adr1;
		*adr1 = *adr2;
		*adr2 = temp;

		adr1++, adr2++;

	}

}


int main()
{
	int d1[5] = { 1,2,3,4,5 };
	int d2[5] = { 6,7,8,9,10 };


	cout << "\n" << "1.Dizi" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << d1[i] << " ";
	}

	cout << "\n\n" << "2.Dizi" << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << d2[k] << " ";
	}


	cout << "\n\n\n" << "Dizilerin elemanlarinin degistirilmis hali asagida verilmistir." << endl;


	dizileriDegis(&d1[0], &d2[0]);


	cout << "\n" << "1.Dizi" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << d1[i] << " ";
	}

	cout << "\n\n" << "2.Dizi" << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << d2[k] << " ";
	}

	cout << endl;

	return 0;
}