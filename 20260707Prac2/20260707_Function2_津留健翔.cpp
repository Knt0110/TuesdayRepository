#include <iostream>
#include <ctime>
#include <cstdlib>
#include "20260707_Header2_津留健翔.h"
using namespace std;

void Game()
{
	//変数宣言
	int myNum[Sys::HAS_CARD] = {};
	int cpuNum[Sys::HAS_CARD] = {};

	int playerSelect[Sys::HAS_CARD] = {};
	//乱数初期化
	srand((unsigned int)time(NULL));

	//プレイヤーとCPUの手札
	ShuffleNum(Sys::CARD_MIN, Sys::CARD_MAX, Sys::HAS_CARD, myNum);
	ShuffleNum(Sys::CARD_MIN, Sys::CARD_MAX, Sys::HAS_CARD, cpuNum);

	//プレイヤー手札表示
	cout << "Playerの手札: ";
	for (int i = 0; i < Sys::HAS_CARD; i++) 
	{
		cout << myNum[i] << " ";
	}
	cout << endl;

	//入力
	cout << "CPUの数字の予測を入力してください\n";
	for (int i = 0; i < Sys::HAS_CARD; i++)
	{
		cout << i + 1 << ": ";
		playerSelect[i] = InputCheck(Sys::CARD_MIN, Sys::CARD_MAX);
	}
}

void ShuffleNum(int min, int max,int has,int hand[])
{	
	int pool[Sys::CARD_MAX + 1] = {};
	int temp;

	for (int i = 0; i < max + 1; i++)
	{
		pool[i] = i;
	}
	
	for (int i = max; i > 0; i--)
	{
		int j = rand() % max;
		temp = pool[i];
		pool[i] = pool[j];
		pool[j] = temp;
	}

	for (int i = 0; i < has; i++)
	{
		hand[i] = pool[i];
	}
}

int InputCheck(int min, int max)
{
	int num;

	//入力
	while (true)
	{
		cout << "→ ";
		cin >> num;
		if (num < min || num > max)
		{
			cout << "範囲外です。再度入力してください。\n";
		}
		else
		{
			break;
		}
	}

	return num;
}