#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 955899481

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 55, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 40) == 0 );

assert( gamma_move(board, 2, 1, 16) == 0 );

assert( gamma_move(board, 3, 1, 51) == 0 );

assert( gamma_move(board, 4, 0, 1) == 1 );

assert( gamma_move(board, 5, 1, 40) == 0 );

assert( gamma_move(board, 6, 0, 2) == 1 );

assert( gamma_move(board, 7, 1, 34) == 0 );

assert( gamma_move(board, 8, 1, 1) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 1, 12) == 0 );

assert( gamma_move(board, 3, 1, 44) == 0 );

assert( gamma_move(board, 4, 0, 45) == 1 );

assert( gamma_move(board, 5, 0, 43) == 1 );

assert( gamma_move(board, 6, 1, 22) == 0 );

assert( gamma_move(board, 7, 0, 23) == 1 );

assert( gamma_move(board, 8, 0, 32) == 1 );

assert( gamma_move(board, 1, 0, 52) == 1 );

assert( gamma_move(board, 2, 1, 30) == 0 );

assert( gamma_move(board, 3, 1, 30) == 0 );

assert( gamma_move(board, 4, 1, 55) == 0 );

assert( gamma_move(board, 5, 1, 46) == 0 );

assert( gamma_move(board, 6, 0, 27) == 1 );

assert( gamma_move(board, 7, 0, 13) == 1 );

assert( gamma_move(board, 8, 0, 18) == 1 );

assert( gamma_move(board, 1, 0, 23) == 0 );

assert( gamma_move(board, 2, 0, 5) == 1 );

assert( gamma_move(board, 3, 1, 49) == 0 );

assert( gamma_move(board, 4, 1, 21) == 0 );

assert( gamma_move(board, 5, 0, 31) == 1 );

assert( gamma_move(board, 6, 0, 2) == 0 );

assert( gamma_move(board, 7, 0, 26) == 1 );

assert( gamma_move(board, 8, 1, 43) == 0 );

assert( gamma_move(board, 1, 1, 18) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 42 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 1 );

assert( gamma_free_fields(board, 2) == 42 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 0 );

assert( gamma_free_fields(board, 3) == 42 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 2 );

assert( gamma_free_fields(board, 4) == 42 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 42 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 42 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 42 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 42 );

assert( gamma_move(board, 2, 0, 47) == 1 );

assert( gamma_move(board, 3, 1, 35) == 0 );

assert( gamma_move(board, 4, 1, 17) == 0 );

assert( gamma_move(board, 5, 0, 6) == 1 );

assert( gamma_move(board, 6, 0, 44) == 1 );

assert( gamma_move(board, 7, 0, 40) == 1 );

assert( gamma_move(board, 8, 1, 32) == 0 );

assert( gamma_move(board, 1, 0, 23) == 0 );

assert( gamma_move(board, 2, 1, 52) == 0 );

assert( gamma_move(board, 3, 0, 51) == 1 );

assert( gamma_move(board, 4, 0, 53) == 1 );

assert( gamma_move(board, 5, 0, 22) == 1 );

assert( gamma_move(board, 6, 0, 6) == 0 );

assert( gamma_move(board, 7, 1, 16) == 0 );

assert( gamma_move(board, 8, 0, 36) == 1 );

assert( gamma_move(board, 1, 0, 37) == 1 );

assert( gamma_move(board, 2, 0, 20) == 1 );

assert( gamma_move(board, 3, 1, 46) == 0 );

assert( gamma_move(board, 4, 1, 46) == 0 );

assert( gamma_move(board, 5, 1, 26) == 0 );

assert( gamma_move(board, 6, 0, 20) == 0 );

assert( gamma_move(board, 7, 0, 39) == 1 );

assert( gamma_move(board, 8, 1, 21) == 0 );

assert( gamma_move(board, 1, 1, 25) == 0 );

assert( gamma_move(board, 2, 1, 12) == 0 );

assert( gamma_move(board, 3, 1, 35) == 0 );

assert( gamma_move(board, 4, 1, 19) == 0 );

assert( gamma_move(board, 5, 0, 42) == 1 );

assert( gamma_move(board, 6, 1, 32) == 0 );

assert( gamma_move(board, 7, 1, 36) == 0 );

assert( gamma_move(board, 8, 0, 5) == 0 );

