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