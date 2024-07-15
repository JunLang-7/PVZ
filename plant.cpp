#include "plant.h"
#include <iostream>

Plant* Plant::Create()
{
	Plant* NewPlant = new Plant;
	if (NewPlant && NewPlant->Init()) {
		return NewPlant;
	}
	else {
		delete NewPlant;
		std::cout << "´´½¨Ê§°Ü" << std::endl;
		return nullptr;
	}
}

bool Plant::Init()
{

}

void Plant::DrawTick()
{
}

void Plant::EventTick(float delta)
{
}

Rect Plant::GetBoundingBox()
{
	return Rect();
}
