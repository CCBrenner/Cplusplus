#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

#include "../Cplusplus/MyClass.h"

namespace TestCplusplus
{
	TEST_CLASS(TestCplusplus)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			MyClass myClass;
			string actualString = myClass.myFunction();
			string expectedStr = "This is a PRIVATE return statement.";
			Assert::AreEqual(expectedStr, actualString);  // passes
		}
	};
}
