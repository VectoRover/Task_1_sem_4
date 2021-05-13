#pragma once
#include <string>
#include <iostream>
#include "CComplNumb.h"
#include "CFactoryComplVect.h"
#include <fstream>
using namespace std;

class CComplVect
{
protected:
	int length;
	CComplNumb* ArrComplNumb;
	string out;
public:
	CComplVect();
	CComplVect(int length, CComplNumb* ArrComplNumb);
	virtual ~CComplVect();
	CComplNumb* get_ArrComplNumb();
	int get_length();
	void set_output(string output);
	void set_length(int length);
	void set_ArrComplNumb(CComplNumb* ArrComplNumb);
	virtual void show() = 0;
	virtual void output() = 0;

	static int Input(string filename, CFactoryComplVect** &factory, CComplVect** &w);

	friend class CComplNumb;
};