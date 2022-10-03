#include "pch.h"
#include "CppUnitTest.h"
#include "../IIKH_win/Date.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace IIKHtest
{
	TEST_CLASS(IIKHtest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date dateA = Date(2022, 10, 1);
			Date dateB = Date(2022, 10, 1);
			int yearA = dateA.getYear();
			int yearB = dateB.getYear();
			Assert::AreEqual(yearA, yearB);
		}
	};
}
