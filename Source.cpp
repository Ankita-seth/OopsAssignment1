#include "Copyable.h"




int main()
{
	Copyable* obj = new Copyable();
	obj->AllocData();

	Copyable copy = *obj;	//want to create a copy 

	Copyable assignment;

	assignment = *obj;		// want to assign by value


	obj->ModifyData();		//i modified data in one class, it shouldnt affect other classes right ?????

	cout << "obj\t"			<< obj->GetDataAddress() << endl;
	cout << "copy\t"		<< copy.GetDataAddress() << endl;
	cout << "assignment\t"	<< assignment.GetDataAddress() << endl;

	obj->PrintDataData();
	copy.PrintDataData();
	assignment.PrintDataData();

	system("pause");
	return 0;
}