#pragma once
// 通过不同种卡牌种类，来产生不同子类的植物
class Card
{
public:
	int sunshineNeed;	// 所需阳光值
	int time;			// 卡牌冷却时间
	int type;			// 卡牌种类

	// 判断卡牌是否合理放置
	bool isVaild();
};

