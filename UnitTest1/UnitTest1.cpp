
#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <string>

#define UNIT_TEST
#include "C:/Users/Sasha/Downloads/student/vs/LR8.2/LR8.2/LR8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestEmptyString)
        {
            Assert::AreEqual(0, maxConsecutiveSpaces(""));
        }

        TEST_METHOD(TestNoSpaces)
        {
            Assert::AreEqual(0, maxConsecutiveSpaces("hello"));
        }

        TEST_METHOD(TestOneSpace)
        {
            Assert::AreEqual(1, maxConsecutiveSpaces("a b"));
        }

        TEST_METHOD(TestInsideSpaces)
        {
            Assert::AreEqual(3, maxConsecutiveSpaces("a   b  c"));
        }

        TEST_METHOD(TestLeadingSpaces)
        {
            Assert::AreEqual(3, maxConsecutiveSpaces("   abc"));
        }

        TEST_METHOD(TestTrailingSpaces)
        {
            Assert::AreEqual(4, maxConsecutiveSpaces("abc    "));
        }

        TEST_METHOD(TestAllSpaces)
        {
            Assert::AreEqual(5, maxConsecutiveSpaces("     "));
        }
    };
}
