//
// Created by strik on 2023-05-22.
//

#ifndef REFRISYSTEM_INPUT_H
#define REFRISYSTEM_INPUT_H

#include <string>
#include <vector>
using namespace std;

string Input(string question, string example = "");
int InputInteger(int minimum, int maximum, string question, string example = "");
int SingleChoiceWithNumber(vector<string> choices);
void PressEnterToContinue();
vector<string> MultipleChoice(vector<string> choices, string question, string example = "");

#endif //REFRISYSTEM_INPUT_H
