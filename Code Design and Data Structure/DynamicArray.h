#include <iostream>
template<typename T>
class DynamicArray
{
public:
	DynamicArray<T>();
	~DynamicArray<T>();
	int getLength();
	void addItem(T item);
	bool removeItem(T item);
	void sortItem();
	bool getItem(int index, T* item);
	void print();


private:
	int m_length;
	T* m_items;
};

template<typename T>
inline DynamicArray<T>::DynamicArray()
{
	m_items = nullptr;
	m_length = 0;
}

template<typename T>
inline DynamicArray<T>::~DynamicArray()
{
	delete[] m_items;
}

template<typename T>
inline int DynamicArray<T>::getLength()
{

	return m_length;
}

template<typename T>
inline void DynamicArray<T>::addItem(T item)
{
	T* temp = new T[getLength() + 1];

	for(int i = 0; i < getLength(); i++)
	{
		temp[i] = m_items[i];
	}

	temp[getLength()] = item;
	m_items = temp;
		
			

}

template<typename T>
inline bool DynamicArray<T>::removeItem(T item)
{
	bool itemRemoved = false;
	T* temp = new T[getLength() - 1];

	int j = 0;
	for( int i = 0; i < getLength(); i++)
		if (item != m_items[i])
		{
			temp[j] = m_items[i];
			j++;
		}
		else
		{
			bool itemRemoved = true;
		}

	m_items = temp;

	return  itemRemoved;
}

template<typename T>
inline void DynamicArray<T>::sortItem()
{
	for (int i = 0; i < getLength(); i++)
	{
		for (int j = getLength() - 1; j > i; j--)
		{
			if (m_items[j] < m_items[j - 1])
			{
				T temp = m_items[j];
				m_items[j] = m_items[j - 1];
				m_items[j - 1] = temp;
			}
		}
	}
}

template<typename T>
inline bool DynamicArray<T>::getItem(int index, T* item)
{
	if (!item || index < 0 || index >= getLength())
		return false;

	item = &m_items[index];

	return false;
}

template<typename T>
inline void DynamicArray<T>::print()
{
	for (int i = 0; i < getLength(); i++)
	{
	std::cout << m_items[i] << std::endl;
	}
}


