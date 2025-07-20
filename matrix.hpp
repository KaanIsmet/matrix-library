#ifndef MATRIX_LIBRARY_HPP
#define MATRIX_LIBRARY_HPP

#include <concepts>
#include <cstdint>
#include <vector>

template <typename T>
requires same_as<T, std::int64_t>
class Matrix {
	const size_t ROWS;
	const size_t COLS;
	std::vector<T> data_;

public:
	Matrix(int rows, int cols) : ROWS(rows), COLS(cols), data_(rows * cols) {}

};		
