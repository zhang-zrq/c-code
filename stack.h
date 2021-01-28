#ifndef _STACK_H
#define _STACK_H
#include<cassert>
template<class T,int size=50>
class stack {
private:
	T list[size];   //���飬���ڴ��ջ��Ԫ��
	int top;    //ջ��λ�ã��������±�����ʾ
public:
	stack();  // ���캯��
	void push(const T&item);  //��itemԪ��ѹ��ջ
	T pop();  //��ջ��Ԫ�ص���ջ
	void clear();  //���ջ
	const T& peek()const;  //����ջ��Ԫ��
	bool isEmpty()const;  //�ж��Ƿ�Ϊ��
	bool isFull()const;   //�ж��Ƿ���ջ
};
template<class T,int size>
stack<T,size>::stack():top(0) {
	//ջ����ʼ��Ϊ-1
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

