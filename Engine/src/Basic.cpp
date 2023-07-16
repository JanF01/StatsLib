
#include "Basic.h"
#include <iostream>
#include <algorithm>
#include <numeric>
#include <memory>

namespace stati {

	template<typename T>
	Basic<T>::~Basic() = default;

	template<typename T>
	void Basic<T>::Init(const T* collection, int collectionSize) {

			if (!collection[0]) {
				std::cout << "Empty collection given";
				return;
			}

			this->basicCollection = std::make_unique<T[]>(collectionSize);
			for (int i = 0; i < collectionSize; i++) {
				this->basicCollection[i] = collection[i];
			}
			this->collectionSize = collectionSize;
	}

	template<typename T>
	T Basic<T>::Mean() {
		T sum = 0;
		if (basicCollection.get() == nullptr) return -1;
		for (int i = 0; i < collectionSize; i++) {
			sum += basicCollection[i];
		}
		return sum/collectionSize;
	}


}