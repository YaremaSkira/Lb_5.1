#include "pch.h"
#include "CppUnitTest.h"
#include "../FuzzyNumber.h"
#include "../FuzzyNumber.cpp"
#include "D:\Project\OOP\LB5\LB_5.1_B\Exception.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51B
{
	TEST_CLASS(UnitTest51B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(3, 4, 6),
				B(1, 2, 7),
				C(0, 0, 0);

			C = A - B;
			Assert::AreEqual(C.GetX(), -4.0);

		}
	};
}
