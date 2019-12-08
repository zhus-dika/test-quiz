#include "Answer.h"
#include <iostream>
Answer::Answer(std::vector<std::string> &content, char correct):_correct(correct), _content(content){}

std::ostream& operator<<(std::ostream& os, const Answer& ans) {
	char ch = 'a';
	for (int i = 0; i < ans._content.size(); i++, ch++)
		os << static_cast<char>(ch) << ") " << ans._content[i] << std::endl;
	return os;
}
