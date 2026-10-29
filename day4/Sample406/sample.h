#ifndef _SAMPLE_H_
#define _SAMPLE_H_
class Sample {
public:
	//インスタンスメンバ関数
	void func1();
	//静的メンバ関数
	static void func2();
private:
	//インスタンスメンバ変数
	int m_a;
	//静的メンバ変数
	static int s_b;
};

#endif //_SAMPLE_H_