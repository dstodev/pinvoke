#include "myclass.h"

MyClass::MyClass() : _value()
{
}

MyClass::MyClass(int value) : _value(value)
{
}

MyClass::~MyClass() = default;

void MyClass::value(int value)
{
	_value = value;
}

int MyClass::value() const
{
	return _value;
}
