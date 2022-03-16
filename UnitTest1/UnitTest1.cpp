#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.3/Point.h"
#include "../lab 1.3/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Point z;
			z.Init(2.,2.);
			Assert::AreEqual(45., z.Polar());
		}
	};
}
