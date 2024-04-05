#include "pch.h"
#include "../ConsoleApplication4/ConsoleApplication4.cpp"

TEST(SipleTests, factorial){
	ASSERT_EQ(120, factorial(5));
}