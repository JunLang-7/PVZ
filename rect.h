#pragma once
// 碰撞类 用于僵尸和植物碰撞后的事件
class Rect
{
public:
	Rect(float _x=0.0f, float _y=0.0f, float _w=0.0f, float _h=0.0f): x(_x), y(_y), w(_w), h(_h){}

	// 判断植物与僵尸是否叠加
	bool isOverlay(const Rect& rect);

	float x, y, w, h;
};

