#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 132601790

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 55, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 2) == 0 );

assert( gamma_move(board, 2, 1, 27) == 0 );

assert( gamma_move(board, 3, 1, 49) == 0 );

assert( gamma_move(board, 4, 0, 24) == 1 );

assert( gamma_move(board, 5, 1, 7) == 0 );

assert( gamma_move(board, 6, 1, 39) == 0 );

assert( gamma_move(board, 7, 1, 24) == 0 );

assert( gamma_move(board, 8, 1, 11) == 0 );

assert( gamma_move(board, 1, 0, 2) == 1 );

assert( gamma_move(board, 2, 1, 45) == 0 );

assert( gamma_move(board, 3, 0, 48) == 1 );

assert( gamma_move(board, 4, 0, 37) == 1 );

assert( gamma_move(board, 5, 1, 35) == 0 );

assert( gamma_move(board, 6, 1, 39) == 0 );

assert( gamma_move(board, 7, 0, 12) == 1 );

assert( gamma_move(board, 8, 1, 30) == 0 );

assert( gamma_move(board, 1, 0, 50) == 1 );

assert( gamma_move(board, 2, 1, 20) == 0 );

assert( gamma_move(board, 3, 1, 6) == 0 );

assert( gamma_move(board, 4, 1, 50) == 0 );

assert( gamma_move(board, 5, 1, 0) == 0 );

assert( gamma_move(board, 6, 1, 18) == 0 );

assert( gamma_move(board, 7, 0, 15) == 1 );

assert( gamma_move(board, 8, 0, 17) == 1 );

assert( gamma_move(board, 1, 1, 26) == 0 );

assert( gamma_move(board, 2, 1, 15) == 0 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 0, 28) == 1 );

assert( gamma_move(board, 5, 1, 47) == 0 );

assert( gamma_move(board, 6, 0, 50) == 0 );

assert( gamma_move(board, 7, 0, 45) == 1 );

assert( gamma_move(board, 8, 1, 45) == 0 );

assert( gamma_move(board, 1, 0, 31) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 44 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 0 );

assert( gamma_free_fields(board, 2) == 44 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 44 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 44 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 0 );

assert( gamma_free_fields(board, 5) == 44 );

assert( gamma_golden_move(board, 1, 0, 49) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 44 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 44 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 44 );

assert( gamma_move(board, 2, 0, 48) == 0 );

assert( gamma_move(board, 3, 0, 27) == 1 );

assert( gamma_move(board, 4, 0, 54) == 1 );

assert( gamma_move(board, 5, 1, 45) == 0 );

assert( gamma_move(board, 6, 0, 10) == 1 );

assert( gamma_move(board, 7, 0, 1) == 1 );

assert( gamma_move(board, 8, 0, 1) == 0 );

assert( gamma_move(board, 1, 0, 20) == 1 );

assert( gamma_move(board, 2, 0, 45) == 0 );

assert( gamma_move(board, 3, 0, 18) == 1 );

assert( gamma_move(board, 4, 0, 22) == 0 );

assert( gamma_move(board, 5, 0, 33) == 1 );

assert( gamma_move(board, 6, 1, 2) == 0 );

assert( gamma_move(board, 7, 1, 14) == 0 );

assert( gamma_move(board, 8, 1, 14) == 0 );

assert( gamma_move(board, 1, 1, 33) == 0 );

assert( gamma_move(board, 2, 1, 5) == 0 );

assert( gamma_move(board, 3, 0, 9) == 1 );

assert( gamma_move(board, 4, 0, 9) == 0 );

assert( gamma_move(board, 5, 1, 22) == 0 );

assert( gamma_move(board, 6, 0, 21) == 1 );

assert( gamma_move(board, 7, 0, 43) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert( gamma_move(board, 1, 1, 11) == 0 );

assert( gamma_move(board, 2, 1, 55) == 0 );

assert( gamma_move(board, 3, 1, 12) == 0 );

assert( gamma_move(board, 4, 0, 34) == 0 );

assert( gamma_move(board, 5, 1, 49) == 0 );

assert( gamma_move(board, 6, 1, 37) == 0 );

assert( gamma_move(board, 7, 1, 24) == 0 );

assert( gamma_move(board, 8, 1, 52) == 0 );

assert( gamma_move(board, 1, 0, 46) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 0 );

assert( gamma_free_fields(board, 2) == 35 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 5 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 6 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 35 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 35 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 7 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 35 );

assert( gamma_move(board, 2, 1, 0) == 0 );

assert( gamma_move(board, 3, 1, 42) == 0 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 1, 33) == 0 );

