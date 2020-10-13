#include "pop_first_word.h"

std::string removeExtraWhitespaces(std::string input)
{
	std::string output = "";
	size_t inputIndex = 0;
	size_t outputIndex = 0;
	while(inputIndex != input.length())
	{
		output += input[inputIndex];

		if(input[inputIndex] == ' ')
		{
			while(input[inputIndex + 1] == ' ')
			{
				inputIndex++;
			}
		}
		inputIndex++;
	}

	return output;
}

std::string popFirstWord(std::string& s)
{
	s = removeExtraWhitespaces(s);
	size_t spacePos = s.find(" ");
	std::string firstWord = s.substr(0, spacePos);
	if (spacePos != std::string::npos)
		s = s.substr(spacePos + 1);
	else s = "";
	return firstWord;
}

