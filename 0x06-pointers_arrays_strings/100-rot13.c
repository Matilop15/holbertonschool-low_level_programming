#include "main.h"
/**
  *rot13 - change 13 places in text
  *@rot: string of text for change
  *Return: return text whit change 13 places
  */
char *rot13(char *rot)
{
	int lect, comp;
	char norm[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWQYZ";
	char rot13[] = "nopqrstuvwqyzabcdefghijklmNOPQRSTUVWQYZABCDEFGHIJKLM";

	for (lect = 0; rot[lect] != 0; lect++)
	{
		for (comp = 0; norm[comp] != 0; comp++)
		{
			if (norm[comp] == rot[lect])
			{
				rot[lect] = rot13[comp];
				break;
			}
		}
	}
	return (rot);
}