assert( gamma_move(board, 1, 0, 31) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 30 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 30 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 30 );

assert( gamma_golden_move(board, 1, 0, 28) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 30 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 30 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 6 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 30 );

assert( gamma_move(board, 2, 0, 20) == 0 );

assert( gamma_move(board, 3, 1, 9) == 0 );

assert( gamma_move(board, 4, 0, 49) == 1 );

assert( gamma_move(board, 5, 0, 52) == 0 );

assert( gamma_move(board, 6, 0, 35) == 1 );

assert( gamma_move(board, 7, 0, 16) == 0 );

assert( gamma_move(board, 8, 1, 39) == 0 );

assert( gamma_move(board, 1, 1, 37) == 0 );

assert( gamma_move(board, 2, 0, 45) == 0 );

assert( gamma_move(board, 3, 0, 31) == 0 );

assert( gamma_move(board, 4, 0, 39) == 0 );

assert( gamma_move(board, 5, 1, 38) == 0 );

assert( gamma_move(board, 6, 0, 21) == 0 );

assert( gamma_move(board, 7, 0, 30) == 0 );

assert( gamma_move(board, 8, 0, 51) == 0 );

assert( gamma_move(board, 1, 1, 36) == 0 );

assert( gamma_move(board, 2, 1, 28) == 0 );

assert( gamma_move(board, 3, 1, 4) == 0 );

assert( gamma_move(board, 4, 1, 33) == 0 );

assert( gamma_move(board, 5, 0, 7) == 1 );

assert( gamma_move(board, 6, 1, 11) == 0 );

assert( gamma_move(board, 7, 0, 46) == 0 );

assert( gamma_move(board, 8, 0, 12) == 1 );

assert( gamma_move(board, 1, 0, 36) == 0 );

assert( gamma_move(board, 2, 1, 43) == 0 );

assert( gamma_move(board, 3, 1, 34) == 0 );

assert( gamma_move(board, 4, 0, 6) == 0 );

assert( gamma_move(board, 5, 0, 32) == 0 );

assert( gamma_move(board, 6, 0, 51) == 0 );

assert( gamma_move(board, 7, 0, 39) == 0 );

assert( gamma_move(board, 8, 0, 37) == 0 );

assert( gamma_move(board, 1, 1, 36) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 26 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 26 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 26 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 5 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 6 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 5 );

assert( gamma_golden_move(board, 1, 0, 13) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 1, 16) == 0 );

assert( gamma_move(board, 3, 0, 43) == 0 );

assert( gamma_move(board, 4, 0, 51) == 0 );

assert( gamma_move(board, 5, 0, 51) == 0 );

assert( gamma_move(board, 6, 0, 34) == 1 );

assert( gamma_move(board, 7, 1, 47) == 0 );

assert( gamma_move(board, 8, 0, 55) == 0 );

assert( gamma_move(board, 1, 1, 23) == 0 );

assert( gamma_move(board, 2, 0, 45) == 0 );

assert( gamma_move(board, 3, 1, 24) == 0 );

assert( gamma_move(board, 4, 1, 31) == 0 );

assert( gamma_move(board, 5, 1, 33) == 0 );

assert( gamma_move(board, 6, 0, 18) == 0 );

assert( gamma_move(board, 7, 1, 26) == 0 );

assert( gamma_move(board, 8, 0, 4) == 0 );

assert( gamma_move(board, 1, 1, 32) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 39) == 0 );

assert( gamma_move(board, 4, 1, 54) == 0 );

assert( gamma_move(board, 5, 1, 3) == 0 );

assert( gamma_move(board, 6, 0, 37) == 0 );

assert( gamma_move(board, 7, 1, 10) == 0 );

assert( gamma_move(board, 8, 1, 42) == 0 );

assert( gamma_move(board, 1, 0, 28) == 1 );

assert( gamma_move(board, 2, 0, 8) == 1 );

assert( gamma_move(board, 3, 1, 18) == 0 );

assert( gamma_move(board, 4, 1, 37) == 0 );

assert( gamma_move(board, 5, 0, 28) == 0 );

assert( gamma_move(board, 6, 0, 45) == 0 );

assert( gamma_move(board, 7, 0, 54) == 1 );

assert( gamma_move(board, 8, 0, 1) == 0 );

assert( gamma_move(board, 1, 0, 29) == 1 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 6 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 21 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 6 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 1, 42) == 0 );

