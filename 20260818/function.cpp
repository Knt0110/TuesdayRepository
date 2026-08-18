#include <iostream>
#include "function.h"

void Damage(int* hp)
{
	(*hp) -= HIT_DAMAGE;
}

void Heal(int* hp)
{
	(*hp) += HEAL_POINT;
}