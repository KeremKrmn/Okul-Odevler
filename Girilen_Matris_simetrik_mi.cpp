#include <iostream>

using namespace std;

int main()
{
	int a[3][3];

	cout << "3'e 3'luk Matrisin Elemanlarini Giriniz \n" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << i + 1 << ". Satir " << j + 1 << ". Sutun Elemanini Giriniz = ";
			cin >> a[i][j];

		}
		cout << endl;
	}

	cout << endl;

	for (int k = 0; k < 3; k++)
	{
		for (int l = 0; l < 3; l++)
		{
			cout << a[k][l] << "\t";
		}

		cout << endl;
	}

	cout << endl;

	if (a[0][1] == a[1][0] && a[0][2] == a[2][0] && a[1][2] == a[2][1])
		cout << "Simetridir" << endl;

	else
	{
		cout << "Simetri Degildir" << endl;
	}

	return 0;
}