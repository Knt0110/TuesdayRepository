#include <iostream>
#include "20260707_Header1_津留健翔.h"
using namespace std;

int main(void)
{
	//配列
	int ary[INDEX] = {};
	//配列に追加
	cout << "１０個の数値を入力する。\n";
	//入力する関数を呼び出す
	AddArray(ary, INDEX);
	//偶数と奇数でふり分ける
	cout << "偶数:" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (ary[i] % 2 == 0)
		{
			cout << ary[i] << "\n";
		}
	}
	cout << "奇数:" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (ary[i] % 2 != 0)
		{
			cout << ary[i] << "\n";
		}
	}

	return 0;
}