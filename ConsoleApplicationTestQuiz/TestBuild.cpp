#include "TestBuild.h"
int TestBuild::countTest = TEST_INIT;
TestBuild::TestBuild(std::vector<Question>& qs) :_qs(qs) {
	_id = countTest++;
	std::random_shuffle(_qs.begin(), _qs.end());
	int count = 1;
	std::vector<Question> temp;
	for (std::vector<Question>::iterator it = _qs.begin(); it != _qs.end(); ++it, count++) {
		temp.push_back(*it);
		if (count % NUMBER_QUESTIONS_PER_VERSION == 0) {
			_tvs.push_back(TestVersion(temp));
			temp.erase(temp.begin(), temp.end());
		}
	}
}
