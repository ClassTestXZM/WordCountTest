#include "pch.h"
#include "CppUnitTest.h"
#include "../WordCount/Function.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(WordCountTest)
		{
			// �˴���Ԫ����ֻ��һ��������������
			char* teststr = "F://test.c";
			int num = WordCount(teststr);
			// 11 Ϊ��֪����ȷ���
			Assert::AreEqual(11, num);
		}
		TEST_METHOD(CodeCountTest) {
			// �˴���Ԫ����ֻ��һ��������������
			char* teststr = "F://test.c";
			int num = CodeCount(teststr);
			Assert::AreEqual(66, num);
		}
	};
}