assert( gamma_move(board, 4, 1, 51) == 0 );

assert( gamma_move(board, 5, 0, 14) == 0 );

assert( gamma_move(board, 6, 1, 47) == 0 );

assert( gamma_move(board, 7, 0, 15) == 0 );

assert( gamma_move(board, 8, 1, 19) == 0 );

assert( gamma_move(board, 1, 1, 27) == 0 );

assert( gamma_move(board, 2, 0, 9) == 1 );

assert( gamma_move(board, 3, 0, 17) == 1 );

assert( gamma_move(board, 4, 1, 20) == 0 );

assert( gamma_move(board, 5, 1, 38) == 0 );

assert( gamma_move(board, 6, 1, 43) == 0 );

assert( gamma_move(board, 7, 1, 15) == 0 );

assert( gamma_move(board, 8, 1, 5) == 0 );

assert( gamma_move(board, 1, 1, 46) == 0 );

assert( gamma_move(board, 2, 0, 42) == 0 );

assert( gamma_move(board, 3, 1, 11) == 0 );

assert( gamma_move(board, 4, 0, 48) == 1 );

assert( gamma_move(board, 5, 0, 31) == 0 );

assert( gamma_move(board, 6, 1, 43) == 0 );

assert( gamma_move(board, 7, 1, 15) == 0 );

assert( gamma_move(board, 8, 1, 25) == 0 );

assert( gamma_move(board, 1, 1, 17) == 0 );

assert( gamma_move(board, 2, 0, 10) == 1 );

assert( gamma_move(board, 3, 1, 52) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 0, 22) == 0 );

assert( gamma_move(board, 6, 1, 42) == 0 );

assert( gamma_move(board, 7, 0, 8) == 0 );

assert( gamma_move(board, 8, 1, 45) == 0 );

assert( gamma_move(board, 1, 1, 3) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 3 );

assert( gamma_golden_move(board, 1, 0, 3) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 6 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 17 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 6 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 3 );

assert( gamma_move(board, 2, 0, 51) == 0 );

assert( gamma_move(board, 3, 0, 48) == 0 );

assert( gamma_move(board, 4, 1, 29) == 0 );

assert( gamma_move(board, 5, 1, 29) == 0 );

assert( gamma_move(board, 6, 0, 37) == 0 );

assert( gamma_move(board, 7, 1, 13) == 0 );

assert( gamma_move(board, 8, 0, 26) == 0 );

assert( gamma_move(board, 1, 1, 45) == 0 );

assert( gamma_move(board, 2, 1, 53) == 0 );

assert( gamma_move(board, 3, 1, 50) == 0 );

assert( gamma_move(board, 4, 1, 31) == 0 );

assert( gamma_move(board, 5, 0, 49) == 0 );

assert( gamma_move(board, 6, 0, 49) == 0 );

assert( gamma_move(board, 7, 1, 43) == 0 );

assert( gamma_move(board, 8, 0, 15) == 0 );

assert( gamma_move(board, 1, 1, 8) == 0 );

assert( gamma_move(board, 2, 1, 33) == 0 );

assert( gamma_move(board, 3, 1, 32) == 0 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 1, 54) == 0 );

assert( gamma_move(board, 6, 0, 29) == 0 );

assert( gamma_move(board, 7, 1, 46) == 0 );

assert( gamma_move(board, 8, 1, 14) == 0 );

assert( gamma_move(board, 1, 1, 8) == 0 );

assert( gamma_move(board, 2, 1, 23) == 0 );

assert( gamma_move(board, 3, 0, 14) == 1 );

assert( gamma_move(board, 4, 1, 55) == 0 );

assert( gamma_move(board, 5, 0, 41) == 1 );

assert( gamma_move(board, 6, 1, 47) == 0 );

assert( gamma_move(board, 7, 0, 27) == 0 );

assert( gamma_move(board, 8, 1, 46) == 0 );

assert( gamma_move(board, 1, 1, 22) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 2 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 6 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 15 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 7 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 2 );

assert( gamma_golden_move(board, 1, 0, 35) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 3 );

assert( gamma_golden_move(board, 1, 0, 8) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 3 );

assert( gamma_move(board, 2, 1, 25) == 0 );

assert( gamma_move(board, 3, 0, 1) == 0 );

