#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];
	return str;
}
int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy_s(str, 20, "I am so happy~");
	cout << str << endl;
	delete[] str;
	return 0;
}