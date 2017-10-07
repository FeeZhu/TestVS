// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;


//定义一个抽象container
class Container
{
public:
	virtual double & operator[](int) = 0;
	virtual int size() const = 0;
	virtual ~Container() {};
};

//定义一个具体的对象
class Vector{
	//TODO:定义具体的函数实现
};

class Vector_contaier :public Container {
	Vector v;
public:
	Vector_contaier(int s) :v(s) {}
	~Vector_contaier() {}

	double &operator[](int i) { return v[i];}
	int size() const { return v.size(); }
};

void use(Container &c)
{
	const int sz = c.size();
	for (int i = 0; i != sz; i++)
	{
		cout << c[i] << endl;
	}
}

void main{
	Vector_contaier vc{10,3,4,5,7,89,7};
    use(vc);
	//定义一个智能指针
	unique_ptr<int> u_i;
}