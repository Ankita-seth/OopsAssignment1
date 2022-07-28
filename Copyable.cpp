#include "Copyable.h"

Copyable::Copyable()
{


}

Copyable::~Copyable()
{
	if (_Data)
	{
		delete[] _Data;
		_Data = nullptr;
	}
}

void Copyable::AllocData()
{
	_Data = new float[DataSize];

	for (size_t i = 0; i < DataSize; i++)
	{
		_Data[i] = rand() * sinf(float(i) * 2.0f * M_PI / 20.0f);
	}
}

void Copyable::ModifyData()
{
	for (size_t i = 0; i < DataSize; i++)
	{
		_Data[i] = rand() * sinf(float(DataSize - i) * 2.0f * M_PI / 20.0f);
	}
}

void Copyable::PrintDataData()
{
	if (_Data)
	{
		for (size_t i = 0; i < DataSize; i++)
		{
			cout << _Data[i] << " ";
		}
		cout << endl;
	}
}

uint64_t Copyable::GetDataAddress()
{
	return (uint64_t)_Data;
}
