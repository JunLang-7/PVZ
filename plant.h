#pragma once

#include <easyx.h>
#include "position.h"
#include "rect.h"

class Plant
{

private:
	
	IMAGE* m_image;			// ֲ���ͼƬ
	Position m_position;	// ֲ���λ��
	
	Plant() = default;

public:
	int hp;					// ֲ�������ֵ
	int power;				// ֲ��Ĺ�����

	// ����ֲ�����
	Plant* Create();

	// ֲ���ʼ��
	bool Init();

	// ֲ�����
	void DrawTick();

	// ֲ���¼�����
	void EventTick(float delta);

	// �ж�ֲ���Ƿ�����
	bool isDead(int hp) { return hp == 0; }

	// ����ֲ��λ��
	void SetPosition(const Position& pos) { m_position = pos; }
	
	// ����ֲ��λ��
	Position GetPosition()const { return m_position; }

	// ��ȡ��ײλ��
	Rect GetBoundingBox();
};

