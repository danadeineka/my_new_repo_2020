#include <stdio.h>

int main(void)
{
	int k = 0;
	char mas[20];
	char c;

	do
	{
		c = getchar();
		if (c != ' ')
		{
			mas[k] = c;
			k++;
		}
	}

	while (c != '\n');
	mas[k] = '\0';
	printf("%s\n", mas);
}