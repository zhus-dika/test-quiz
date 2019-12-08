#pragma once
#include <iostream>
#include <string>
#include <vector>
const int NUMBER_ANSWERS = 4;
class Answer
{
public:
	std::vector<std::string> _content;
	char _correct;
	Answer() { 
		std::vector<std::string> content(NUMBER_ANSWERS); 
		_content = content;
		_correct = 'a';
	}
	Answer(std::vector<std::string> &content, char correct);
	friend std::ostream& operator<<(std::ostream& os, const Answer& ans);
};

