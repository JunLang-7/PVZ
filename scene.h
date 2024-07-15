#pragma once
#include <easyx.h>
#include "plant.h"
#include "zombie.h"

class Scene
{
public:
	static Scene* Create();
	// 场景初始化
	bool Init();
	
	// 场景绘制：重复绘制
	void DrawTick();

	// 场景数据更新：重复事件处理
	void EventTick(float delta);

private:
	// 背景图
	IMAGE* m_backgroundImg;

	// 背景图与坑位
	Plant* m_plant;
	Plant* m_plantTable[10][10];

	Zombie* m_zombie;

	// 僵尸产生数量累加器
	int m_zombieCreateCount;
};

