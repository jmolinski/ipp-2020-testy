#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"



int main()

{

gamma_t *test = gamma_new(50, 25, 8, 10);

assert(1 == gamma_move(test, 2, 12, 14));

assert(1 == gamma_move(test, 7, 41, 7));

assert(0 == gamma_move(test, 9, 26, 4));

assert(1 == gamma_move(test, 6, 1, 0));

assert(1 == gamma_move(test, 1, 1, 3));

assert(1 == gamma_move(test, 1, 45, 6));

assert(1 == gamma_move(test, 5, 13, 21));

assert(1 == gamma_move(test, 5, 35, 19));

assert(1 == gamma_move(test, 3, 35, 20));

assert(1 == gamma_move(test, 7, 6, 8));

assert(1 == gamma_move(test, 8, 25, 4));

assert(1 == gamma_move(test, 8, 0, 11));

assert(1 == gamma_move(test, 5, 0, 10));

assert(0 == gamma_move(test, 9, 35, 21));

assert(1 == gamma_move(test, 4, 2, 0));

assert(1 == gamma_golden_move(test, 5, 2, 0));

assert(2 == gamma_busy_fields(test, 1));

assert(1237 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(1 == gamma_busy_fields(test, 2));

assert(1237 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(1 == gamma_busy_fields(test, 3));

assert(1237 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(0 == gamma_busy_fields(test, 4));

assert(1237 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(4 == gamma_busy_fields(test, 5));

assert(1237 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(1 == gamma_busy_fields(test, 6));

assert(1237 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(2 == gamma_busy_fields(test, 7));

assert(1237 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(2 == gamma_busy_fields(test, 8));

assert(1237 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 7, 36, 21));

assert(0 == gamma_move(test, 9, 25, 5));

assert(1 == gamma_move(test, 1, 3, 0));

assert(0 == gamma_move(test, 0, 12, 21));

assert(1 == gamma_move(test, 1, 12, 13));

assert(1 == gamma_move(test, 4, 11, 21));

assert(1 == gamma_move(test, 2, 49, 21));

assert(0 == gamma_move(test, 9, 40, 7));

assert(1 == gamma_move(test, 8, 46, 4));

assert(1 == gamma_move(test, 5, 48, 11));

assert(1 == gamma_move(test, 8, 36, 20));

assert(1 == gamma_move(test, 3, 36, 14));

assert(0 == gamma_move(test, 0, 3, 11));

assert(1 == gamma_move(test, 6, 13, 13));

assert(0 == gamma_move(test, 0, 20, 18));

assert(1 == gamma_golden_move(test, 1, 48, 11));

assert(5 == gamma_busy_fields(test, 1));

assert(1227 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(2 == gamma_busy_fields(test, 2));

assert(1227 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(2 == gamma_busy_fields(test, 3));

assert(1227 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(1 == gamma_busy_fields(test, 4));

assert(1227 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(4 == gamma_busy_fields(test, 5));

assert(1227 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(2 == gamma_busy_fields(test, 6));

assert(1227 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(3 == gamma_busy_fields(test, 7));

assert(1227 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(4 == gamma_busy_fields(test, 8));

assert(1227 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 9, 10, 21));

assert(1 == gamma_move(test, 1, 12, 0));

assert(1 == gamma_move(test, 7, 10, 22));

assert(1 == gamma_move(test, 3, 25, 6));

assert(1 == gamma_move(test, 7, 6, 9));

assert(1 == gamma_move(test, 6, 26, 6));

assert(1 == gamma_move(test, 8, 2, 3));

assert(1 == gamma_move(test, 3, 39, 12));

assert(1 == gamma_move(test, 8, 6, 10));

assert(1 == gamma_move(test, 8, 0, 12));

assert(1 == gamma_move(test, 7, 0, 13));

assert(1 == gamma_move(test, 4, 26, 7));

assert(1 == gamma_move(test, 7, 34, 22));

assert(0 == gamma_move(test, 9, 27, 7));

assert(0 == gamma_move(test, 0, 26, 18));

assert(1 == gamma_golden_move(test, 4, 26, 6));

assert(6 == gamma_busy_fields(test, 1));

assert(1215 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(2 == gamma_busy_fields(test, 2));

assert(1215 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(4 == gamma_busy_fields(test, 3));

assert(1215 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(3 == gamma_busy_fields(test, 4));

assert(1215 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(4 == gamma_busy_fields(test, 5));

assert(1215 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(2 == gamma_busy_fields(test, 6));

assert(1215 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(7 == gamma_busy_fields(test, 7));

assert(1215 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(7 == gamma_busy_fields(test, 8));

assert(1215 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 4, 33, 22));

assert(1 == gamma_move(test, 1, 32, 22));

assert(1 == gamma_move(test, 8, 10, 21));

assert(1 == gamma_move(test, 3, 0, 14));

assert(1 == gamma_move(test, 2, 34, 11));

assert(1 == gamma_move(test, 6, 12, 24));

assert(1 == gamma_move(test, 7, 3, 3));

assert(0 == gamma_move(test, 4, 1, 25));

assert(1 == gamma_move(test, 2, 32, 23));

assert(1 == gamma_move(test, 2, 42, 7));

assert(1 == gamma_move(test, 1, 42, 8));

assert(1 == gamma_move(test, 7, 9, 21));

assert(1 == gamma_move(test, 3, 25, 7));

assert(1 == gamma_move(test, 1, 6, 11));

assert(1 == gamma_move(test, 4, 9, 20));

assert(1 == gamma_golden_move(test, 8, 11, 21));

assert(9 == gamma_busy_fields(test, 1));

assert(1201 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(5 == gamma_busy_fields(test, 2));

assert(1201 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(6 == gamma_busy_fields(test, 3));

assert(1201 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(4 == gamma_busy_fields(test, 4));

assert(1201 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(4 == gamma_busy_fields(test, 5));

assert(1201 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(3 == gamma_busy_fields(test, 6));

assert(1201 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(9 == gamma_busy_fields(test, 7));

assert(1201 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(9 == gamma_busy_fields(test, 8));

assert(1201 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 4, 0, 15));

assert(1 == gamma_move(test, 1, 31, 23));

assert(0 == gamma_move(test, 9, 10, 20));

assert(1 == gamma_move(test, 5, 22, 16));

assert(0 == gamma_move(test, 2, 33, 25));

assert(1 == gamma_move(test, 3, 43, 8));

assert(1 == gamma_move(test, 6, 5, 11));

assert(1 == gamma_move(test, 5, 21, 11));

assert(1 == gamma_move(test, 8, 36, 22));

assert(1 == gamma_move(test, 3, 33, 7));

assert(0 == gamma_move(test, 3, 1, 0));

assert(0 == gamma_move(test, 9, 7, 11));

assert(1 == gamma_move(test, 4, 5, 14));

assert(0 == gamma_move(test, 1, 44, 23));

assert(1 == gamma_move(test, 6, 11, 20));

assert(1 == gamma_golden_move(test, 2, 13, 21));

assert(10 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(6 == gamma_busy_fields(test, 2));

assert(1191 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(8 == gamma_busy_fields(test, 3));

assert(1191 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(6 == gamma_busy_fields(test, 4));

assert(1191 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(5 == gamma_busy_fields(test, 5));

assert(1191 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(5 == gamma_busy_fields(test, 6));

assert(1191 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(9 == gamma_busy_fields(test, 7));

assert(1191 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(10 == gamma_busy_fields(test, 8));

assert(1191 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 2, 44, 8));

assert(0 == gamma_move(test, 1, 21, 11));

assert(1 == gamma_move(test, 4, 11, 1));

assert(1 == gamma_move(test, 7, 32, 24));

assert(1 == gamma_move(test, 3, 25, 8));

assert(1 == gamma_move(test, 2, 8, 11));

assert(1 == gamma_move(test, 5, 29, 20));

assert(1 == gamma_move(test, 7, 35, 22));

assert(1 == gamma_move(test, 3, 24, 8));

assert(0 == gamma_move(test, 9, 8, 10));

assert(1 == gamma_move(test, 6, 48, 23));

assert(1 == gamma_move(test, 5, 4, 3));

assert(1 == gamma_move(test, 8, 15, 7));

assert(0 == gamma_move(test, 0, -2, 15));

assert(0 == gamma_move(test, 1, 27, 7));

assert(1 == gamma_golden_move(test, 6, 0, 13));

assert(10 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(8 == gamma_busy_fields(test, 2));

assert(1180 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(10 == gamma_busy_fields(test, 3));

assert(1180 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(7 == gamma_busy_fields(test, 4));

assert(1180 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(7 == gamma_busy_fields(test, 5));

assert(1180 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(7 == gamma_busy_fields(test, 6));

assert(1180 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(10 == gamma_busy_fields(test, 7));

assert(1180 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(1180 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 6, 4, 4));

assert(0 == gamma_move(test, 0, 28, 23));

assert(1 == gamma_move(test, 7, 22, 1));

assert(1 == gamma_move(test, 3, 2, 16));

assert(1 == gamma_move(test, 3, 7, 10));

assert(1 == gamma_move(test, 5, 7, 11));

assert(1 == gamma_move(test, 4, 29, 0));

assert(0 == gamma_move(test, 0, 32, 25));

assert(1 == gamma_move(test, 6, 11, 14));

assert(0 == gamma_move(test, 0, 5, 4));

assert(1 == gamma_move(test, 6, 11, 13));

assert(0 == gamma_move(test, 1, 22, 6));

assert(1 == gamma_move(test, 2, 11, 19));

assert(1 == gamma_move(test, 2, 23, 8));

assert(0 == gamma_move(test, 0, 44, 8));

assert(1 == gamma_golden_move(test, 7, 43, 8));

assert(10 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(11 == gamma_busy_fields(test, 3));

assert(1170 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(8 == gamma_busy_fields(test, 4));

assert(1170 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(8 == gamma_busy_fields(test, 5));

assert(1170 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(10 == gamma_busy_fields(test, 6));

assert(1170 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(12 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(1170 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 8, 25, 9));

assert(1 == gamma_move(test, 3, 19, 20));

assert(0 == gamma_move(test, 9, 6, 11));

assert(0 == gamma_move(test, 7, 25, 12));

assert(1 == gamma_move(test, 3, 25, 10));

assert(0 == gamma_move(test, 8, 44, 3));

assert(0 == gamma_move(test, 2, 27, 21));

assert(0 == gamma_move(test, 3, 37, 5));

assert(1 == gamma_move(test, 3, 39, 13));

assert(0 == gamma_move(test, 9, 27, 14));

assert(0 == gamma_move(test, 3, 3, 22));

assert(0 == gamma_move(test, 3, 44, 19));

assert(0 == gamma_move(test, 8, 14, 2));

assert(0 == gamma_move(test, 7, 35, 22));

assert(0 == gamma_move(test, 0, 1, 3));

assert(10 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(8 == gamma_busy_fields(test, 4));

assert(1166 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(8 == gamma_busy_fields(test, 5));

assert(1166 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(10 == gamma_busy_fields(test, 6));

assert(1166 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(12 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(26 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 7, 22, 13));

assert(1 == gamma_move(test, 4, 25, 11));

assert(0 == gamma_move(test, 0, 33, 25));

assert(0 == gamma_move(test, 2, 0, 0));

assert(1 == gamma_move(test, 6, 38, 22));

assert(0 == gamma_move(test, 2, 19, 16));

assert(0 == gamma_move(test, 0, 44, 7));

assert(0 == gamma_move(test, 2, 18, 18));

assert(0 == gamma_move(test, 6, 5, 11));

assert(1 == gamma_move(test, 5, 4, 18));

assert(1 == gamma_move(test, 4, 33, 23));

assert(1 == gamma_move(test, 4, 43, 11));

assert(0 == gamma_move(test, 1, 7, 22));

assert(0 == gamma_move(test, 1, 40, 6));

assert(0 == gamma_move(test, 7, 6, 24));

assert(10 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(27 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(1161 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(9 == gamma_busy_fields(test, 5));

assert(1161 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(11 == gamma_busy_fields(test, 6));

assert(29 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(12 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(26 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 3, 12, 15));

assert(0 == gamma_move(test, 2, 18, 0));

assert(0 == gamma_move(test, 0, 43, 8));

assert(0 == gamma_move(test, 0, 24, 6));

assert(0 == gamma_move(test, 9, 12, 11));

assert(0 == gamma_move(test, 2, 40, 11));

assert(0 == gamma_move(test, 3, 44, 19));

assert(0 == gamma_move(test, 9, 4, 11));

assert(0 == gamma_move(test, 8, 36, 7));

assert(0 == gamma_move(test, 9, -3, 13));

assert(0 == gamma_move(test, 1, 25, 10));

assert(1 == gamma_move(test, 5, 12, 21));

assert(0 == gamma_move(test, 2, 3, 17));

assert(0 == gamma_move(test, 7, 8, 4));

assert(0 == gamma_move(test, 9, 26, 11));

assert(10 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(1160 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(11 == gamma_busy_fields(test, 6));

assert(29 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(12 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 3, 25, 17));

assert(0 == gamma_move(test, 5, 25, 11));

assert(1 == gamma_move(test, 4, 24, 21));

assert(0 == gamma_move(test, 2, 7, 20));

assert(0 == gamma_move(test, 7, 36, 23));

assert(0 == gamma_move(test, 5, 27, 3));

assert(0 == gamma_move(test, 4, 10, 3));

assert(0 == gamma_move(test, 4, 35, 4));

assert(0 == gamma_move(test, 1, 26, 17));

assert(0 == gamma_move(test, 1, 35, 16));

assert(0 == gamma_move(test, 1, 15, 22));

assert(0 == gamma_move(test, 4, 28, 18));

assert(0 == gamma_move(test, 5, 42, 1));

assert(0 == gamma_move(test, 7, 2, 10));

assert(0 == gamma_move(test, 2, 45, 24));

assert(10 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(11 == gamma_busy_fields(test, 6));

assert(29 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(12 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 5, 29, 4));

assert(0 == gamma_move(test, 1, 3, 16));

assert(0 == gamma_move(test, 2, 9, 0));

assert(0 == gamma_move(test, 0, 44, 6));

assert(0 == gamma_move(test, 4, 2, 22));

assert(0 == gamma_move(test, 7, 40, 20));

assert(0 == gamma_move(test, 9, 27, 9));

assert(0 == gamma_move(test, 6, 4, 9));

assert(0 == gamma_move(test, 5, 35, 2));

assert(1 == gamma_move(test, 1, 31, 24));

assert(0 == gamma_move(test, 0, 12, 22));

assert(0 == gamma_move(test, 9, 11, 11));

assert(0 == gamma_move(test, 1, 11, 7));

assert(0 == gamma_move(test, 0, 12, 23));

assert(0 == gamma_move(test, 1, 15, 3));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(11 == gamma_busy_fields(test, 6));

assert(29 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 8, 22, 5));

assert(0 == gamma_move(test, 8, 21, 22));

assert(0 == gamma_move(test, 5, 1, 2));

assert(0 == gamma_move(test, 4, 6, 5));

assert(0 == gamma_move(test, 0, 26, 19));

assert(0 == gamma_move(test, 0, 16, 14));

assert(0 == gamma_move(test, 6, 40, 10));

assert(0 == gamma_move(test, 8, 40, 5));

assert(0 == gamma_move(test, 7, 48, 6));

assert(0 == gamma_move(test, 7, 30, 2));

assert(0 == gamma_move(test, 1, 28, 12));

assert(0 == gamma_move(test, 1, 34, 16));

assert(0 == gamma_move(test, 0, 12, 23));

assert(0 == gamma_move(test, 1, 47, 22));

assert(0 == gamma_move(test, 7, 34, 2));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(11 == gamma_busy_fields(test, 6));

assert(29 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 6, 12, 23));

assert(0 == gamma_move(test, 5, 10, 19));

assert(0 == gamma_move(test, 0, 30, 25));

assert(0 == gamma_move(test, 2, 0, 21));

assert(0 == gamma_move(test, 2, 5, 12));

assert(0 == gamma_move(test, 6, 16, 6));

assert(0 == gamma_move(test, 5, 26, 0));

assert(0 == gamma_move(test, 0, 30, 24));

assert(0 == gamma_move(test, 5, 13, 4));

assert(0 == gamma_move(test, 7, 37, 8));

assert(1 == gamma_move(test, 7, 22, 0));

assert(0 == gamma_move(test, 0, 26, 11));

assert(0 == gamma_move(test, 2, 48, 5));

assert(0 == gamma_move(test, 4, 3, 1));

assert(0 == gamma_move(test, 6, 32, 9));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(31 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 0, 47, 12));

assert(0 == gamma_move(test, 5, 11, 10));

assert(0 == gamma_move(test, 0, 29, 25));

assert(0 == gamma_move(test, 8, 48, 7));

assert(0 == gamma_move(test, 2, 27, 0));

assert(0 == gamma_move(test, 9, 42, 6));

assert(0 == gamma_move(test, 9, 19, 25));

assert(0 == gamma_move(test, 7, 30, 12));

assert(0 == gamma_move(test, 9, 25, 11));

assert(0 == gamma_move(test, 2, 16, 1));

assert(0 == gamma_move(test, 5, 44, 17));

assert(0 == gamma_move(test, 2, 0, 21));

assert(0 == gamma_move(test, 9, 41, 7));

assert(0 == gamma_move(test, 2, 48, 12));

assert(0 == gamma_move(test, 7, 25, 15));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(31 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 1, 41, 14));

assert(0 == gamma_move(test, 4, 38, 14));

assert(0 == gamma_move(test, 2, 6, 13));

assert(0 == gamma_move(test, 7, 22, 5));

assert(0 == gamma_move(test, 1, 27, 19));

assert(0 == gamma_move(test, 2, 11, 1));

assert(0 == gamma_move(test, 8, 42, 12));

assert(0 == gamma_move(test, 4, 33, 6));

assert(0 == gamma_move(test, 1, 8, 14));

assert(0 == gamma_move(test, 5, 15, 13));

assert(0 == gamma_move(test, 4, 36, 25));

assert(0 == gamma_move(test, 0, 36, 28));

assert(0 == gamma_move(test, 2, 13, 19));

assert(0 == gamma_move(test, 8, 10, 9));

assert(0 == gamma_move(test, 2, 18, 15));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(31 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 5, 42, 17));

assert(0 == gamma_move(test, 4, 11, 8));

assert(0 == gamma_move(test, 0, 36, 27));

assert(0 == gamma_move(test, 7, 8, 23));

assert(0 == gamma_move(test, 7, 18, 2));

assert(0 == gamma_move(test, 8, 22, 14));

assert(0 == gamma_move(test, 7, 24, 10));

assert(0 == gamma_move(test, 0, 25, 12));

assert(0 == gamma_move(test, 9, 5, 8));

assert(0 == gamma_move(test, 7, 31, 7));

assert(0 == gamma_move(test, 7, 9, 18));

assert(0 == gamma_move(test, 5, 11, 20));

assert(0 == gamma_move(test, 1, 32, 2));

assert(0 == gamma_move(test, 1, 17, 11));

assert(0 == gamma_move(test, 5, 29, 24));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(31 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 6, 14, 7));

assert(0 == gamma_move(test, 2, 45, 13));

assert(0 == gamma_move(test, 4, 40, 5));

assert(0 == gamma_move(test, 4, 19, 20));

assert(0 == gamma_move(test, 4, 30, 6));

assert(0 == gamma_move(test, 7, 21, 5));

assert(0 == gamma_move(test, 8, 44, 3));

assert(0 == gamma_move(test, 9, 36, 5));

assert(0 == gamma_move(test, 3, 48, 13));

assert(0 == gamma_move(test, 7, 13, 0));

assert(0 == gamma_move(test, 3, 38, 9));

assert(0 == gamma_move(test, 4, 15, 20));

assert(0 == gamma_move(test, 0, 37, 25));

assert(0 == gamma_move(test, 5, 11, 22));

assert(0 == gamma_move(test, 5, 7, 19));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(14 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(31 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 4, 41, 17));

assert(0 == gamma_move(test, 9, 37, 27));

assert(0 == gamma_move(test, 2, 23, 1));

assert(0 == gamma_move(test, 7, 25, 21));

assert(0 == gamma_move(test, 7, 50, 6));

assert(0 == gamma_move(test, 4, 0, 14));

assert(0 == gamma_move(test, 7, 1, 13));

assert(0 == gamma_move(test, 8, 7, 10));

assert(0 == gamma_move(test, 3, 38, 25));

assert(0 == gamma_move(test, 5, 7, 25));

assert(0 == gamma_move(test, 4, 29, 5));

assert(0 == gamma_move(test, 5, 20, 24));

assert(0 == gamma_move(test, 2, 34, 18));

assert(0 == gamma_move(test, 2, 32, 21));

assert(0 == gamma_move(test, 0, 42, 6));

assert(1 == gamma_golden_move(test, 3, 0, 13));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(11 == gamma_busy_fields(test, 6));

assert(1156 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 0, 6, 11));

assert(0 == gamma_move(test, 3, 43, 4));

assert(1 == gamma_move(test, 6, 47, 8));

assert(0 == gamma_move(test, 4, 38, 16));

assert(0 == gamma_move(test, 1, 46, 22));

assert(0 == gamma_move(test, 7, 38, 0));

assert(0 == gamma_move(test, 9, 7, 6));

assert(0 == gamma_move(test, 7, 1, 12));

assert(0 == gamma_move(test, 8, 15, 7));

assert(0 == gamma_move(test, 8, 29, 13));

assert(0 == gamma_move(test, 5, 12, 0));

assert(0 == gamma_move(test, 7, 2, 22));

assert(0 == gamma_move(test, 7, 11, 21));

assert(0 == gamma_move(test, 4, 43, 22));

assert(0 == gamma_move(test, 3, 49, 18));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 7, 47, 3));

assert(0 == gamma_move(test, 3, 30, 7));

assert(0 == gamma_move(test, 0, 13, 15));

assert(0 == gamma_move(test, 4, 46, 12));

assert(0 == gamma_move(test, 6, 42, 21));

assert(0 == gamma_move(test, 2, 9, 7));

assert(0 == gamma_move(test, 6, 47, 21));

assert(0 == gamma_move(test, 7, 39, 5));

assert(0 == gamma_move(test, 6, 28, 19));

assert(0 == gamma_move(test, 6, 18, 23));

assert(0 == gamma_move(test, 5, 36, 22));

assert(0 == gamma_move(test, 3, 17, 20));

assert(0 == gamma_move(test, 5, 22, 8));

assert(0 == gamma_move(test, 2, 19, 12));

assert(0 == gamma_move(test, 4, 37, 15));

assert(11 == gamma_busy_fields(test, 1));

assert(24 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 3, 33, 18));

assert(0 == gamma_move(test, 0, 5, 9));

assert(0 == gamma_move(test, 3, 2, 19));

assert(0 == gamma_move(test, 9, 4, 9));

assert(0 == gamma_move(test, 6, 34, 19));

assert(0 == gamma_move(test, 2, 30, 10));

assert(0 == gamma_move(test, 5, 20, 8));

assert(1 == gamma_move(test, 1, 31, 22));

assert(1 == gamma_move(test, 1, 13, 24));

assert(0 == gamma_move(test, 2, 33, 2));

assert(0 == gamma_move(test, 9, 42, 3));

assert(0 == gamma_move(test, 0, 2, -7));

assert(0 == gamma_move(test, 5, 14, 3));

assert(0 == gamma_move(test, 3, 47, 3));

assert(0 == gamma_move(test, 6, 23, 7));

assert(13 == gamma_busy_fields(test, 1));

assert(27 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(33 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 6, 7, 6));

assert(0 == gamma_move(test, 0, 14, 6));

assert(0 == gamma_move(test, 0, 16, 10));

assert(0 == gamma_move(test, 9, 16, 9));

assert(0 == gamma_move(test, 9, 2, -6));

assert(0 == gamma_move(test, 5, 40, 5));

assert(0 == gamma_move(test, 3, 13, 15));

assert(0 == gamma_move(test, 7, 49, 1));

assert(0 == gamma_move(test, 1, 13, 15));

assert(0 == gamma_move(test, 5, 1, 7));

assert(0 == gamma_move(test, 7, 28, 21));

assert(0 == gamma_move(test, 9, 21, 12));

assert(0 == gamma_move(test, 5, 27, 6));

assert(0 == gamma_move(test, 7, 10, 25));

assert(0 == gamma_move(test, 0, 45, 1));

assert(13 == gamma_busy_fields(test, 1));

assert(27 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(33 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 6, 30, 23));

assert(0 == gamma_move(test, 7, 23, 20));

assert(0 == gamma_move(test, 4, 8, 11));

assert(0 == gamma_move(test, 2, 0, 10));

assert(0 == gamma_move(test, 1, 50, 2));

assert(0 == gamma_move(test, 7, 3, 17));

assert(0 == gamma_move(test, 6, 50, 3));

assert(0 == gamma_move(test, 2, 6, 14));

assert(0 == gamma_move(test, 7, 48, 10));

assert(0 == gamma_move(test, 8, 5, 1));

assert(0 == gamma_move(test, 5, 44, 4));

assert(0 == gamma_move(test, 5, 23, 10));

assert(0 == gamma_move(test, 7, 44, 14));

assert(0 == gamma_move(test, 9, 22, 14));

assert(0 == gamma_move(test, 0, 2, -5));

assert(13 == gamma_busy_fields(test, 1));

assert(27 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(33 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 3, 7, 3));

assert(0 == gamma_move(test, 1, 26, 5));

assert(0 == gamma_move(test, 6, 12, 3));

assert(0 == gamma_move(test, 1, 43, 16));

assert(1 == gamma_move(test, 6, 13, 23));

assert(0 == gamma_move(test, 3, 43, 19));

assert(0 == gamma_move(test, 7, 16, 24));

assert(0 == gamma_move(test, 7, 0, 18));

assert(0 == gamma_move(test, 6, 3, 11));

assert(0 == gamma_move(test, 1, 18, 19));

assert(0 == gamma_move(test, 3, 31, 0));

assert(0 == gamma_move(test, 8, 34, 12));

assert(0 == gamma_move(test, 0, 8, 5));

assert(0 == gamma_move(test, 0, 18, 2));

assert(0 == gamma_move(test, 1, 15, 20));

assert(13 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 6, 5, 15));

assert(0 == gamma_move(test, 6, 2, 4));

assert(0 == gamma_move(test, 6, 22, 19));

assert(0 == gamma_move(test, 9, 2, 6));

assert(0 == gamma_move(test, 1, 43, 19));

assert(0 == gamma_move(test, 5, 21, 18));

assert(0 == gamma_move(test, 8, 28, 8));

assert(0 == gamma_move(test, 2, 6, 18));

assert(0 == gamma_move(test, 0, 40, 2));

assert(0 == gamma_move(test, 6, 43, 14));

assert(0 == gamma_move(test, 2, 6, 21));

assert(0 == gamma_move(test, 9, 39, 2));

assert(0 == gamma_move(test, 9, 1, -5));

assert(0 == gamma_move(test, 8, 14, 1));

assert(0 == gamma_move(test, 1, 50, 24));

assert(13 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(13 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 0, 36, 8));

assert(0 == gamma_move(test, 1, 10, 24));

assert(0 == gamma_move(test, 1, 18, 2));

assert(0 == gamma_move(test, 3, 9, 0));

assert(1 == gamma_move(test, 7, 6, 7));

assert(0 == gamma_move(test, 8, 14, 18));

assert(0 == gamma_move(test, 8, 37, 13));

assert(0 == gamma_move(test, 9, 0, 13));

assert(0 == gamma_move(test, 9, 0, -6));

assert(0 == gamma_move(test, 9, -1, -6));

assert(0 == gamma_move(test, 7, 29, 10));

assert(0 == gamma_move(test, 9, 22, 14));

assert(0 == gamma_move(test, 6, 23, 23));

assert(0 == gamma_move(test, 3, 35, 19));

assert(0 == gamma_move(test, 4, 32, 15));

assert(13 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(14 == gamma_busy_fields(test, 7));

assert(29 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(25 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 2, 41, 24));

assert(0 == gamma_move(test, 4, 35, 24));

assert(0 == gamma_move(test, 6, 8, 5));

assert(0 == gamma_move(test, 8, 47, 5));

assert(0 == gamma_move(test, 6, 47, 6));

assert(1 == gamma_move(test, 8, 2, 4));

assert(0 == gamma_move(test, 5, 30, 14));

assert(0 == gamma_move(test, 6, 36, 15));

assert(0 == gamma_move(test, 2, 19, 0));

assert(0 == gamma_move(test, 8, 1, 19));

assert(0 == gamma_move(test, 7, 38, 19));

assert(0 == gamma_move(test, 3, 38, 8));

assert(1 == gamma_move(test, 7, 7, 7));

assert(0 == gamma_move(test, 0, 18, 14));

assert(0 == gamma_move(test, 6, 9, 13));

assert(13 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(15 == gamma_busy_fields(test, 7));

assert(30 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(13 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 2, 27, 15));

assert(0 == gamma_move(test, 4, 47, 5));

assert(0 == gamma_move(test, 3, 26, 17));

assert(0 == gamma_move(test, 6, 26, 10));

assert(0 == gamma_move(test, 6, 41, 5));

assert(0 == gamma_move(test, 9, 11, 2));

assert(0 == gamma_move(test, 2, 43, 24));

assert(0 == gamma_move(test, 1, 39, 23));

assert(0 == gamma_move(test, 4, 22, 3));

assert(0 == gamma_move(test, 7, 46, 0));

assert(0 == gamma_move(test, 4, 29, 21));

assert(0 == gamma_move(test, 1, 10, 11));

assert(0 == gamma_move(test, 7, 42, 20));

assert(0 == gamma_move(test, 7, 36, 4));

assert(0 == gamma_move(test, 6, 17, 17));

assert(13 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(15 == gamma_busy_fields(test, 7));

assert(30 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(13 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 0, 4, 5));

assert(0 == gamma_move(test, 5, 8, 1));

assert(0 == gamma_move(test, 4, 42, 23));

assert(0 == gamma_move(test, 0, 40, 26));

assert(0 == gamma_move(test, 5, 8, 0));

assert(0 == gamma_move(test, 8, 36, 13));

assert(0 == gamma_move(test, 6, 15, 5));

assert(0 == gamma_move(test, 5, 48, 14));

assert(0 == gamma_move(test, 4, 21, 17));

assert(0 == gamma_move(test, 4, 24, 23));

assert(0 == gamma_move(test, 9, 41, 27));

assert(0 == gamma_move(test, 9, 42, 12));

assert(0 == gamma_move(test, 0, -1, -5));

assert(0 == gamma_move(test, 9, 10, 8));

assert(0 == gamma_move(test, 2, 10, 17));

assert(13 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(10 == gamma_busy_fields(test, 2));

assert(26 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(15 == gamma_busy_fields(test, 3));

assert(35 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 0);
assert(12 == gamma_busy_fields(test, 4));

assert(34 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(10 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(15 == gamma_busy_fields(test, 7));

assert(30 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(13 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


gamma_delete(test);

return 0;

}

