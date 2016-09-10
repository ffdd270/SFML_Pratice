#include "FindResouce.h"


FindResouce::FindResouce()
{
	handle = 0;
	result = -1;
	findnum = 0;
}
FindResouce::~FindResouce()
{

}
void FindResouce::FindNext()
{
	result = _findnext(handle, &fd);
}

void FindResouce::FindFirst()
{
	handle = _findfirst(findtarget.c_str(),&fd);
}

void FindResouce::Init()
{
	handle = 0;
	result = 0;
	findnum = 0;
	
	findresult.clear();
}

vector<string> FindResouce::Find(string str)
{
	findtarget = str;
	Init();
	FindFirst();

	if (handle == -1)
	{
		printf("Nothing, load file");
	}

	while (result != -1)
	{
		findresult.push_back(fd.name);
		FindNext();
	}

	return findresult;
}