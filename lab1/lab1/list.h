#pragma once
#include <iostream>

using namespace std;

template <typename T>
class list {
private:
	class node {
	public:
		T data;
		node*next;
		node(T data);
		~node();
	};
	node*head;
	node*tail;
	size_t size;
public:
	list();
	~list();
	void push_back(T data);
	void push_front(T data);
	void pop_back();
	void pop_front();
	void insert(size_t index, T data);
	void at(size_t index, T*data, int*check);
	void remove(size_t index);
	void get_size(size_t*size);
	void clear();
	void set(T data, size_t index);
	void is_empty(int*check);
	template <typename T> friend  ostream& operator << (ostream &, list<T> &);
};

template<typename T>
inline list<T>::node::node(T data)
{
	this->data = data;
	next = nullptr;
}

template<typename T>
list<T>::node::~node() {}

template<typename T>
inline list<T>::list()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

template<typename T>
list<T>::~list()
{
	clear();
}

template<typename T>
void list<T>::push_back(T data)
{
	if (tail != nullptr)
	{
		tail->next = new node(data);
		tail = tail->next;
	}
	else
	{
		head = new node(data);
		tail = head;
	}
	size++;
}

template<typename T>
void list<T>::push_front(T data)
{
	node*cur = new node(data);
	if (head != nullptr)
	{
		cur->next = head;
		head = cur;
	}
	else
	{
		head = new node(data);
		tail = head;
	}
	size++;
}

template<typename T>
void list<T>::pop_back()
{
	if (size>0)
	{
		if (size == 1)
		{
			delete tail;
			tail = nullptr;
			head = nullptr;
		}
		else
		{
			node*cur = head;
			while (cur->next != tail)
				cur = cur->next;
			delete tail;
			tail = cur;
		}
		size--;
	}
}

template<typename T>
void list<T>::pop_front()
{
	if (size > 0)
	{
		if (size == 1)
		{
			delete head;
			tail = nullptr;
			head = nullptr;
		}
		else
		{
			node*cur = head->next;
			delete head;
			head = cur;
		}
		size--;
	}
}

template<typename T>
void list<T>::insert(size_t index, T data)
{
	if ((size - index) > 0)
	{
		if (index == 0)
			push_front(data);
		else
		{
			size_t current = 0;
			node*cur = head;
			node*prev;
			while (current < index)
			{
				prev = cur;
				cur = cur->next;
				current++;
			}
			prev->next = new node(data);
			(prev->next)->next = cur;
			size++;
		}
	}
}

template<typename T>
void list<T>::at(size_t index, T * data, int * check)
{
	if (index >= size)
		*check = -1;
	else
	{
		size_t current = 0;
		node*cur = head;
		while (current < index)
		{
			cur = cur->next;
			current++;
		}
		*data = cur->data;
		*check = 1;
	}
}

template<typename T>
void list<T>::remove(size_t index)
{
	if (index < size)
	{
		if (index == 0)
			pop_front();
		else if (index == (size - 1))
			pop_back();
		else
		{
			size_t current = 0;
			node*cur = head;
			node*prev;
			while (current < index)
			{
				prev = cur;
				cur = cur->next;
				current++;
			}
			prev->next = cur->next;
			delete cur;
			size--;
		}
	}
}

template<typename T>
void list<T>::get_size(size_t * size)
{
	*size = this->size;
}

template<typename T>
void list<T>::clear()
{
	while (size > 0)
		pop_front();
}

template<typename T>
void list<T>::set(T data, size_t index)
{
	if (index < size)
	{
		size_t current = 0;
		node*cur = head;
		while (current < index)
		{
			cur = cur->next;
			current++;
		}
		cur->data = data;
	}
}

template<typename T>
void list<T>::is_empty(int * check)
{
	if (size == 0)
		*check = 1;
	else
		*check = -1;
}

template<typename T>
inline ostream & operator<<(ostream & os, list<T>& rhs)
{
	auto cur = rhs.head;
	while (cur != nullptr)
	{
		cout << cur->data;
		cur = cur->next;
		if (cur != nullptr)
			cout << "->";
	}
	cout << "\n";
	return os;
}
