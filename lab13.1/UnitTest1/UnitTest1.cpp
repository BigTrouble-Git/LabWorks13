#include "pch.h"
#include "CppUnitTest.h"
#include "../dod.cpp"
#include "../sum.cpp"
#include "../var.cpp"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			sum();
			Assert::AreEqual(n, 1);
		}
	};
}
