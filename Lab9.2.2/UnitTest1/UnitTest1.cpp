#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.2.2/Lab9.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(12, gcd_multi(24, 36, 60, -1));
		}
	};
}
