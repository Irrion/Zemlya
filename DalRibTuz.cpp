#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	
	int a[50][50];
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			a[i][j] = 0;
		}
	}
	
	
	int l = rand() % 50;
	int r = rand() % 50;
	a[l][r] = 1;
	for (int x = 0; x < 10; x++)
	{
		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				if (a[i][j] == 1)
				{
					int p = rand() % 3 - 1;
					int s = rand() % 3 - 1;
					a[i + p][j + s] = 1;
				}
				
			}
		}
	}
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (a[i][j] == 0)
			{
				cout << " ";
			}
			else if (a[i][j] == 1)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
	
}