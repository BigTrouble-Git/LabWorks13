#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab13.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			int min = MIN(2, 8);
			Assert::AreEqual(min, 2);
		}
	};
}
