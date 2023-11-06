#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.4 it/lab 6.4 it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod3)
        {
            int a[10] = { -8, 2, -10, 2, -6, -1, 3, 3, -5, -9 };
            int S = 0;
            int c = sumOfArrayElements(a, 10, S);
            Assert::AreEqual(c, -12);
        }

        TEST_METHOD(TestMethod4)
        {
            int a[10] = { -8, 2, -10, 2, -6, -1, 3, 3, -5, -9 };
            int P = 1;
            int c = multPairElements(a, 10, P);
            Assert::AreEqual(c, -900);
        }
    };
}