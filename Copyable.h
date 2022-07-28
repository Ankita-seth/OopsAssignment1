#pragma once

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

class Copyable
{
public:
	Copyable();
	~Copyable();

	//Copyable(const Copyable& obj) = delete; //this makles class Noncopyable.
	Copyable(const Copyable& obj)
	{
		this->_Data = new float[obj.DataSize];
		memcpy(this->_Data, obj._Data, obj.DataSize * sizeof(float));
		this->DataSize = obj.DataSize;
	}

	//Copyable& operator = (const Copyable& obj) = delete;
	Copyable& operator = (const Copyable& obj)
	{
		this->_Data = new float[obj.DataSize];
		memcpy(this->_Data, obj._Data, obj.DataSize * sizeof(float));
		this->DataSize = obj.DataSize;
		return *this;
	}


	//Implement CopyConstructor
	//Implement Assignment Operator overload

	void AllocData();
	void ModifyData();
	void PrintDataData();

	uint64_t GetDataAddress();

private:
	float* _Data = nullptr;
	float* _Data1 = nullptr;
	int DataSize = 20;
};

