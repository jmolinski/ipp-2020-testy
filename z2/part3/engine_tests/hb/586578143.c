#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 586578143

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 38, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 0, 30) == 1 );

assert( gamma_move(board, 3, 0, 27) == 1 );

assert( gamma_move(board, 4, 1, 15) == 0 );

assert( gamma_move(board, 5, 1, 7) == 0 );

assert( gamma_move(board, 6, 0, 24) == 1 );

assert( gamma_move(board, 7, 0, 0) == 1 );

assert( gamma_move(board, 8, 1, 17) == 0 );

assert( gamma_move(board, 1, 1, 19) == 0 );

assert( gamma_move(board, 2, 0, 26) == 1 );

assert( gamma_move(board, 3, 0, 31) == 1 );

assert( gamma_move(board, 4, 1, 35) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 1, 4) == 0 );

assert( gamma_move(board, 7, 0, 16) == 1 );

assert( gamma_move(board, 8, 0, 8) == 1 );

assert( gamma_move(board, 1, 1, 26) == 0 );

assert( gamma_move(board, 2, 1, 19) == 0 );

assert( gamma_move(board, 3, 1, 15) == 0 );

assert( gamma_move(board, 4, 1, 26) == 0 );

assert( gamma_move(board, 5, 0, 34) == 1 );

assert( gamma_move(board, 6, 1, 36) == 0 );

assert( gamma_move(board, 7, 1, 8) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert( gamma_move(board, 1, 1, 10) == 0 );

assert( gamma_move(board, 2, 0, 9) == 1 );

assert( gamma_move(board, 3, 0, 28) == 1 );

assert( gamma_move(board, 4, 0, 9) == 0 );

assert( gamma_move(board, 5, 1, 35) == 0 );

assert( gamma_move(board, 6, 0, 0) == 0 );

assert( gamma_move(board, 7, 0, 34) == 0 );

assert( gamma_move(board, 8, 0, 37) == 1 );

assert( gamma_move(board, 1, 1, 11) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 0 );

assert( gamma_free_fields(board, 1) == 26 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 26 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 26 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 0 );

assert( gamma_free_fields(board, 4) == 26 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 26 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 1 );

assert( gamma_free_fields(board, 6) == 26 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 26 );

assert( gamma_golden_move(board, 1, 1, 14) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 26 );

assert( gamma_move(board, 2, 1, 22) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 1, 36) == 0 );

assert( gamma_move(board, 5, 1, 5) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 1, 27) == 0 );

assert( gamma_move(board, 8, 0, 23) == 1 );

assert( gamma_move(board, 1, 1, 21) == 0 );

assert( gamma_move(board, 2, 0, 19) == 1 );

assert( gamma_move(board, 3, 1, 24) == 0 );

assert( gamma_move(board, 4, 1, 22) == 0 );

assert( gamma_move(board, 5, 1, 8) == 0 );

assert( gamma_move(board, 6, 1, 26) == 0 );

assert( gamma_move(board, 7, 1, 6) == 0 );

assert( gamma_move(board, 8, 1, 31) == 0 );

assert( gamma_move(board, 1, 1, 19) == 0 );

assert( gamma_move(board, 2, 0, 22) == 0 );

assert( gamma_move(board, 3, 1, 13) == 0 );

assert( gamma_move(board, 4, 0, 33) == 1 );

assert( gamma_move(board, 5, 1, 12) == 0 );

assert( gamma_move(board, 6, 0, 16) == 0 );

assert( gamma_move(board, 7, 1, 27) == 0 );

assert( gamma_move(board, 8, 1, 6) == 0 );

assert( gamma_move(board, 1, 0, 16) == 0 );

assert( gamma_move(board, 2, 0, 30) == 0 );

assert( gamma_move(board, 3, 0, 16) == 0 );

assert( gamma_move(board, 4, 1, 9) == 0 );

assert( gamma_move(board, 5, 1, 17) == 0 );

assert( gamma_move(board, 6, 0, 20) == 1 );

assert( gamma_move(board, 7, 0, 17) == 1 );

assert( gamma_move(board, 8, 1, 24) == 0 );

