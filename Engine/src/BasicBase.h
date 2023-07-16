#pragma once
#pragma once

#ifndef BASIC_BASE_H_
#define BASIC_BASE_H_

#include <type_traits>

namespace stati {

	template<typename T>
	class BasicBase {
	public:
		virtual ~BasicBase() = default;

		virtual void Init(const T* collection, int collectionSize) = 0;

		//virtual T* GetCollection() = 0;

		virtual T Mean() = 0;

		//virtual T Median() = 0;

		//virtual T Mode() = 0;

		//virtual T Variance() = 0;

		//virtual T StandardDeviation() = 0;

		//virtual T Range() = 0;

		//virtual T Quartiles() = 0;

		//virtual T Percentiles() = 0;
	};

}

#endif
