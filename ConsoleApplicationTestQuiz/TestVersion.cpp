#include "TestVersion.h"
int TestVersion::countVersion = VERSION_INIT;
void TestVersion::passTest() {
	std::cout << "\n****** T E S T " << _id << " ******";
	_scores = 0;
	char correct;
	int i = 1;
	for (std::vector<Question>::iterator it = _qs.begin(); it != _qs.end(); ++it, i++) {
		it->_localId = i;
		std::cout << *it << std::endl;
		std::cout << "Your answer: ";
		std::cin >> correct;
		if (it->_answer._correct == correct)
			_scores++;
	}
	std::cout << "\nTotal correct answers is " << _scores << std::endl;
}

