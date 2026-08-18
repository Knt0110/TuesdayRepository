#include <iostream>
#include <format>
#include "function.h"

using namespace std;

int main(void)
{
	//変数宣言＆初期化
	int hp{ 100 };

	//初期値の表示
	cout << format("PlayerHP : {}", hp) << endl;
	cout << "\n";

	//Damage関数＆表示
	Damage(&hp);
	cout << format("{}ダメージを受けた....",HIT_DAMAGE) << endl;
	cout << format("PlayerHP : {}", hp) << endl;

	cout << "\n";

	//Heal関数＆表示
	Heal(&hp);
	cout << format("{}回復した！", HEAL_POINT) << endl;
	cout << format("PlayerHP : {}", hp) << endl;

	return 0;
}