assert( gamma_move(board, 6, 1, 49) == 0 );

assert( gamma_move(board, 7, 0, 23) == 0 );

assert( gamma_move(board, 8, 0, 17) == 0 );

assert( gamma_move(board, 1, 0, 32) == 1 );

assert( gamma_move(board, 2, 0, 17) == 0 );

assert( gamma_move(board, 3, 0, 31) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 1, 48) == 0 );

assert( gamma_move(board, 6, 1, 42) == 0 );

assert( gamma_move(board, 7, 1, 30) == 0 );

assert( gamma_move(board, 8, 0, 22) == 1 );

assert( gamma_move(board, 1, 1, 10) == 0 );

assert( gamma_move(board, 2, 1, 26) == 0 );

assert( gamma_move(board, 3, 1, 55) == 0 );

assert( gamma_move(board, 4, 1, 45) == 0 );

assert( gamma_move(board, 5, 1, 40) == 0 );

assert( gamma_move(board, 6, 1, 14) == 0 );

assert( gamma_move(board, 7, 1, 31) == 0 );

assert( gamma_move(board, 8, 1, 15) == 0 );

assert( gamma_move(board, 1, 0, 21) == 0 );

assert( gamma_move(board, 2, 0, 1) == 0 );

assert( gamma_move(board, 3, 1, 50) == 0 );

assert( gamma_move(board, 4, 1, 44) == 0 );

assert( gamma_move(board, 5, 1, 32) == 0 );

assert( gamma_move(board, 6, 0, 33) == 0 );

assert( gamma_move(board, 7, 1, 13) == 0 );

assert( gamma_move(board, 8, 0, 12) == 0 );

assert( gamma_move(board, 1, 1, 7) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 5 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 0 );

assert( gamma_free_fields(board, 2) == 33 );

assert( gamma_golden_move(board, 1, 0, 53) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 5 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 6 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 33 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 33 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 7 );

assert( gamma_golden_move(board, 1, 0, 33) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 33 );

assert( gamma_move(board, 2, 1, 26) == 0 );

assert( gamma_move(board, 3, 0, 53) == 0 );

assert( gamma_move(board, 4, 1, 25) == 0 );

assert( gamma_move(board, 5, 0, 54) == 0 );

assert( gamma_move(board, 6, 0, 8) == 1 );

assert( gamma_move(board, 7, 0, 51) == 0 );

assert( gamma_move(board, 8, 0, 1) == 0 );

assert( gamma_move(board, 1, 0, 20) == 0 );

assert( gamma_move(board, 2, 1, 29) == 0 );

assert( gamma_move(board, 3, 0, 13) == 0 );

assert( gamma_move(board, 4, 1, 26) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 0, 25) == 1 );

assert( gamma_move(board, 7, 1, 20) == 0 );

assert( gamma_move(board, 8, 1, 9) == 0 );

assert( gamma_move(board, 1, 0, 38) == 0 );

assert( gamma_move(board, 2, 1, 39) == 0 );

assert( gamma_move(board, 3, 0, 55) == 0 );

assert( gamma_move(board, 4, 0, 46) == 0 );

assert( gamma_move(board, 5, 1, 21) == 0 );

assert( gamma_move(board, 6, 0, 31) == 0 );

assert( gamma_move(board, 7, 0, 18) == 0 );

assert( gamma_move(board, 8, 1, 21) == 0 );

assert( gamma_move(board, 1, 0, 39) == 0 );

assert( gamma_move(board, 2, 1, 15) == 0 );

assert( gamma_move(board, 3, 1, 50) == 0 );

assert( gamma_move(board, 4, 0, 48) == 0 );

assert( gamma_move(board, 5, 0, 11) == 1 );

assert( gamma_move(board, 6, 1, 9) == 0 );

assert( gamma_move(board, 7, 0, 9) == 0 );

