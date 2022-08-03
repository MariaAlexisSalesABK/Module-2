#pragma once
#include <windows.h>
#include <iostream>

#include "PowerUp.h"

PowerUp::PowerUp(int x, int y, ActorColor color, PowerType type)
	: PlacableActor(x, y, color)
	, m_currentType(type) {

}
void PowerUp::Draw() {
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, (int)m_color);

	std::cout << "p";
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}