assert( gamma_move(board, 1, 1, 2) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 0 );

assert( gamma_free_fields(board, 1) == 21 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 21 );

assert( gamma_golden_move(board, 1, 0, 6) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 21 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 21 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 21 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 21 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 21 );

assert( gamma_move(board, 2, 0, 16) == 0 );

assert( gamma_move(board, 3, 1, 18) == 0 );

assert( gamma_move(board, 4, 0, 22) == 1 );

assert( gamma_move(board, 5, 1, 1) == 0 );

assert( gamma_move(board, 6, 0, 36) == 1 );

assert( gamma_move(board, 7, 1, 21) == 0 );

assert( gamma_move(board, 8, 1, 5) == 0 );

assert( gamma_move(board, 1, 0, 38) == 0 );

assert( gamma_move(board, 2, 0, 19) == 0 );

assert( gamma_move(board, 3, 0, 35) == 1 );

assert( gamma_move(board, 4, 0, 28) == 0 );

assert( gamma_move(board, 5, 0, 17) == 0 );

assert( gamma_move(board, 6, 0, 31) == 0 );

assert( gamma_move(board, 7, 1, 1) == 0 );

assert( gamma_move(board, 8, 1, 24) == 0 );

assert( gamma_move(board, 1, 1, 33) == 0 );

assert( gamma_move(board, 2, 0, 22) == 0 );

assert( gamma_move(board, 3, 1, 5) == 0 );

assert( gamma_move(board, 4, 0, 5) == 1 );

assert( gamma_move(board, 5, 1, 1) == 0 );

assert( gamma_move(board, 6, 1, 33) == 0 );

assert( gamma_move(board, 7, 1, 2) == 0 );

assert( gamma_move(board, 8, 0, 24) == 0 );

assert( gamma_move(board, 1, 0, 28) == 0 );

assert( gamma_move(board, 2, 1, 22) == 0 );

assert( gamma_move(board, 3, 1, 7) == 0 );

assert( gamma_move(board, 4, 0, 18) == 1 );

assert( gamma_move(board, 5, 1, 20) == 0 );

assert( gamma_move(board, 6, 1, 27) == 0 );

assert( gamma_move(board, 7, 0, 0) == 0 );

assert( gamma_move(board, 8, 0, 21) == 1 );

assert( gamma_move(board, 1, 1, 31) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 0 );

assert( gamma_free_fields(board, 1) == 15 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 15 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 15 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 15 );

assert( gamma_golden_move(board, 1, 1, 29) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 15 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 1 );

assert( gamma_move(board, 2, 1, 34) == 0 );

assert( gamma_move(board, 3, 1, 28) == 0 );

assert( gamma_move(board, 4, 1, 35) == 0 );

assert( gamma_move(board, 5, 1, 11) == 0 );

assert( gamma_move(board, 6, 0, 10) == 1 );

assert( gamma_move(board, 7, 0, 14) == 1 );

assert( gamma_move(board, 8, 1, 23) == 0 );

assert( gamma_move(board, 1, 1, 25) == 0 );

assert( gamma_move(board, 2, 0, 32) == 0 );

assert( gamma_move(board, 3, 1, 9) == 0 );

assert( gamma_move(board, 4, 0, 8) == 0 );

assert( gamma_move(board, 5, 1, 34) == 0 );

assert( gamma_move(board, 6, 0, 19) == 0 );

assert( gamma_move(board, 7, 0, 13) == 1 );

assert( gamma_move(board, 8, 1, 29) == 0 );

assert( gamma_move(board, 1, 0, 8) == 0 );

assert( gamma_move(board, 2, 0, 23) == 0 );

assert( gamma_move(board, 3, 0, 25) == 1 );

assert( gamma_move(board, 4, 0, 10) == 0 );

assert( gamma_move(board, 5, 0, 29) == 1 );

assert( gamma_move(board, 6, 1, 18) == 0 );

assert( gamma_move(board, 7, 0, 27) == 0 );

assert( gamma_move(board, 8, 1, 30) == 0 );

assert( gamma_move(board, 1, 0, 11) == 1 );

assert( gamma_move(board, 2, 0, 26) == 0 );

