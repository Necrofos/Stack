#include <gtest/gtest.h>
#include "Stack.h" 

TEST(StackTest, PushPop) {
    Stack stack;
    stack.push(42);
    EXPECT_EQ(stack.top(), 42);
    stack.pop();
    EXPECT_TRUE(stack.isEmpty());
}

TEST(StackTest, TopAfterPush) {
    Stack stack;
    stack.push(10);
    stack.push(20);
    EXPECT_EQ(stack.top(), 20);
}

TEST(StackTest, StackSize) {
    Stack stack;
    EXPECT_EQ(stack.size(), 0);
    stack.push(10);
    stack.push(20);
    EXPECT_EQ(stack.size(), 2);
    stack.pop();
    EXPECT_EQ(stack.size(), 1);
}
