//#include <iostream>
//#include <random>
//
//// 한 주머니에 번호가 적힌 52개의 공이 있다.
//// 이 공을 겹치지 않게 뽑는 프로그램을 만들어라.
//// rand() 함수를 사용해야 한다.
//
//using namespace std;
//
//int main()
//{
//	// 1~52수가 든 배열 생성
//	int arr[52] = { 0, };
//	srand((unsigned int)time(NULL));
//
//	for (int i = 0; i < 52; ++i)
//	{
//		arr[i] = i+1;
//	}
//
//	int tmp;
//	int indx1;
//	int indx2;
//
//	for (int i = 0; i < 100; ++i) // 100번 섞기
//	{
//		indx1 = rand() % 52;
//		indx2 = rand() % 52;
//		tmp = arr[indx1];
//		arr[indx1] = arr[indx2];
//		arr[indx2] = tmp;
//	}
//
//	for (int i = 0; i < 52; ++i)
//	{
//		cout << arr[i] << endl;
//	}
//
//	return 0;
//}

#include <iostream>
#include <algorithm>
#define POCKET_SIZE		52

using namespace std;

int Pocket[POCKET_SIZE] = { 0, };

void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < POCKET_SIZE; Index++)
	{
		Pocket[Index] = Index + 1;
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < 100; Count++)
	{
		int First = rand() % POCKET_SIZE;
		int Second = rand() % POCKET_SIZE;
		Temp = Pocket[First];
		Pocket[First] = Pocket[Second];
		Pocket[Second] = Temp;
	}
}

void Print()
{
	for (int Index = 0; Index < POCKET_SIZE; Index++)
	{
		cout << Pocket[Index] << ", ";
	}
}

int main()
{
	Initialize();
	Shuffle();
	Print();

	return 0;
}