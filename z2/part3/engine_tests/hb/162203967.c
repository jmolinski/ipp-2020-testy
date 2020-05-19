#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 162203967

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 37, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 23) == 0 );

assert( gamma_move(board, 2, 1, 35) == 0 );

assert( gamma_move(board, 3, 1, 29) == 0 );

assert( gamma_move(board, 4, 0, 27) == 1 );

assert( gamma_move(board, 5, 0, 35) == 1 );

assert( gamma_move(board, 6, 0, 6) == 1 );

assert( gamma_move(board, 7, 0, 36) == 1 );

assert( gamma_move(board, 8, 1, 15) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 0, 15) == 1 );

assert( gamma_move(board, 3, 0, 31) == 1 );

assert( gamma_move(board, 4, 1, 14) == 0 );

assert( gamma_move(board, 5, 1, 13) == 0 );

assert( gamma_move(board, 6, 0, 34) == 1 );

assert( gamma_move(board, 7, 0, 31) == 0 );

assert( gamma_move(board, 8, 0, 2) == 1 );

assert( gamma_move(board, 1, 1, 27) == 0 );

assert( gamma_move(board, 2, 0, 6) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 0, 25) == 1 );

assert( gamma_move(board, 5, 1, 28) == 0 );

assert( gamma_move(board, 6, 0, 1) == 1 );

assert( gamma_move(board, 7, 0, 11) == 1 );

assert( gamma_move(board, 8, 1, 28) == 0 );

assert( gamma_move(board, 1, 1, 22) == 0 );

assert( gamma_move(board, 2, 0, 4) == 1 );

assert( gamma_move(board, 3, 0, 1) == 0 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 0, 26) == 1 );

assert( gamma_move(board, 6, 0, 27) == 0 );

assert( gamma_move(board, 7, 0, 25) == 0 );

assert( gamma_move(board, 8, 0, 7) == 1 );

assert( gamma_move(board, 1, 0, 11) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 0 );

assert( gamma_free_fields(board, 1) == 23 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 23 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 23 );

assert( gamma_golden_move(board, 1, 0, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 2 );

assert( gamma_free_fields(board, 4) == 23 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 23 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 23 );

assert( gamma_golden_move(board, 1, 0, 24) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 23 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 23 );

assert( gamma_move(board, 2, 0, 35) == 0 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 0, 13) == 1 );

assert( gamma_move(board, 5, 1, 21) == 0 );

assert( gamma_move(board, 6, 1, 16) == 0 );

assert( gamma_move(board, 7, 0, 20) == 1 );

assert( gamma_move(board, 8, 0, 16) == 1 );

assert( gamma_move(board, 1, 0, 24) == 1 );

assert( gamma_move(board, 2, 0, 29) == 1 );

assert( gamma_move(board, 3, 1, 16) == 0 );

assert( gamma_move(board, 4, 1, 25) == 0 );

assert( gamma_move(board, 5, 0, 6) == 0 );

assert( gamma_move(board, 6, 1, 24) == 0 );

assert( gamma_move(board, 7, 1, 14) == 0 );

assert( gamma_move(board, 8, 0, 9) == 1 );

assert( gamma_move(board, 1, 1, 27) == 0 );

assert( gamma_move(board, 2, 0, 22) == 1 );

assert( gamma_move(board, 3, 0, 25) == 0 );

assert( gamma_move(board, 4, 1, 13) == 0 );

assert( gamma_move(board, 5, 1, 5) == 0 );

assert( gamma_move(board, 6, 0, 36) == 0 );

assert( gamma_move(board, 7, 1, 22) == 0 );

assert( gamma_move(board, 8, 1, 5) == 0 );

assert( gamma_move(board, 1, 0, 2) == 0 );

assert( gamma_move(board, 2, 0, 31) == 0 );

assert( gamma_move(board, 3, 1, 27) == 0 );

assert( gamma_move(board, 4, 1, 33) == 0 );

assert( gamma_move(board, 5, 1, 16) == 0 );

assert( gamma_move(board, 6, 1, 12) == 0 );

assert( gamma_move(board, 7, 1, 26) == 0 );

