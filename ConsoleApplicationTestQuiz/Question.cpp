#include "Question.h"
int Question::countQuestion = ID_INIT;

std::ostream& operator<<(std::ostream& os, const Question& qt) {
	os << "\n====== Question #" << qt._localId << " ======\n";
	os << qt._text << std::endl;
	os << qt._answer << std::endl;
	return os;
}

