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
            int n = 10;
            int* p = new int[n];
            int newSize = n;
            int min = -11;
            int max = 13;
            int aVal = 1, bVal = 10;
            generateArray(p, n, min, max);
            ModArray(p, newSize, aVal, bVal);
            Assert::AreEqual(0, Sum(p, newSize), 0.0001);
        }
    };
}