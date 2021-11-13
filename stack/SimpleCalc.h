#pragma once
#include "ArrayStack.h"
#include <assert.h>
class SimpleCalc
{
	char* m_postfix;
	ArrayStack<float> m_floatStack;
};

