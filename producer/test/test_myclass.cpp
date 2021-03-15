#include <gtest/gtest.h>

#include <myclass.h>

TEST(MyClass, instance)
{
	MyClass uut;
	(void)uut;
}

TEST(MyClass, value)
{
	MyClass uut;

	ASSERT_EQ(0, uut.value());

	uut.value(10);
	ASSERT_EQ(10, uut.value());
}
