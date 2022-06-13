#define ll long long
#define loop(i, start, n) for (ll i = start; i < n; i++)
#include <bits/stdc++.h>
using namespace std;

class student
{
	string name;
	int age;
	bool gender;

public:
	student()
	{
		cout << "Default constructor" << endl;
	}

	student(string s)
	{
		cout << "Parameterised Constructor" << endl;
		name = s;
	}

	student(student &x)
	{
		cout << "Copy Constructor" << endl;
		name = x.name;
	}

	void getName()
	{
		cout << "HELLO " << name << endl;
	}
};

int main()
{
	student a("Ajay");
	student b;
	student c = a;
	c.getName()
	;
	return 0;
}