#include "pch.h"
#include "CppUnitTest.h"
#include <cassert>
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double expected = 0.0;
			int N = 6;
			for (int i = N; i <= 20; i++) {
				expected += (cos(i) + sin(i)) / (1 + cos(i) * sin(i));
			}
			Assert::AreEqual(expected, S1(6, 6), 0.0001);
			Assert::AreEqual(expected, S2(6, 20), 0.0001);
			Assert::AreEqual(expected, S3(6, 6, 0.0), 0.0001);
			Assert::AreEqual(expected, S4(6, 20, 0.0), 0.0001);
		}
	};
}
