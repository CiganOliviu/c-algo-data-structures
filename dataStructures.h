#ifndef STD_LENGTH
#define STD_LENGTH 10000
#endif

#ifndef MATRIX_STD_LENGTH
#define MATRIX_STD_LENGTH 100
#endif

typedef struct oneDimensionalArrayType {

  int length;
  int startPoint;
  int endPoint;

  int oneDimensionalArray_int_[STD_LENGTH];
  float oneDimensionalArray_float_[STD_LENGTH];
  char oneDimensionalArray_char_[STD_LENGTH];

} oneDimensionalArrayType;

typedef struct matrixType {

  int line;
  int column;;

  int startLinePoint;
  int endLinePoint;
  int startColumnPoint;
  int endColumnPoint;

  oneDimensionalArrayType mainDiagonal;
  oneDimensionalArrayType aboveMainDiagonal;
  oneDimensionalArrayType underMainDiagonal;
  oneDimensionalArrayType secondaryDiagonal;
  oneDimensionalArrayType aboveSecondaryDiagonal;
  oneDimensionalArrayType underSecondaryDiagonal;
  oneDimensionalArrayType northElements;
  oneDimensionalArrayType southElements;
  oneDimensionalArrayType eastElements;
  oneDimensionalArrayType westElements;

  int matrix_int_[MATRIX_STD_LENGTH][MATRIX_STD_LENGTH];
  float matrix_float_[MATRIX_STD_LENGTH][MATRIX_STD_LENGTH];
  char matrix_char_[MATRIX_STD_LENGTH][MATRIX_STD_LENGTH];

} matrixType;

typedef struct binaryTree {

  int value;

  struct binaryTree * leafLeft;
  struct binaryTree * leafRight;

} binaryTree;

typedef struct graphType {

  int vertices;
  int edges;

  matrixType adjacencyMatrix;
  oneDimensionalArrayType verticesValency;

} graphType;

typedef struct limits {

  int minimLimit_int_;
  int maximLimit_int_;

  float minimLimit_float_;
  float maximLimit_float_;

  char minimLimit_char_;
  char maximLimit_char_;

} limits;

typedef struct linearEquation {

  float slope;
  float y_intercept;
  float root;

} linearEquation;

typedef struct quadraticEquation {

  float coefficient_a;
  float coefficient_b;
  float coefficient_c;
  limits roots;

} quadraticEquation;

typedef struct complexNumber {

  int complexNumberLength;
  float realPart;
  float imaginaryPart;

} complexNumber;
