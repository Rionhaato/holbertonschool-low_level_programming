#include "main.h"

/**
	* cap_string - capitalizes all words of a string
	* @str: the input string
	*
	* Return: pointer to the modified string
	*/
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (str[index] && !(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (!str[index])
			break;

		if (index == 0 ||
			str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}')
		{
			str[index] -= 32;
		}

		index++;
	}

	return (str);
}
