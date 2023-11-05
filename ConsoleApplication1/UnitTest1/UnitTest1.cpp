#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
                    
           double x = 2.0;
           double expected = (1 - pow(sin(x), 2)) / pow(exp(1), x);

                     
           double actual = r(x);

        
           Assert::AreEqual(expected, actual, 0.001);
		}
	};
}
