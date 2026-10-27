#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2/pr6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testPR62
{
	TEST_CLASS(testPR62)
	{
	public:
		
        TEST_METHOD(Test1)
        {
            int a[] = { 1, 2, 3, 4, 5, 6 };
            int expected[] = { 2, 1, 4, 3, 6, 5 };

            SwapIterative(a, 6);

            for (int i = 0; i < 6; i++)
            {
                Assert::AreEqual(expected[i], a[i]);
            }
        }

        
	};
}
