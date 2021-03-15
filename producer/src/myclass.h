#pragma once

class MyClass {
public:
	MyClass();
	MyClass(int value);
	~MyClass();

	void value(int value);
	int value() const;

private:
	int _value;
};
