/*
MIT License

Copyright (c) 2020 Cigan Oliviu David

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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

typedef struct linkedCentrum {

  int data;
  struct linkedCentrum * nextLinkedValue;

} linkedCentrum;

typedef struct doubleLinkedCentrum {

  int data;
  struct doubleLinkedCentrum * nextDoubleLinkedValue;
  struct doubleLinkedCentrum * previousDoubleLinkedValue;

} doubleLinkedCentrum;
