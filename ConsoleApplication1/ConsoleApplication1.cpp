// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Node
{
	int data;
	struct Node* next;
};

void printReverse(struct Node* head)
{

	if (head == NULL)
		return;


	printReverse(head->next);

	printf("%d  ", head->data);
}

void push(struct Node** head_ref, char new_data)
{

	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));

	new_node->data = new_data;


	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

class Point
{
public:
	Point(int xx=0,int yy=0):x(xx),y(yy) {};
	~Point() {};
	void showxy() { cout << x << y << endl; }
	void show() const { cout << x << y << endl; }//定义一个常成员函数
private:
	int x;
	int y; 
};

int main()
{
	//对象指针数组,数组元素是指向相同类的对象的指针
	//指向对象数组的指针，指向一维对象数组
	Point a[3] = { Point(0,0),Point(1,1),Point(2,2) };
	Point(*p)[3] = &a;
	for (int i = 0; i < 3; ++i)
		(*p)[i].showxy();
	//或者可以指向二维数组的一维对象b【0】
	const Point p1(0, 0);//定义一个常对象
	//定义一个指向对象的常指针,指针不能变但是所指向的对象是可以变,初始化之后不能改变
	Point *const cptr = &a[0];
	//定义一个指向常对象的指针，表示这个指针指向的是一个常对象，指正的指向是可以变化的
	const Point *pcp = &p1;
	//对象的常引用，避免
	//常引用只能调用常成员函数
	//常引用作为形参时，实参可以是一般对象、
	struct Node* head = NULL;
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	printReverse(head);
	return 0;
}