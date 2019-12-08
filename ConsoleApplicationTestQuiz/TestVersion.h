#pragma once
#include <vector>
#include "Answer.h"
#include "Question.h"
const int VERSION_INIT = 1;

class TestVersion
{
public:
	int _id;
	std::vector<Question> _qs;
	int _scores;
	static int countVersion;
	TestVersion(std::vector<Question> &qs) :_qs(qs) {
		_scores = 0;
		_id = countVersion++;
	}
	void passTest();
};
