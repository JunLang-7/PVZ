#pragma once
// ��ײ�� ���ڽ�ʬ��ֲ����ײ����¼�
class Rect
{
public:
	Rect(float _x=0.0f, float _y=0.0f, float _w=0.0f, float _h=0.0f): x(_x), y(_y), w(_w), h(_h){}

	// �ж�ֲ���뽩ʬ�Ƿ����
	bool isOverlay(const Rect& rect);

	float x, y, w, h;
};

