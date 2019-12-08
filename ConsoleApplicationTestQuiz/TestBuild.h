#pragma once
#include <vector>
#include <algorithm>
#include "Answer.h"
#include "Question.h"
#include "TestVersion.h"
const int NUMBER_QUESTIONS_PER_VERSION = 5;
const int TEST_INIT = 1;
class TestBuild
{
public:
	int _id;
	static int countTest;
	std::vector<Question> _qs;
	std::vector<TestVersion> _tvs;
	TestBuild(std::vector<Question>& qs);
};

