#include "pch.h"
#include "CppUnitTest.h"
#include "../RightAngled.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			RightAngled::Pair a(5, 6);

			Assert::AreEqual(30.0, a.Product());
		}
	};
}