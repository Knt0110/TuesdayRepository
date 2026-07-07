#include <iostream>
#include "20260707_Header1_’Ã—¯Œ’ãÄ.h"
using namespace std;

void AddArray(int ary[], int size)
{
	//•Ï”éŒ¾
	int i;
	//10ŒÂ‚Ì”š‚ğ“ü—Í
	for (i = 0; i < size; i++)
	{
		ary[i] = InputCheck(MIN, MAX);
	}
}

int InputCheck(int min, int max)
{
	int num;

	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "“ü—Í‚ÉŒë‚è‚ª‚ ‚è‚Ü‚·B\n";
		}
		else
		{
			break;
		}
	}
	return num;
}