#include "zombie.h"

Zombie::~Zombie()
{
}

Zombie* Zombie::Create()
{
    return nullptr;
}

bool Zombie::Init()
{
    return false;
}

void Zombie::DrawTick()
{
}

void Zombie::EventTick(float delta)
{
}

Rect Zombie::GetBoundingBox()
{
    return Rect();
}
