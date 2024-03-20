#ifndef __MATRIX_H
#define __MATRIX_H

#include <iostream>
#include <vector>


using namespace std;

/*
  All matrices are square!
 */



struct SquareMatrix {


  SquareMatrix * BuildIdentityMatrix(int size);
  vector<vector<int>> matrix;

  SquareMatrix(vector<vector<int>> mat);
  SquareMatrix(SquareMatrix & sm);  
  SquareMatrix * MatrixMult(vector<vector<int>> right_matrix);
  vector<vector<int>> BuildVectorOfVectors(int rows_cols);
};


#endif
