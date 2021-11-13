#pragma once
#include <assert.h>

template <typename T>
class ArrayStack
{
	int m_top;
	T* m_stack;
	int m_max;
public:
	ArrayStack(T max = 100) : m_top(0), m_max(max)
	{
		m_stack = new T[max];
		assert(m_stack != nullptr); // m_stack이 메모리 할당이 정상이면 OK
	}
	ArrayStack()
	{
		if (m_stack)
			delete m_stack;
	}
	void push(T item) { isFull() ? -1 : m_stack[m_top++] = item; }
	T pop() { return isEmpty() ? -9999 : m_stack[--m_top]; }
	T getTop() { return isEmpty() ? -9999 : m_stack[m_top - 1]; }
	bool isEmpty() { return m_top == 0; }
	bool isFull() { return m_top == m_max; }
	T getSize() { return m_top; }
};