assert( gamma_move(board, 4, 0, 49) == 0 );

assert( gamma_move(board, 5, 0, 8) == 0 );

assert( gamma_move(board, 6, 1, 17) == 0 );

assert( gamma_move(board, 7, 0, 54) == 0 );

assert( gamma_move(board, 8, 1, 31) == 0 );

assert( gamma_move(board, 1, 1, 49) == 0 );

assert( gamma_move(board, 2, 0, 33) == 0 );

assert( gamma_move(board, 3, 0, 22) == 0 );

assert( gamma_move(board, 4, 0, 49) == 0 );

assert( gamma_move(board, 5, 0, 25) == 0 );

assert( gamma_move(board, 6, 1, 1) == 0 );

assert( gamma_move(board, 7, 0, 32) == 0 );

assert( gamma_move(board, 8, 1, 28) == 0 );

assert( gamma_move(board, 1, 1, 34) == 0 );

assert( gamma_move(board, 2, 1, 3) == 0 );

assert( gamma_move(board, 3, 0, 37) == 0 );

assert( gamma_move(board, 4, 0, 10) == 0 );

assert( gamma_move(board, 5, 1, 21) == 0 );

assert( gamma_move(board, 6, 0, 55) == 0 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 0, 42) == 0 );

assert( gamma_move(board, 1, 1, 38) == 0 );

assert( gamma_move(board, 2, 0, 52) == 0 );

assert( gamma_move(board, 3, 0, 53) == 0 );

assert( gamma_move(board, 4, 0, 11) == 0 );

assert( gamma_move(board, 5, 1, 30) == 0 );

assert( gamma_move(board, 6, 0, 14) == 0 );

assert( gamma_move(board, 7, 1, 29) == 0 );

assert( gamma_move(board, 8, 1, 0) == 0 );

assert( gamma_move(board, 1, 1, 10) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 2 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 6 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 15 );

assert( gamma_golden_move(board, 1, 1, 48) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert( gamma_golden_move(board, 1, 1, 41) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 7 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 3 );

assert( gamma_move(board, 2, 0, 13) == 0 );

assert( gamma_move(board, 3, 0, 30) == 1 );

assert( gamma_move(board, 4, 0, 53) == 0 );

assert( gamma_move(board, 5, 1, 12) == 0 );

assert( gamma_move(board, 6, 0, 14) == 0 );

assert( gamma_move(board, 7, 1, 44) == 0 );

assert( gamma_move(board, 8, 1, 21) == 0 );

assert( gamma_move(board, 1, 0, 9) == 0 );

assert( gamma_move(board, 2, 1, 49) == 0 );

assert( gamma_move(board, 3, 0, 34) == 0 );

assert( gamma_move(board, 4, 0, 32) == 0 );

assert( gamma_move(board, 5, 1, 15) == 0 );

assert( gamma_move(board, 6, 0, 50) == 0 );

assert( gamma_move(board, 7, 0, 44) == 0 );

assert( gamma_move(board, 8, 0, 43) == 0 );

assert( gamma_move(board, 1, 1, 36) == 0 );

assert( gamma_move(board, 2, 0, 11) == 1 );

assert( gamma_move(board, 3, 1, 1) == 0 );

assert( gamma_move(board, 4, 1, 42) == 0 );

assert( gamma_move(board, 5, 1, 34) == 0 );

assert( gamma_move(board, 6, 0, 4) == 0 );

assert( gamma_move(board, 7, 1, 26) == 0 );

assert( gamma_move(board, 8, 0, 33) == 1 );

assert( gamma_move(board, 1, 0, 27) == 0 );

assert( gamma_move(board, 2, 1, 45) == 0 );

assert( gamma_move(board, 3, 0, 36) == 0 );

assert( gamma_move(board, 4, 1, 22) == 0 );

assert( gamma_move(board, 5, 0, 33) == 0 );

assert( gamma_move(board, 6, 0, 19) == 0 );

assert( gamma_move(board, 7, 0, 4) == 0 );

assert( gamma_move(board, 8, 0, 16) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 1 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 7 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert( gamma_golden_move(board, 8, 0, 31) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 6 );

assert( gamma_free_fields(board, 5) == 12 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 0);
assert( gamma_busy_fields(board, 8) == 6 );

assert( gamma_free_fields(board, 8) == 1 );





gamma_delete(board);



    return 0;

}

