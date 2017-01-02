#include <string>

std::string reverseString(std::string input)
{
	std::string output = "";
	
	//start from last character in input and add this to output
	for (int i = input.length() - 1; i >= 0; i--)
	{
		output += (input[i]);
	}

	return output;
}