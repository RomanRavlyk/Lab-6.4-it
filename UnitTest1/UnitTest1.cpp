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
            int a[5] = { 8, 2, -9, 10, 4 };
            int S = 0;
            int c = sumOfArrayElements(a, 5, S);
            Assert::AreEqual(c, 3);
        }

        TEST_METHOD(TestMethod4)
        {
            int a[5] = { 8, 2, -9, 10, 4 };
            int P = 1;
            int c = multPairElements(a, 5);
            Assert::AreEqual(c, -288);
        }
    };
}