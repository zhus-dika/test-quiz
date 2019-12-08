// ConsoleApplicationTestQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "Question.h"
#include "Answer.h"
#include "TestBuild.h"

using namespace std;
int main()
{
	ifstream if_qs("C:/Users/dinara/source/repos/ConsoleApplicationTestQuiz/ConsoleApplicationTestQuiz/contentQuestions.txt");
	ifstream if_ans("C:/Users/dinara/source/repos/ConsoleApplicationTestQuiz/ConsoleApplicationTestQuiz/contentAnswers.txt");
	vector<string> fqs;
	vector<string> fans;
	if (!if_qs || !if_ans)
		cout << "Error! Can not open file!\n";
	while (if_qs.good()) {
		char str[256];
		if_qs.getline(str,256);
		fqs.push_back(str);
	}
	while (if_ans.good()) {
		char str[256];
		if_ans.getline(str, 256);
		fans.push_back(str);
	}
	vector<Question> qs;
	int size = fqs.size();
	for (int i = 0; i < size; i++){
		Answer answer;
		Question question(0, fqs[i], answer);
		question._text = fqs[i];
		for (int j = 0; j < 4; j++) {
			question._answer._content[j]=fans[j];
		}
		question._answer._correct= fans[4*i][0];
		qs.push_back(question);
	}
	TestBuild testBuild(qs);
	testBuild._tvs[0].passTest();
	testBuild._tvs[1].passTest();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
