#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_9.1.2/lab_9.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91B
{
	TEST_CLASS(UnitTest91B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* p = new Student;
			p->prizv = "A";
			p->curs = II;
			p->specialnist = MATH;
			p->physic = 5;
			p->math = 5;
			p->pedagogy = 5;

			double t = LineSearch(p, 1);

			Assert::AreEqual(t, 100.);
		}
	};
}
