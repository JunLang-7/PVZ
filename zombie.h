#pragma once
#include <easyx.h>
#include "position.h"
#include "rect.h"

class Zombie
{
private:
	IMAGE* m_image;			// 僵尸的图片
	Position m_position;	// 僵尸的位置
	bool m_isMoveState;		// 僵尸移动状态
	bool m_isAttrackState;	// 僵尸攻击状态
	Zombie() = default;
	~Zombie();

public:
	int hp;					// 僵尸的生命值
	int power;				// 僵尸的攻击力

	// 创建僵尸对象
	Zombie* Create();

	// 僵尸初始化
	bool Init();

	// 僵尸绘制
	void DrawTick();

	// 僵尸事件更新
	void EventTick(float delta);

	// 设置僵尸是否移动
	void SetMoveState(bool state) { m_isMoveState = state; }

	// 设置僵尸是否攻击
	void SetAttrackState(bool state) { m_isAttrackState = state; }

	// 判断僵尸是否死亡
	bool isDead(int hp) { return hp == 0; }

	// 设置僵尸位置
	void SetPosition(const Position& pos) { m_position = pos; }

	// 返回僵尸位置
	Position GetPosition()const { return m_position; }

	// 获取碰撞位置
	Rect GetBoundingBox();
};

