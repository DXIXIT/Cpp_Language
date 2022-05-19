//This is the stack.hpp file. This is renamed from a stack.cpp file.

/*Also #include "stack.h" Not necessary. This is because this file
is already a header file, just with a .hpp placed conventionally.
*/

template <class T>
bool stack<T>::push(const T item)
{
	bool success = false;
	
	//Can't push onto the stack if it's full
	if (!isFull())
	{
		mStack[mNumItemsOnStack++] = item; //Here, we are assuming that assignment overload exists for type T.
		success = true;
	}

	return success;
}

template <class T>
stack<T>::stack(const stack<T> &source)
{
	mNumItemsOnStack = source.mNumItemsOnStack;
	for (int i = 0; i < MAX_STACK_SIZE; i++)
	{
		mStack[i] = source.mStack;
	}
}

template <class T> //Needs to be put in before every function
bool stack<T>::pop()
{
	bool success = false;

	//Can't pop if the stack has no items
	if (!isEmpty())
	{
		mNumItemsOnStack--;
		success = true;
	}
	return success;
}

template <class T>
T stack<T>::peek() const
{
	return mStack[mNumItemsOnStack - 1];
}