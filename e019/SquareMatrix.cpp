
#include "SquareMatrix.h"

SquareMatrix::SquareMatrix(vector<vector<int>> _mat) {
  matrix = _mat;
}


SquareMatrix::SquareMatrix(SquareMatrix & sm) : matrix(sm.matrix) {
}


vector<vector<int>> SquareMatrix::BuildVectorOfVectors(int rows_cols) {
  vector<vector<int>> vOfV;
  for (int i = 0 ; i < rows_cols; i++ ) {
    vOfV.push_back(vector<int>(rows_cols));
  }

  return vOfV;
}

SquareMatrix* SquareMatrix::MatrixMult(vector<vector<int>> right_matrix) {
  int rows = matrix.size();
  int cols = rows; // square matrix

  vector<vector<int>> vOfV = BuildVectorOfVectors(rows);
  cout << "rows: " << rows << " size: " << vOfV.size() << endl;

  for (int i = 0; i < rows; i++ ) {
    for (int j = 0; j < cols; j++ ) {
      int t = 0;
      for (int k = 0; k < cols; k++ ) {
	      t += matrix[i][k]* right_matrix[k][j];
      }
      vOfV[i][j] = t;
    }
  }

  SquareMatrix * sm = new SquareMatrix(vOfV);
  
  return sm;
}


SquareMatrix* SquareMatrix::BuildIdentityMatrix(int size) {

  vector<vector<int>> vOfV = BuildVectorOfVectors(size);
  
  for (int i = 0; i < size; i++ ) {
    for (int j = 0; j < size; j++ ) {
      vOfV[i][j] = 0;
    }
  }

  for (int i = 0 ; i < size ; i++ ) {
    vOfV[i][i] = 1;
  }
  
  SquareMatrix *sm = new SquareMatrix(vOfV);

  return sm;
}
