// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double result = 1.0;
  for (uint16_t i = 0; i < n; ++i) {
    result *= value;
  }
  return result;
}

uint64_t fact(uint16_t n) {
  if (n == 0) {
    return 1;
  }
  else {
    return n * fact (n - 1);
  }
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double sum1 = 1.0;
  for (uint16_t i = 1; i <= count; ++i) {
    sum1 += calcItem(x, i);
  }
  return sum1;
}

double sinn(double x, uint16_t count) {
  double sum2 = x;
  for (uint16_t i = 2; i <= count; ++i) {
    sum2 += pown((-1.0), i - 1) * calcItem(x, (2 * i) - 1);
  }
  return sum2;
}

double cosn(double x, uint16_t count) {
  double sum3 = 1.0;
  for (uint16_t i = 2; i <= count; ++i) {
    sum += pown((-1.0), i - 1) * calcItem(x, (2 * i) - 2);
  }
  return sum3;
}
