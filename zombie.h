#pragma once
#include <easyx.h>
#include "position.h"
#include "rect.h"

class Zombie
{
private:
	IMAGE* m_image;			// ��ʬ��ͼƬ
	Position m_position;	// ��ʬ��λ��
	bool m_isMoveState;		// ��ʬ�ƶ�״̬
	bool m_isAttrackState;	// ��ʬ����״̬
	Zombie() = default;
	~Zombie();

public:
	int hp;					// ��ʬ������ֵ
	int power;				// ��ʬ�Ĺ�����

	// ������ʬ����
	Zombie* Create();

	// ��ʬ��ʼ��
	bool Init();

	// ��ʬ����
	void DrawTick();

	// ��ʬ�¼�����
	void EventTick(float delta);

	// ���ý�ʬ�Ƿ��ƶ�
	void SetMoveState(bool state) { m_isMoveState = state; }

	// ���ý�ʬ�Ƿ񹥻�
	void SetAttrackState(bool state) { m_isAttrackState = state; }

	// �жϽ�ʬ�Ƿ�����
	bool isDead(int hp) { return hp == 0; }

	// ���ý�ʬλ��
	void SetPosition(const Position& pos) { m_position = pos; }

	// ���ؽ�ʬλ��
	Position GetPosition()const { return m_position; }

	// ��ȡ��ײλ��
	Rect GetBoundingBox();
};

