#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2_rec/6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestProcessArray)
        {
            const int n = 5;
            int r[n] = { 20, 45, 33, 16, 89 };
            int expected_sum = 167;
            int expected_count = 3;
            int count_element = 0;
            int sum = 0;

            sumArray(r, n, 0, count_element, sum);

            Assert::AreEqual(expected_sum, sum);
            Assert::AreEqual(expected_count, count_element);
        }

    };
}