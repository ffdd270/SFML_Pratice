#ifndef __FINDRESOUCE_H__
#define __FINDRESOUCE_H__

#include <io.h>
#include <string>
#include <vector>

using namespace std;

class FindResouce
{
private:
	_finddata_t fd;
	int handle;
	int result;
	int findnum;

	string findtarget;
	vector<string> findresult;

	void FindFirst();
	void FindNext();
	void Init();
public:
	FindResouce();
	~FindResouce();
	vector<string> Find(std::string str);
};

#endif