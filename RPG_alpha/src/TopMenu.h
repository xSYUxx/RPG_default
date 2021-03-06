#pragma once
#include <Siv3D.hpp>

#include "Misc.h"
#include "Escape2D.h"
#include "Animation.h"

class CTopMenu
{
public:
	CTopMenu();
	~CTopMenu();

	CMisc misc;
	CEscape2D ESGame2D;
	CAnimation anime;

	const Model moniter = Model(L"res/obj/monitor.obj");
	const Model shelf = Model(L"res/obj/shelf.obj");
	const Model machin_on = Model(L"res/obj/machin_on.obj");
	const Model machin_off = Model(L"res/obj/machin_off.obj");

	void draw(int& gameTitle, int& mode, bool& power);

	bool power;
	bool changeGame;

	float r = 400.0f;
	Circle circle;
};

