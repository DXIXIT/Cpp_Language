#ifndef STACK_H
#define STACK_H

const int MAX_STACK_SIZE = 50;


template <class T>
class stack
{
	public:
		stack(): mNumItemsOnStack(0){} //Set the initial numbers of itmes to zero.
		stack(const stack<T> &source); //Copy constructor

		//Public interface functions:
		bool push(const T item); //Return true if insertion is successful
		bool pop(); //Return true if item removal is successful
		T peek() const; //Peek at the item value on top of the stack. Is of type T.
		bool isFull() const {return (mNumItemsOnStack == MAX_STACK_SIZE);}
		bool isEmpty() const {return !mNumItemsOnStack;}

	private:
		T mStack[MAX_STACK_SIZE]; /* The type of mStack has been changed from 'int' to 'T'.
									essentially, this stack can fit in any data type. */
		int mNumItemsOnStack;
};

#include "stack.hpp" //Put in right before #endif
#endif