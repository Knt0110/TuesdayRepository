#pragma once
//ƒOƒ[ƒoƒ‹ŠÖ”éŒ¾
void Game();

void ShuffleNum(int min, int max,int has,int hand[]);

int InputCheck(int min, int max);

//’è”
namespace Sys
{
	const int CARD_MAX{ 9 };
	const int CARD_MIN{ 0 };
	const int HAS_CARD{ 3 };
}