#ifndef MAX_HEAD_H
#define MAXHEAD_H_

template <typename T>
class maxHeap {
public:
	bool isEmpty() const;
	void insert(const T& iItem);
	T delMax();
	maxHeap(int capacity = 0);
	~maxHeap();

private:
	void resize(int iNewCapacity);
	void swim(int k);
	void sink(int k);
	int N;
	int _capacity;
	T* _array;
};


template <typename T>
bool maxHeap<T>::isEmpty() const {
	return N == 0;
}

template<typename T>
maxHeap<T>::maxHeap(int capacity) {
	_array = new T[capacity];
	N = 0;
	_capacity = capacity;
}

template <typename T>
maxHeap<T>::~maxHeap() {
	delete[] _array;
}


#endif // !MAX_HEAD_H



