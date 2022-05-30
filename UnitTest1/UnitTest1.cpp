#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\4.2 oop\4.2 oop\Complex.cpp"
#include "C:\Users\Misha\source\repos\4.2 oop\4.2 oop\Sum.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex c(2, 4, 6, 8);
			double t = c.sum();
			Assert::AreEqual(t, 6.);
		}
	};
}
