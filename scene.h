#pragma once
#include <easyx.h>
#include "plant.h"
#include "zombie.h"

class Scene
{
public:
	static Scene* Create();
	// ������ʼ��
	bool Init();
	
	// �������ƣ��ظ�����
	void DrawTick();

	// �������ݸ��£��ظ��¼�����
	void EventTick(float delta);

private:
	// ����ͼ
	IMAGE* m_backgroundImg;

	// ����ͼ���λ
	Plant* m_plant;
	Plant* m_plantTable[10][10];

	Zombie* m_zombie;

	// ��ʬ���������ۼ���
	int m_zombieCreateCount;
};

