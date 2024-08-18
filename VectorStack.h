#pragma once
#include "StackImplementation.h"
#include <vector>
class VectorStack :public IStackImplementation {
public:
    std::vector<ValueType> _data;
    VectorStack();
    void push(const ValueType& value) override;
    void pop()  override;
    const ValueType& top() const override;
    bool isEmpty() const override;
    size_t size() const override;
};
