#pragma once
#include "main.h"
#include "student.h"

class Group {
private:
	Student* list;
	string name;

public:
	Group();
	Group(Student* ls, int sz, string nm);
	Group(string nm);
	~Group();

	void add(Student student);
	void remove(Student student);
	void remove(int index);
	Student get(int index);
	
};