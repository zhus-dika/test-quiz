#pragma once
#include <string>
#include "Answer.h"

const int ID_INIT = 1;

class Question
{
public:
	int _id;
	int _localId;
	std::string _text;
	Answer _answer;
	static int countQuestion;
	Question() { _id = countQuestion++; }
	Question(int localId, std::string text, Answer answer) : _localId(localId), _text(text), _answer(answer) {
		_id = countQuestion++;
	}
	friend std::ostream& operator<<(std::ostream& os, const Question& qt);
};
