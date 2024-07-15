#include "Scene.h"
#include <iostream>

Scene* Scene::Create()
{
	return nullptr;
}

bool Scene::Init()
{
}

void Scene::DrawTick()
{
	static int i = 0;
	std::cout << "draw " << i++ << std::endl;
}

void Scene::EventTick(float delta)
{
	// ´´½¨½©Ê¬

	// Ö²ÎïºÍ½©Ê¬Åö×²ÅÐ¶Ï
}