
template <class T>
Calculator<T>::Calculator(T lftVal, T rhtVal)
{
	left_val = lftVal;
	right_val = rhtVal;
}

template <class T>
T Calculator<T>::Add()
{
	return left_val + right_val;
}

template <class T>
T Calculator<T>::Subtract()
{
	T difference = left_val - right_val;
	return difference;
}