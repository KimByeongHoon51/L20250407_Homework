#include <iostream>
#include <random>

using namespace std;

int main()
{
	// 1~52수가 든 배열 생성
	int arr[52];
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 52; ++i)
	{
		arr[i] = i+1;
	}

	int tmp;
	int indx1;
	int indx2;

	for (int i = 0; i < 100; ++i) // 100번 섞기
	{
		indx1 = rand() % 52;
		indx2 = rand() % 52;
		tmp = arr[indx1];
		arr[indx1] = arr[indx2];
		arr[indx2] = tmp;
	}

	for (int i = 0; i < 52; ++i)
	{
		cout << arr[i] << endl;
	}

	return 0;
}