#pragma once
#include <string>
//キャラクタクラス
class Character
{
private:
	std::string m_name;
	int m_hp;
	int m_mp;
	int m_atk;
	float m_atackSpeed;
public:
	Character() = default;//デフォルトコンストラクタ
	~Character() = default;//デフォルトデストラクタ

	//データをセットする関数
	void setData(const std::string& name, int hp, int mp, int atk, float atackSpeed)
	{
		m_name = name;
		m_hp = hp;
		m_mp = mp;
		m_atk = atk;
		m_atackSpeed = atackSpeed;
	}

	//ゲッター.
	std::string getName() const { return m_name; }
	int getHp() const { return m_hp; }
	int getMp() const { return m_mp; }
	int getAtk() const { return m_atk; }
	float getAtackSpeed() const { return m_atackSpeed; }
};
