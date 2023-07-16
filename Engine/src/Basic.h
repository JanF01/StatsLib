#pragma once

#ifndef BASIC_H_
#define BASIC_H_


#include <type_traits>
#include <memory>
#include "BasicBase.h"

namespace stati {

	template<typename T>
	class Basic final : public BasicBase<T> {
	public:
		~Basic() override;

		void Init(const T* collection, int collectionSize) override;

		T Mean() override;

		//T Median() final;

		//T Mode() final;

		//T Variance() final;

		//T StandardDeviation() final;

		//T Range() final;

		//T Quartiles() final;

		//T Percentiles() final;
	private:
		std::unique_ptr<T[]> basicCollection;
		int collectionSize;

	};

}

#endif
