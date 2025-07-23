#ifndef MATRIX_LIBRARY_HPP
#define MATRIX_LIBRARY_HPP

#include <iostream>
#include <concepts>
#include <cstdint>

template<typename T>
concept Number = std::integral<T>;


template <typename T>
requires Number<T>
class Matrix {
private:
	const size_t ROWS;
	const size_t COLS;
	T** data_;

public:
	Matrix(size_t rows, size_t cols) : ROWS(rows), COLS(cols) {
		this.data_ = new int[ROWS * COLS];
	}

	Matrix(size_t rows, size_t cols, int64_t num) : ROWS(rows), COLS(cols) {
		this.data_ = new int[ROWS * COLS];
		fill(num);
	}
	
	void fill(Matrix m, int64_t num) {
		for (size_t i = 0; i < ROWS; i++) 
			for (size_t j = 0; j < COLS; j++)
				m->data_[i][j] = num;	
	}

	void zero(Matrix m) {
		for (size_t i = 0; i < ROWS; i++) 
			for (size_t j = 0; j < COLS; j++) 
				m->data_[i][j] = 0;
	}

	
		
	bool equals(Matrix a, Matrix b) {
		if (a.ROWS != b.ROWS || a.COLS != b.COLS)
			return false;

		for (int i = 0; i < a.ROWS; i++) 
			for (int j = 0; j < a.COLS; j++)
				if (a->data_[i][j] != b->data_[i][j])
					return false;
		return true;
	}
	
};		


#endif
