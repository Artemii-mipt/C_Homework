#include<iostream>
#include<vector>

class Human
{
public:

	Human(std::string n) : name(n) {}

	~Human() {}

	std::string get_name()
	{
		return name;
	}
private:
	std::string name;
};

class smart_pointer
{
private:
	Human* m_obj;

public:
	smart_pointer() {}

	smart_pointer(Human* obj) : m_obj(obj) {}

	~smart_pointer()
	{
		delete m_obj;
	}

	Human& operator* () { return *m_obj; }
	smart_pointer operator=(smart_pointer) { return m_obj; }
};

class Bank_Cell
{
public:

	Bank_Cell(smart_pointer ptr)
	{
		client = ptr;
		clients.push_back(ptr);

	}

	void print_clients()
	{
		for (auto s : clients)
		std::cout « (*s).get_name() « '\n';
	}
private:
	smart_pointer client;
	std::vector <smart_pointer> clients;
};

