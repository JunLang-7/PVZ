#pragma once

#include <easyx.h>
#include "position.h"
#include "rect.h"

class Plant
{

private:
	
	IMAGE* m_image;			// 植物的图片
	Position m_position;	// 植物的位置
	
	Plant() = default;

public:
	int hp;					// 植物的生命值
	int power;				// 植物的攻击力

	// 创建植物对象
	Plant* Create();

	// 植物初始化
	bool Init();

	// 植物绘制
	void DrawTick();

	// 植物事件更新
	void EventTick(float delta);

	// 判断植物是否死亡
	bool isDead(int hp) { return hp == 0; }

	// 设置植物位置
	void SetPosition(const Position& pos) { m_position = pos; }
	
	// 返回植物位置
	Position GetPosition()const { return m_position; }

	// 获取碰撞位置
	Rect GetBoundingBox();
};