assert( gamma_move(board, 8, 1, 34) == 0 );

assert( gamma_move(board, 1, 0, 3) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 15 );

assert( gamma_golden_move(board, 1, 0, 4) == 1 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 15 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 15 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 15 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 15 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 15 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 15 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 3 );

assert( gamma_move(board, 2, 0, 3) == 0 );

assert( gamma_move(board, 3, 0, 13) == 0 );

assert( gamma_move(board, 4, 0, 15) == 0 );

assert( gamma_move(board, 5, 1, 1) == 0 );

assert( gamma_move(board, 6, 1, 29) == 0 );

assert( gamma_move(board, 7, 0, 5) == 1 );

assert( gamma_move(board, 8, 1, 8) == 0 );

assert( gamma_move(board, 1, 0, 37) == 0 );

assert( gamma_move(board, 2, 0, 24) == 0 );

assert( gamma_move(board, 3, 0, 19) == 1 );

assert( gamma_move(board, 4, 0, 6) == 0 );

assert( gamma_move(board, 5, 1, 1) == 0 );

assert( gamma_move(board, 6, 0, 30) == 1 );

assert( gamma_move(board, 7, 1, 26) == 0 );

assert( gamma_move(board, 8, 1, 2) == 0 );

assert( gamma_move(board, 1, 1, 4) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 26) == 0 );

assert( gamma_move(board, 4, 1, 29) == 0 );

assert( gamma_move(board, 5, 1, 33) == 0 );

assert( gamma_move(board, 6, 0, 32) == 0 );

assert( gamma_move(board, 7, 1, 34) == 0 );

assert( gamma_move(board, 8, 0, 32) == 0 );

assert( gamma_move(board, 1, 0, 35) == 0 );

assert( gamma_move(board, 2, 0, 31) == 0 );

assert( gamma_move(board, 3, 1, 20) == 0 );

assert( gamma_move(board, 4, 0, 6) == 0 );

assert( gamma_move(board, 5, 1, 36) == 0 );

assert( gamma_move(board, 6, 1, 22) == 0 );

assert( gamma_move(board, 7, 0, 14) == 0 );

assert( gamma_move(board, 8, 0, 37) == 0 );

assert( gamma_move(board, 1, 1, 8) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 12 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 12 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 12 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 12 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 12 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 3 );

assert( gamma_golden_move(board, 1, 0, 34) == 0 );

assert( gamma_move(board, 2, 1, 19) == 0 );

assert( gamma_move(board, 3, 0, 23) == 1 );

assert( gamma_move(board, 4, 0, 32) == 1 );

assert( gamma_move(board, 5, 1, 35) == 0 );

assert( gamma_move(board, 6, 0, 12) == 0 );

assert( gamma_move(board, 7, 0, 37) == 0 );

assert( gamma_move(board, 8, 1, 30) == 0 );

assert( gamma_move(board, 1, 0, 26) == 0 );

assert( gamma_move(board, 2, 0, 27) == 0 );

assert( gamma_move(board, 3, 1, 24) == 0 );

assert( gamma_move(board, 4, 0, 8) == 0 );

assert( gamma_move(board, 5, 0, 24) == 0 );

assert( gamma_move(board, 6, 1, 36) == 0 );

assert( gamma_move(board, 7, 1, 28) == 0 );

assert( gamma_move(board, 8, 0, 24) == 0 );

assert( gamma_move(board, 1, 1, 24) == 0 );

assert( gamma_move(board, 2, 1, 33) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 0, 13) == 0 );

assert( gamma_move(board, 5, 0, 8) == 1 );

assert( gamma_move(board, 6, 0, 37) == 0 );

assert( gamma_move(board, 7, 0, 18) == 0 );

assert( gamma_move(board, 8, 0, 36) == 0 );

assert( gamma_move(board, 1, 1, 37) == 0 );

assert( gamma_move(board, 2, 0, 2) == 0 );

assert( gamma_move(board, 3, 1, 26) == 0 );

assert( gamma_move(board, 4, 1, 7) == 0 );

assert( gamma_move(board, 5, 1, 2) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 1, 17) == 0 );

