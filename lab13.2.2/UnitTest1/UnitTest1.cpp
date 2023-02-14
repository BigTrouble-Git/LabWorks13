#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab13.2.2\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int arr[n] = {5,4,12,6,8,0,5,4,3,2} ;

			QuickSort(arr, 0, n - 1);
			Assert::AreEqual(arr[2], 3);
		}
	};
}