assert( gamma_move(board, 8, 1, 51) == 0 );

assert( gamma_move(board, 1, 0, 43) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 0 );

assert( gamma_free_fields(board, 2) == 30 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 4 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 5 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 30 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 6 );

assert( gamma_golden_move(board, 1, 1, 39) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 30 );

assert( gamma_move(board, 2, 0, 10) == 0 );

assert( gamma_move(board, 3, 0, 30) == 0 );

assert( gamma_move(board, 4, 0, 43) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 1, 45) == 0 );

assert( gamma_move(board, 7, 0, 16) == 1 );

assert( gamma_move(board, 8, 0, 1) == 0 );

assert( gamma_move(board, 1, 1, 50) == 0 );

assert( gamma_move(board, 2, 1, 40) == 0 );

assert( gamma_move(board, 3, 0, 29) == 0 );

assert( gamma_move(board, 4, 0, 5) == 0 );

assert( gamma_move(board, 5, 0, 36) == 1 );

assert( gamma_move(board, 6, 0, 0) == 0 );

assert( gamma_move(board, 7, 0, 0) == 1 );

assert( gamma_move(board, 8, 0, 0) == 0 );

assert( gamma_move(board, 1, 1, 50) == 0 );

assert( gamma_move(board, 2, 0, 27) == 0 );

assert( gamma_move(board, 3, 0, 28) == 0 );

assert( gamma_move(board, 4, 0, 46) == 0 );

assert( gamma_move(board, 5, 0, 13) == 1 );

assert( gamma_move(board, 6, 0, 10) == 0 );

assert( gamma_move(board, 7, 1, 10) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert( gamma_move(board, 1, 0, 4) == 0 );

assert( gamma_move(board, 2, 1, 51) == 0 );

assert( gamma_move(board, 3, 0, 29) == 0 );

assert( gamma_move(board, 4, 1, 17) == 0 );

assert( gamma_move(board, 5, 1, 18) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 0, 3) == 0 );

assert( gamma_move(board, 8, 0, 39) == 1 );

assert( gamma_move(board, 1, 0, 40) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 0 );

assert( gamma_free_fields(board, 2) == 25 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 4 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 25 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 3 );

assert( gamma_golden_move(board, 1, 0, 48) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 25 );

assert( gamma_move(board, 2, 0, 12) == 0 );

assert( gamma_move(board, 3, 1, 35) == 0 );

assert( gamma_move(board, 4, 0, 4) == 0 );

assert( gamma_move(board, 5, 0, 18) == 0 );

assert( gamma_move(board, 6, 0, 27) == 0 );

assert( gamma_move(board, 7, 0, 28) == 0 );

assert( gamma_move(board, 8, 1, 15) == 0 );

assert( gamma_move(board, 1, 0, 14) == 0 );

assert( gamma_move(board, 2, 1, 30) == 0 );

assert( gamma_move(board, 3, 1, 12) == 0 );

assert( gamma_move(board, 4, 1, 11) == 0 );

assert( gamma_move(board, 5, 1, 0) == 0 );

assert( gamma_move(board, 6, 0, 8) == 0 );

assert( gamma_move(board, 7, 0, 43) == 0 );

assert( gamma_move(board, 8, 1, 16) == 0 );

assert( gamma_move(board, 1, 0, 25) == 0 );

assert( gamma_move(board, 2, 1, 18) == 0 );

assert( gamma_move(board, 3, 0, 34) == 0 );

assert( gamma_move(board, 4, 0, 16) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 0, 28) == 0 );

assert( gamma_move(board, 7, 1, 23) == 0 );

assert( gamma_move(board, 8, 0, 0) == 0 );

assert( gamma_move(board, 1, 0, 9) == 0 );

assert( gamma_move(board, 2, 0, 12) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 0, 30) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 1, 1) == 0 );

assert( gamma_move(board, 7, 0, 4) == 0 );

assert( gamma_move(board, 8, 1, 40) == 0 );

assert( gamma_move(board, 1, 0, 3) == 1 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 7 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 0 );

assert( gamma_free_fields(board, 2) == 24 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 4 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 24 );

assert( gamma_golden_move(board, 1, 0, 31) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 24 );

assert( gamma_move(board, 2, 1, 23) == 0 );