assert( gamma_move(board, 8, 1, 20) == 0 );

assert( gamma_move(board, 1, 0, 29) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 9 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 9 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 9 );

assert( gamma_golden_move(board, 1, 1, 4) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 9 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 28) == 0 );

assert( gamma_move(board, 3, 0, 33) == 1 );

assert( gamma_move(board, 4, 1, 23) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 1, 12) == 0 );

assert( gamma_move(board, 7, 1, 26) == 0 );

assert( gamma_move(board, 8, 1, 21) == 0 );

assert( gamma_move(board, 1, 0, 16) == 0 );

assert( gamma_move(board, 2, 0, 7) == 0 );

assert( gamma_move(board, 3, 1, 19) == 0 );

assert( gamma_move(board, 4, 1, 14) == 0 );

assert( gamma_move(board, 5, 0, 4) == 0 );

assert( gamma_move(board, 6, 0, 33) == 0 );

assert( gamma_move(board, 7, 1, 15) == 0 );

assert( gamma_move(board, 8, 0, 4) == 0 );

assert( gamma_move(board, 1, 0, 10) == 1 );

assert( gamma_move(board, 2, 0, 36) == 0 );

assert( gamma_move(board, 3, 1, 26) == 0 );

assert( gamma_move(board, 4, 1, 19) == 0 );

assert( gamma_move(board, 5, 1, 36) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 0, 37) == 0 );

assert( gamma_move(board, 8, 1, 9) == 0 );

assert( gamma_move(board, 1, 0, 25) == 0 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 1, 31) == 0 );

assert( gamma_move(board, 4, 0, 13) == 0 );

assert( gamma_move(board, 5, 1, 19) == 0 );

assert( gamma_move(board, 6, 0, 13) == 0 );

assert( gamma_move(board, 7, 0, 6) == 0 );

assert( gamma_move(board, 8, 1, 26) == 0 );

assert( gamma_move(board, 1, 1, 16) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 7 );

assert( gamma_golden_move(board, 1, 1, 30) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 7 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 7 );

assert( gamma_golden_move(board, 1, 0, 23) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert( gamma_golden_move(board, 1, 1, 20) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 1 );

assert( gamma_move(board, 2, 0, 10) == 0 );

assert( gamma_move(board, 3, 0, 12) == 0 );

assert( gamma_move(board, 4, 0, 32) == 0 );

assert( gamma_move(board, 5, 1, 16) == 0 );

assert( gamma_move(board, 6, 1, 35) == 0 );

assert( gamma_move(board, 7, 1, 11) == 0 );

assert( gamma_move(board, 8, 0, 3) == 0 );

assert( gamma_move(board, 1, 0, 11) == 0 );

assert( gamma_move(board, 2, 0, 5) == 0 );

assert( gamma_move(board, 3, 1, 34) == 0 );

assert( gamma_move(board, 4, 0, 27) == 0 );

assert( gamma_move(board, 5, 1, 35) == 0 );

assert( gamma_move(board, 6, 1, 16) == 0 );

assert( gamma_move(board, 7, 1, 7) == 0 );

assert( gamma_move(board, 8, 1, 30) == 0 );

assert( gamma_move(board, 1, 0, 20) == 0 );

assert( gamma_move(board, 2, 1, 15) == 0 );

assert( gamma_move(board, 3, 1, 31) == 0 );

assert( gamma_move(board, 4, 0, 37) == 0 );

assert( gamma_move(board, 5, 0, 9) == 0 );

assert( gamma_move(board, 6, 0, 20) == 0 );

assert( gamma_move(board, 7, 0, 31) == 0 );

assert( gamma_move(board, 8, 1, 37) == 0 );

assert( gamma_move(board, 1, 0, 21) == 1 );

assert( gamma_move(board, 2, 1, 36) == 0 );

assert( gamma_move(board, 3, 0, 3) == 0 );

assert( gamma_move(board, 4, 0, 21) == 0 );

assert( gamma_move(board, 5, 1, 12) == 0 );

assert( gamma_move(board, 6, 0, 23) == 0 );

assert( gamma_move(board, 7, 1, 14) == 0 );

assert( gamma_move(board, 8, 0, 26) == 0 );

assert( gamma_move(board, 1, 1, 22) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 0 );

assert( gamma_golden_move(board, 1, 0, 0) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 6 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 6 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 1 );

assert( gamma_golden_move(board, 1, 0, 36) == 0 );

assert( gamma_move(board, 2, 0, 23) == 0 );

assert( gamma_move(board, 3, 0, 16) == 0 );

assert( gamma_move(board, 4, 0, 29) == 0 );

assert( gamma_move(board, 5, 0, 23) == 0 );

assert( gamma_move(board, 6, 1, 11) == 0 );

assert( gamma_move(board, 7, 0, 16) == 0 );

assert( gamma_move(board, 8, 0, 25) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 0, 13) == 0 );

