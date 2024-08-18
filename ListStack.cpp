#include "ListStack.h"

ListStack::ListStack(){
	_data = std::list<ValueType>();
}

void ListStack::push(const ValueType& value)
{
	_data.push_back(value);
}
void ListStack::pop() 
{
	_data.pop_back();
}
size_t ListStack::size() const 
{
	return _data.size();
}
bool ListStack::isEmpty() const 
{
	return _data.empty();
}
const ValueType& ListStack::top() const 
{
	if (isEmpty()) 
	{
		return 0;
	}
	return _data.back();
}
