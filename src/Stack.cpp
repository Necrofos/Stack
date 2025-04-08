#include "Stack.h"
#include "VectorStack.h"
#include "ListStack.h"

Stack::Stack(StackContainer container) : _containerType(container)
{
    switch (container) {
    case StackContainer::Vector:
        _pimpl = new VectorStack;
        break;
    case StackContainer::List:
        _pimpl = new ListStack;
        break;
    }
}

Stack::Stack(const ValueType* valueArray, const size_t arraySize, StackContainer container)
{
    _containerType = container;
    switch (container)
    {
    case StackContainer::Vector:
        _pimpl = new VectorStack;
        break;
    case StackContainer::List:
        _pimpl = new ListStack;
        break;
    }
    for (size_t i = 0; i < arraySize; i++)
    {
        _pimpl->push(valueArray[i]);
    }
}

Stack::Stack(const Stack& copyStack)
{
    _containerType = copyStack._containerType;
    _pimpl = nullptr;
    if (copyStack._pimpl)
    {
        switch (_containerType)
        {
        case StackContainer::Vector:
            _pimpl = new VectorStack(*dynamic_cast<VectorStack*>(copyStack._pimpl));
            break;
        case StackContainer::List:
            _pimpl = new ListStack(*dynamic_cast<ListStack*>(copyStack._pimpl));
            break;
        }
    }
}

Stack& Stack::operator=(const Stack& copyStack)
{
    if (this != &copyStack)
    {
        delete _pimpl;
        _pimpl = nullptr;
        _containerType = copyStack._containerType;
        if (copyStack._pimpl)
        {
            switch (_containerType)
            {
            case StackContainer::Vector:
                _pimpl = new VectorStack(*dynamic_cast<VectorStack*>(copyStack._pimpl));
                break;
            case StackContainer::List:
                _pimpl = new ListStack(*dynamic_cast<ListStack*>(copyStack._pimpl));
                break;
            }
        }
    }
    return *this;
}

Stack::Stack(Stack&& moveStack) noexcept : _pimpl(moveStack._pimpl), _containerType(moveStack._containerType)
{
    moveStack._pimpl = nullptr;
}

Stack::~Stack()
{
    delete _pimpl;
}

void Stack::push(const ValueType& value) 
{
    _pimpl->push(value);
}

void Stack::pop() 
{
    _pimpl->pop();
}

const ValueType& Stack::top() const 
{
    return _pimpl->top();
}

bool Stack::isEmpty() const 
{
    return _pimpl->isEmpty();
}

size_t Stack::size() const 
{
    return _pimpl->size();
}
