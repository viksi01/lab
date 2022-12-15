#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_9.1.1/lab_9.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91A
{
	TEST_CLASS(UnitTest91A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* p = new Student;
			p->prizv = "A";
			p->curs = II;
			p->specialnist = KN;
			p->physic = 5;
			p->math = 5;
			p->IT = 5;

			double t = LineSearch(p, 1);

			Assert::AreEqual(t, 100.);

		}
	};
}
