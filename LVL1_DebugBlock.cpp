/*
  Author: Mysterious
  Title: LVL CrackMe Debugger block
  
  Try to find the key

*/
#include <stdio.h>
#include <iostream>
#include <Windows.h>

int main(void)
{

	char  myvariable [] = "Hello";

	char  input[10];// = "";

	std::cout << "enter key:";
	std::cin >> input;


	if (IsDebuggerPresent())
	{
		std::cout << "\n debugger present!" << std::endl;
	}
	else
	{
		if (strcmp(myvariable, input) == 0)
		{

			std::cout << "\n Key matches!" << std::endl;
		}
		else
		{
			std::cout << "\n Fail!" << std::endl;
			main();
		}
	}


	


	return 0;
}
