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
	// ������ʬ

	// ֲ��ͽ�ʬ��ײ�ж�
}