assert( gamma_move(board, 3, 1, 0) == 0 );

assert( gamma_move(board, 4, 0, 1) == 0 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 0, 17) == 0 );

assert( gamma_move(board, 7, 0, 1) == 1 );

assert( gamma_move(board, 8, 0, 31) == 0 );

assert( gamma_move(board, 1, 1, 15) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 8 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 8 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 8 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 1 );

assert( gamma_move(board, 2, 1, 12) == 0 );

assert( gamma_move(board, 3, 0, 21) == 0 );

assert( gamma_move(board, 4, 0, 20) == 0 );

assert( gamma_move(board, 5, 1, 23) == 0 );

assert( gamma_move(board, 6, 0, 0) == 0 );

assert( gamma_move(board, 7, 0, 7) == 1 );

assert( gamma_move(board, 8, 0, 11) == 0 );

assert( gamma_move(board, 1, 0, 16) == 0 );

assert( gamma_move(board, 2, 0, 24) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 0, 13) == 0 );

assert( gamma_move(board, 5, 0, 13) == 0 );

assert( gamma_move(board, 6, 0, 31) == 0 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 0, 4) == 0 );

assert( gamma_move(board, 1, 0, 0) == 0 );

assert( gamma_move(board, 2, 1, 25) == 0 );

assert( gamma_move(board, 3, 1, 31) == 0 );

assert( gamma_move(board, 4, 0, 12) == 0 );

assert( gamma_move(board, 5, 0, 37) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 0, 7) == 0 );

assert( gamma_move(board, 8, 1, 15) == 0 );

assert( gamma_move(board, 1, 0, 19) == 0 );

assert( gamma_move(board, 2, 0, 8) == 0 );

assert( gamma_move(board, 3, 1, 38) == 0 );

assert( gamma_move(board, 4, 0, 8) == 0 );

assert( gamma_move(board, 5, 0, 27) == 0 );

assert( gamma_move(board, 6, 0, 32) == 0 );

assert( gamma_move(board, 7, 0, 32) == 0 );

assert( gamma_move(board, 8, 1, 30) == 0 );

assert( gamma_move(board, 1, 0, 27) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 7 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 7 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 7 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 1, 16) == 0 );

assert( gamma_move(board, 3, 0, 28) == 0 );

assert( gamma_move(board, 4, 0, 20) == 0 );

assert( gamma_move(board, 5, 1, 27) == 0 );

assert( gamma_move(board, 6, 1, 3) == 0 );

assert( gamma_move(board, 7, 0, 3) == 0 );

assert( gamma_move(board, 8, 1, 10) == 0 );

assert( gamma_move(board, 1, 0, 20) == 0 );

assert( gamma_move(board, 2, 0, 20) == 0 );

assert( gamma_move(board, 3, 1, 31) == 0 );

assert( gamma_move(board, 4, 0, 4) == 1 );

assert( gamma_move(board, 5, 0, 11) == 0 );

assert( gamma_move(board, 6, 0, 15) == 0 );

assert( gamma_move(board, 7, 1, 3) == 0 );

assert( gamma_move(board, 8, 0, 8) == 0 );

assert( gamma_move(board, 1, 0, 4) == 0 );

assert( gamma_move(board, 2, 1, 23) == 0 );

assert( gamma_move(board, 3, 1, 12) == 0 );

assert( gamma_move(board, 4, 1, 35) == 0 );

assert( gamma_move(board, 5, 1, 8) == 0 );

assert( gamma_move(board, 6, 1, 15) == 0 );

assert( gamma_move(board, 7, 0, 30) == 0 );

assert( gamma_move(board, 8, 0, 7) == 0 );

assert( gamma_move(board, 1, 1, 22) == 0 );

assert( gamma_move(board, 2, 1, 32) == 0 );

assert( gamma_move(board, 3, 1, 28) == 0 );

assert( gamma_move(board, 4, 0, 38) == 0 );

assert( gamma_move(board, 5, 0, 8) == 0 );

assert( gamma_move(board, 6, 0, 35) == 0 );

assert( gamma_move(board, 7, 1, 11) == 0 );

