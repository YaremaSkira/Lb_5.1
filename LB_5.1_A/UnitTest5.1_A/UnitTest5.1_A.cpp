#include "pch.h"
#include "CppUnitTest.h"
#include "../Cursor.h"
#include "D:\Project\OOP\LB5\LB_5.1_A\Cursor.cpp"
#include "D:\Project\OOP\LB5\LB_5.1_A\Exception.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51A
{
	TEST_CLASS(UnitTest51A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cursor TEST(2, 2);
			
			Assert::AreEqual(TEST.Check_2(2),true);
		}
	};
}
