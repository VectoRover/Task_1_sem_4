#pragma once
#include <string>
#include <iostream>
#include "CComplNumb.h"
#include "CComplVect.h"
#include "autotests.h"
using namespace std;

class CComplVectHori : public CComplVect
{
public:
	CComplVectHori();
    CComplVectHori(int length, CComplNumb* ArrComplNumb);
	~CComplVectHori() override;

	CComplVectHori& operator=(const CComplVectHori& b);
	CComplVectHori& operator+(const CComplVectHori& b);
	CComplVectHori& operator-(const CComplVectHori& b);
	CComplNumb operator*(CComplVectHori& b);
	CComplVectHori& conjugate();
/*	CComplVect(int length, CComplNumb* ArrComplNumb);
	CComplVect operator=(const CComplVect& b);
	CComplVect operator+(const CComplVect& b);
	CComplVect operator-(const CComplVect& b);
	CComplNumb operator*(CComplVect& b);
	CComplVect conjugate();*/
	void show();
	virtual void output() override;
	/*int get_length();
	CComplNumb* get_ArrComplNumb();*/
	friend class CComplNumb;
};