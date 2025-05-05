#include <iostream>
#include<stdexcept>

#include "Matrix.h"

Matrix::Matrix(int n, int m): rows(n), cols(m) {
    data = new int*[rows];
    
    for(int i = 0; i<rows; ++i)
        data[i] = new int[cols]{0};
}


Matrix::~Matrix() {
    for(int i = 0; i<rows; i++)
        delete[] data[i];
    delete[] data;
}

int Matrix::get(int i, int j) const {
    if((i>=0 && i<rows) && (j>=0 && j <cols))
        return data[i][j];
    throw std::out_of_range("Index out of bounds.");
}

void Matrix::set(int i, int j, int value) {
    if((i>=0 && i<rows) && (j>=0 && j <cols))
        data[i][j] = value;
    else
        throw std::out_of_range("Index out of bounds.");
}

int Matrix::getRows() const {
    return rows;
}

int Matrix::getCols() const {
    return cols;
}

void Matrix::print() const {
    for(int i=0; i<rows; ++i)
        for(int j=0; j<cols; ++j)
            std::cout << data[i][j] << " ";
        std::cout << "\n";
}

bool Matrix::isEqual(const Matrix& other) const {
    if(rows != other.rows || cols != other.cols)
        return false;
    for(int i=0; i<rows; ++i)
        for(int j=0; j<cols; ++j)
            if(data[i][j] != other.data[i][j])
                return false;
    return true;
}