assert( gamma_move(board, 3, 1, 34) == 0 );

assert( gamma_move(board, 4, 0, 6) == 0 );

assert( gamma_move(board, 5, 1, 52) == 0 );

assert( gamma_move(board, 6, 1, 5) == 0 );

assert( gamma_move(board, 7, 1, 37) == 0 );

assert( gamma_move(board, 8, 1, 12) == 0 );

assert( gamma_move(board, 1, 1, 31) == 0 );

assert( gamma_move(board, 2, 1, 5) == 0 );

assert( gamma_move(board, 3, 1, 45) == 0 );

assert( gamma_move(board, 4, 0, 31) == 0 );

assert( gamma_move(board, 5, 1, 15) == 0 );

assert( gamma_move(board, 6, 0, 9) == 0 );

assert( gamma_move(board, 7, 1, 10) == 0 );

assert( gamma_move(board, 8, 0, 21) == 0 );

assert( gamma_move(board, 1, 1, 12) == 0 );

assert( gamma_move(board, 2, 1, 41) == 0 );

assert( gamma_move(board, 3, 0, 47) == 1 );

assert( gamma_move(board, 4, 0, 53) == 1 );

assert( gamma_move(board, 5, 0, 43) == 1 );

assert( gamma_move(board, 6, 0, 14) == 0 );

assert( gamma_move(board, 7, 1, 7) == 0 );

assert( gamma_move(board, 8, 0, 23) == 1 );

assert( gamma_move(board, 1, 1, 34) == 0 );

assert( gamma_move(board, 2, 0, 27) == 0 );

assert( gamma_move(board, 3, 0, 34) == 0 );

assert( gamma_move(board, 4, 0, 16) == 0 );

assert( gamma_move(board, 5, 0, 13) == 0 );

assert( gamma_move(board, 6, 0, 46) == 0 );

assert( gamma_move(board, 7, 0, 24) == 0 );

assert( gamma_move(board, 8, 0, 19) == 1 );

assert( gamma_move(board, 1, 0, 24) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 7 );

assert( gamma_free_fields(board, 1) == 5 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 0 );

assert( gamma_free_fields(board, 2) == 19 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 36) == 0 );

assert( gamma_move(board, 3, 0, 6) == 0 );

assert( gamma_move(board, 4, 0, 27) == 0 );

assert( gamma_move(board, 5, 0, 24) == 0 );

assert( gamma_move(board, 6, 0, 50) == 0 );

assert( gamma_move(board, 7, 1, 16) == 0 );

assert( gamma_move(board, 8, 0, 25) == 0 );

assert( gamma_move(board, 1, 0, 28) == 0 );

assert( gamma_move(board, 2, 1, 7) == 0 );

assert( gamma_move(board, 3, 0, 48) == 0 );

assert( gamma_move(board, 4, 1, 2) == 0 );

assert( gamma_move(board, 5, 1, 1) == 0 );

assert( gamma_move(board, 6, 0, 43) == 0 );

assert( gamma_move(board, 7, 0, 54) == 0 );

assert( gamma_move(board, 8, 1, 24) == 0 );

assert( gamma_move(board, 1, 0, 11) == 0 );

assert( gamma_move(board, 2, 0, 34) == 1 );

assert( gamma_move(board, 3, 1, 23) == 0 );

assert( gamma_move(board, 4, 1, 55) == 0 );

assert( gamma_move(board, 5, 1, 7) == 0 );

assert( gamma_move(board, 6, 1, 46) == 0 );

assert( gamma_move(board, 7, 1, 11) == 0 );

assert( gamma_move(board, 8, 0, 5) == 0 );

assert( gamma_move(board, 1, 1, 26) == 0 );

assert( gamma_move(board, 2, 1, 10) == 0 );

assert( gamma_move(board, 3, 0, 47) == 0 );

assert( gamma_move(board, 4, 1, 12) == 0 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 0, 26) == 1 );

assert( gamma_move(board, 7, 1, 42) == 0 );

assert( gamma_move(board, 8, 1, 23) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 7 );

assert( gamma_free_fields(board, 1) == 4 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 1 );

assert( gamma_free_fields(board, 2) == 17 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 2 );





gamma_delete(board);



    return 0;

}

