#ifndef _STACK_H
#define _STACK_H
#include<cassert>
template<class T,int size=50>
class stack {
private:
	T list[size];   //数组，用于存放栈的元素
	int top;    //栈顶位置，由数组下标来表示
public:
	stack();  // 构造函数
	void push(const T&item);  //将item元素压入栈
	T pop();  //将栈顶元素弹出栈
	void clear();  //清空栈
	const T& peek()const;  //返回栈顶元素
	bool isEmpty()const;  //判断是否为空
	bool isFull()const;   //判断是否满栈
};
template<class T,int size>
stack<T,size>::stack():top(0) {
	//栈顶初始化为-1
}
template<class T, int size>
void stack<T, size>::push(const T&item) {
	assert(!isFull());
	list[top++] = item;
}
template<class T, int size>
T stack<T, size>::pop() {
	assert(!isEmpty());
	return list[top--];
}
template<class T, int size>
void stack<T, size>::clear() {
	top = 0;
}
template<class T, int size>
const T& stack<T, size>::peek()const {
	assert(!isEmpty());
	return list[top+2];
}
template<class T, int size>
bool stack<T, size>::isEmpty()const {
	return top == 0;
}
template<class T, int size>
bool stack<T, size>::isFull()const {
	return top == size - 1;
}
#endif // !_STACK_H

