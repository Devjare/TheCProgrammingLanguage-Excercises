#include <stdio.h>
#include <ctype.h>

int hexToInt(char hex[], int len);
void chapter2_third(void);
int isHexChar(char c);
int hasHexPrefix(char hex[], int len);
int power(int value, int n);

void chapter2_third(void)
{
	char hexStr[1000];
	int len = getline(hexStr, 1000);
	int ivalue = hexToInt(hexStr, len);
	printf("As Integer: %c\n", ivalue);
	printf("\n%s = %d\n", hexStr, htoi(hexStr, len));
}

int htoi(char hex[], int len)
{
	int n = 0;
	// hexvalue * (16 ^ i)
	int trueLength = len - 2;
	for(int i = trueLength, j = 0;i >= 0;i--, j++)
	{
		int hexValue;
		if(hexValue = isHexChar(hex[i]))
		{
			n += hexValue * (power(16, j));
		}
		if(isdigit(hex[i]))
			n += (hex[i] - '0') * (power(16, j));
	}
	return n;
}

int power(int value, int n)
{
	if(n == 0) return 1;
	int x = 1;
	for(int i = 0;i < n;i++)
		x *= value;

	return x;
}

int hexToInt(char hex[], int len)
{
	int n = 0;
	int i = 0;
	if(hasHexPrefix(hex, len)) i = 2;
	for(;i < len - 1;i++)
	{
		int hexvalue;
		if(hexvalue = isHexChar(hex[i]))
		{
			// n += hexvalue;
			printf("%c as integer: %d\n", hex[i], hexvalue);
		}
		else if(isdigit(hex[i]))
		{
			// n += hex[i] - '0';
			printf("%c as integer: %d\n", hex[i], (hex[i] - '0'));
		}
	}
	return n;
}

int isHexChar(char s)
{
	if(s >= 'A' && s <= 'F') return s - 55;
	else if(s >= 'a' && s <= 'f') return s - 87;
	return 0;
}

int hasHexPrefix(char hex[], int len)
{
	if(len < 3) return 0;
	return (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X'));
}
