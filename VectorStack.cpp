#include "VectorStack.h"

VectorStack::VectorStack() 
{
	_data = std::vector<ValueType>();
}

void VectorStack::push(const ValueType& value) 
{
	_data.push_back(value);
}
void VectorStack::pop() 
{
	_data.pop_back();
}
size_t VectorStack::size() const 
{
	return _data.size();
}
bool VectorStack::isEmpty() const 
{
	return _data.empty();
}
const ValueType& VectorStack::top() const
{
	if (isEmpty()) 
	{
		return 0;
	}
	return _data.back();
}
