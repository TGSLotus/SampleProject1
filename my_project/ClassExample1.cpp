#include "gmock/gmock.h"
#include <iostream>
#include <vector>

using namespace std;
using ::testing::Return;

class Class1 {
public:
	bool TwoStringFunction(string param1, string param2){
		// if (param1.compare(param2) != 0){
		// 	return false;
		// }
		return true;
	}
	int IntParamFunction(int param1){
		param1 = 100;
		return int(100);
	}
	void BoolParamFunction(bool param1, bool param2, bool param3){}
};

class MockClass1 : public Class1 {
	public:
		MOCK_METHOD(bool, TwoStringFunction, (param1, param2));
		MOCK_METHOD(bool, IntParamFunction, (int));
		MOCK_METHOD(bool, BoolParamFunction, (bool, bool, bool));
};