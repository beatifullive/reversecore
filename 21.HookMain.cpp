#include "windows.h"
#include "iostream"

using namespace std;

int main()
{
	char moduleFileName[MAX_PATH];
	GetModuleFileNameA(NULL, moduleFileName, MAX_PATH);
	char *p = NULL;
	p = strrchr(moduleFileName, '\\');
	
	cout << (p+1) << endl;
	getchar();
	return 0;
}
