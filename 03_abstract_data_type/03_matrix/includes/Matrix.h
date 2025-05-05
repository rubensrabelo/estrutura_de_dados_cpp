#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
    private:
        int** data;
        int rows;
        int cols;

    public:
        Matrix(int n, int m);
        ~Matrix();

        int get(int i, int j) const;
        void set(int i, int j, int value);

        int getRows() const;
        int getCols() const;

        void print() const;
        bool isEqual(const Matrix& other) const;
};

#endif