assert( gamma_move(board, 3, 0, 3) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 1, 28) == 0 );

assert( gamma_move(board, 6, 0, 30) == 0 );

assert( gamma_move(board, 7, 1, 29) == 0 );

assert( gamma_move(board, 8, 0, 19) == 0 );

assert( gamma_move(board, 1, 1, 31) == 0 );

assert( gamma_move(board, 2, 0, 16) == 0 );

assert( gamma_move(board, 3, 0, 3) == 0 );

assert( gamma_move(board, 4, 1, 21) == 0 );

assert( gamma_move(board, 5, 0, 3) == 0 );

assert( gamma_move(board, 6, 1, 34) == 0 );

assert( gamma_move(board, 7, 1, 28) == 0 );

assert( gamma_move(board, 8, 1, 34) == 0 );

assert( gamma_move(board, 1, 1, 3) == 0 );

assert( gamma_move(board, 2, 1, 36) == 0 );

assert( gamma_move(board, 3, 0, 3) == 0 );

assert( gamma_move(board, 4, 1, 25) == 0 );

assert( gamma_move(board, 5, 0, 21) == 0 );

assert( gamma_move(board, 6, 1, 3) == 0 );

assert( gamma_move(board, 7, 1, 8) == 0 );

assert( gamma_move(board, 8, 1, 11) == 0 );

assert( gamma_move(board, 1, 0, 19) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 6 );

assert( gamma_golden_move(board, 1, 0, 14) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 6 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 1 );

assert( gamma_move(board, 2, 0, 31) == 0 );

assert( gamma_move(board, 3, 0, 35) == 0 );

assert( gamma_move(board, 4, 0, 33) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 1, 15) == 0 );

assert( gamma_move(board, 7, 1, 23) == 0 );

assert( gamma_move(board, 8, 0, 28) == 0 );

assert( gamma_move(board, 1, 0, 33) == 0 );

assert( gamma_move(board, 2, 0, 2) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 0, 28) == 1 );

assert( gamma_move(board, 5, 0, 12) == 1 );

assert( gamma_move(board, 6, 1, 24) == 0 );

assert( gamma_move(board, 7, 0, 7) == 0 );

assert( gamma_move(board, 8, 0, 25) == 0 );

assert( gamma_move(board, 1, 1, 11) == 0 );

assert( gamma_move(board, 2, 1, 37) == 0 );

assert( gamma_move(board, 3, 1, 26) == 0 );

assert( gamma_move(board, 4, 1, 32) == 0 );

assert( gamma_move(board, 5, 0, 29) == 0 );

assert( gamma_move(board, 6, 1, 37) == 0 );

assert( gamma_move(board, 7, 1, 28) == 0 );

assert( gamma_move(board, 8, 0, 26) == 0 );

assert( gamma_move(board, 1, 1, 12) == 0 );

assert( gamma_move(board, 2, 0, 5) == 0 );

assert( gamma_move(board, 3, 1, 37) == 0 );

assert( gamma_move(board, 4, 1, 19) == 0 );

assert( gamma_move(board, 5, 0, 3) == 0 );

assert( gamma_move(board, 6, 1, 37) == 0 );

assert( gamma_move(board, 7, 1, 4) == 0 );

assert( gamma_move(board, 8, 1, 12) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert( gamma_golden_move(board, 8, 1, 36) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 1 );





gamma_delete(board);



    return 0;

}