assert( gamma_move(board, 8, 0, 12) == 0 );

assert( gamma_move(board, 1, 1, 37) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 6 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 0 );

assert( gamma_golden_move(board, 1, 1, 9) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 7 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 1, 19) == 0 );

assert( gamma_move(board, 3, 1, 11) == 0 );

assert( gamma_move(board, 4, 0, 11) == 0 );

assert( gamma_move(board, 5, 0, 9) == 0 );

assert( gamma_move(board, 6, 1, 37) == 0 );

assert( gamma_move(board, 7, 0, 24) == 0 );

assert( gamma_move(board, 8, 0, 22) == 0 );

assert( gamma_move(board, 1, 0, 24) == 0 );

assert( gamma_move(board, 2, 0, 9) == 0 );

assert( gamma_move(board, 3, 1, 13) == 0 );

assert( gamma_move(board, 4, 0, 3) == 1 );

assert( gamma_move(board, 5, 1, 32) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 0, 2) == 1 );

assert( gamma_move(board, 8, 0, 25) == 0 );

assert( gamma_move(board, 1, 0, 23) == 0 );

assert( gamma_move(board, 2, 1, 36) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 0, 25) == 0 );

assert( gamma_move(board, 5, 0, 7) == 0 );

assert( gamma_move(board, 6, 0, 38) == 0 );

assert( gamma_move(board, 7, 0, 34) == 0 );

assert( gamma_move(board, 8, 1, 17) == 0 );

assert( gamma_move(board, 1, 0, 5) == 0 );

assert( gamma_move(board, 2, 1, 5) == 0 );

assert( gamma_move(board, 3, 0, 18) == 0 );

assert( gamma_move(board, 4, 0, 3) == 0 );

assert( gamma_move(board, 5, 0, 21) == 0 );

assert( gamma_move(board, 6, 0, 21) == 0 );

assert( gamma_move(board, 7, 1, 35) == 0 );

assert( gamma_move(board, 8, 0, 38) == 0 );

assert( gamma_move(board, 1, 1, 33) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 4 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 6 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 8 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 1, 33) == 0 );

assert( gamma_move(board, 3, 1, 11) == 0 );

assert( gamma_move(board, 4, 0, 4) == 0 );

assert( gamma_move(board, 5, 0, 24) == 0 );

assert( gamma_move(board, 6, 0, 30) == 0 );

assert( gamma_move(board, 7, 0, 38) == 0 );

assert( gamma_move(board, 8, 1, 0) == 0 );

assert( gamma_move(board, 1, 1, 37) == 0 );

assert( gamma_move(board, 2, 1, 11) == 0 );

assert( gamma_move(board, 3, 0, 25) == 0 );

assert( gamma_move(board, 4, 1, 29) == 0 );

assert( gamma_move(board, 5, 0, 33) == 0 );

assert( gamma_move(board, 6, 1, 26) == 0 );

assert( gamma_move(board, 7, 0, 1) == 0 );

assert( gamma_move(board, 8, 1, 15) == 0 );

assert( gamma_move(board, 1, 0, 34) == 0 );

assert( gamma_move(board, 2, 1, 35) == 0 );

assert( gamma_move(board, 3, 1, 18) == 0 );

assert( gamma_move(board, 4, 1, 24) == 0 );

assert( gamma_move(board, 5, 1, 33) == 0 );

assert( gamma_move(board, 6, 0, 24) == 0 );

assert( gamma_move(board, 7, 0, 33) == 0 );

assert( gamma_move(board, 8, 1, 37) == 0 );

assert( gamma_move(board, 1, 0, 8) == 0 );

assert( gamma_move(board, 2, 0, 18) == 0 );

assert( gamma_move(board, 3, 1, 24) == 0 );

assert( gamma_move(board, 4, 1, 23) == 0 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 0, 13) == 0 );

assert( gamma_move(board, 7, 1, 36) == 0 );

assert( gamma_move(board, 8, 0, 16) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 4 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 6 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 4 );

assert( gamma_golden_move(board, 8, 0, 37) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 8 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_golden_move(board, 8, 1, 15) == 0 );





gamma_delete(board);



    return 0;

}

