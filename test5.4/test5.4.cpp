#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4/lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test54
{
	TEST_CLASS(test54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = S1(1, 16);
			Assert::AreEqual(t, 0.);
		}
	};
}
