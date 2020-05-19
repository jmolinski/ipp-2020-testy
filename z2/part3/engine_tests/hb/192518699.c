#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 192518699

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 8, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 2) == 0 );

assert( gamma_move(board, 2, 0, 7) == 1 );

assert( gamma_move(board, 3, 0, 7) == 0 );

assert( gamma_move(board, 4, 1, 1) == 0 );

assert( gamma_move(board, 5, 0, 8) == 0 );

assert( gamma_move(board, 6, 1, 7) == 0 );

assert( gamma_move(board, 7, 1, 6) == 0 );

assert( gamma_move(board, 8, 0, 4) == 1 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 1, 0) == 0 );

assert( gamma_move(board, 3, 0, 6) == 1 );

assert( gamma_move(board, 4, 0, 2) == 1 );

assert( gamma_move(board, 5, 0, 1) == 1 );

assert( gamma_move(board, 6, 1, 2) == 0 );

assert( gamma_move(board, 7, 1, 6) == 0 );

assert( gamma_move(board, 8, 0, 3) == 1 );

assert( gamma_move(board, 1, 1, 8) == 0 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 1, 6) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 1, 4) == 0 );

assert( gamma_move(board, 6, 0, 2) == 0 );

assert( gamma_move(board, 7, 1, 1) == 0 );

assert( gamma_move(board, 8, 1, 1) == 0 );

assert( gamma_move(board, 1, 1, 7) == 0 );

assert( gamma_move(board, 2, 0, 2) == 0 );

assert( gamma_move(board, 3, 0, 2) == 0 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 0, 8) == 0 );

assert( gamma_move(board, 7, 1, 6) == 0 );

assert( gamma_move(board, 8, 0, 4) == 0 );

assert( gamma_move(board, 1, 1, 8) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 0 );

assert( gamma_free_fields(board, 1) == 2 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 1 );

assert( gamma_free_fields(board, 2) == 2 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 0, 0) == 1 );

assert( gamma_move(board, 3, 0, 2) == 0 );

assert( gamma_move(board, 4, 0, 6) == 0 );

assert( gamma_move(board, 5, 1, 8) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 1, 2) == 0 );

assert( gamma_move(board, 8, 1, 1) == 0 );

assert( gamma_move(board, 1, 1, 5) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 6) == 0 );

assert( gamma_move(board, 4, 0, 3) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 1, 0) == 0 );

assert( gamma_move(board, 7, 0, 6) == 0 );

assert( gamma_move(board, 8, 0, 8) == 0 );

assert( gamma_move(board, 1, 0, 2) == 0 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 1, 4) == 0 );

assert( gamma_move(board, 4, 0, 8) == 0 );

assert( gamma_move(board, 5, 0, 3) == 0 );

assert( gamma_move(board, 6, 0, 8) == 0 );

assert( gamma_move(board, 7, 1, 3) == 0 );

assert( gamma_move(board, 8, 1, 2) == 0 );

assert( gamma_move(board, 1, 0, 0) == 0 );

assert( gamma_move(board, 2, 0, 7) == 0 );

assert( gamma_move(board, 3, 1, 0) == 0 );

assert( gamma_move(board, 4, 1, 6) == 0 );

assert( gamma_move(board, 5, 0, 8) == 0 );

assert( gamma_move(board, 6, 1, 6) == 0 );

assert( gamma_move(board, 7, 0, 7) == 0 );

assert( gamma_move(board, 8, 0, 8) == 0 );

assert( gamma_move(board, 1, 0, 6) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 0 );

assert( gamma_free_fields(board, 1) == 1 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 1 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 1 );

assert( gamma_golden_move(board, 1, 0, 0) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 1 );

assert( gamma_golden_move(board, 1, 1, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 1 );

assert( gamma_move(board, 2, 0, 5) == 1 );

assert( gamma_move(board, 3, 0, 1) == 0 );

assert( gamma_move(board, 4, 1, 3) == 0 );

assert( gamma_move(board, 5, 0, 8) == 0 );

assert( gamma_move(board, 6, 0, 8) == 0 );

assert( gamma_move(board, 7, 1, 8) == 0 );

assert( gamma_move(board, 8, 0, 6) == 0 );

assert( gamma_move(board, 1, 1, 5) == 0 );

assert( gamma_move(board, 2, 0, 0) == 0 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 0, 4) == 0 );

assert( gamma_move(board, 5, 1, 7) == 0 );

assert( gamma_move(board, 6, 0, 6) == 0 );

assert( gamma_move(board, 7, 0, 5) == 0 );

assert( gamma_move(board, 8, 0, 2) == 0 );

assert( gamma_move(board, 1, 1, 1) == 0 );

assert( gamma_move(board, 2, 1, 5) == 0 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 0, 4) == 0 );

assert( gamma_move(board, 5, 0, 8) == 0 );

assert( gamma_move(board, 6, 0, 4) == 0 );

assert( gamma_move(board, 7, 1, 6) == 0 );

assert( gamma_move(board, 8, 1, 1) == 0 );

assert( gamma_move(board, 1, 0, 0) == 0 );

assert( gamma_move(board, 2, 0, 2) == 0 );

assert( gamma_move(board, 3, 0, 6) == 0 );

assert( gamma_move(board, 4, 1, 7) == 0 );

assert( gamma_move(board, 5, 0, 6) == 0 );

assert( gamma_move(board, 6, 1, 4) == 0 );

assert( gamma_move(board, 7, 0, 8) == 0 );

assert( gamma_move(board, 8, 1, 5) == 0 );

assert( gamma_move(board, 1, 1, 8) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 1, 0) == 0 );

assert( gamma_move(board, 3, 1, 1) == 0 );

assert( gamma_move(board, 4, 0, 1) == 0 );

assert( gamma_move(board, 5, 0, 5) == 0 );

assert( gamma_move(board, 6, 1, 3) == 0 );

assert( gamma_move(board, 7, 1, 2) == 0 );

assert( gamma_move(board, 8, 1, 2) == 0 );

assert( gamma_move(board, 1, 0, 7) == 0 );

assert( gamma_move(board, 2, 0, 6) == 0 );

assert( gamma_move(board, 3, 0, 7) == 0 );

assert( gamma_move(board, 4, 0, 7) == 0 );

assert( gamma_move(board, 5, 0, 7) == 0 );

assert( gamma_move(board, 6, 1, 2) == 0 );

assert( gamma_move(board, 7, 1, 3) == 0 );

assert( gamma_move(board, 8, 0, 3) == 0 );

assert( gamma_move(board, 1, 0, 7) == 0 );

assert( gamma_move(board, 2, 0, 6) == 0 );

assert( gamma_move(board, 3, 0, 0) == 0 );

assert( gamma_move(board, 4, 1, 3) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 1, 7) == 0 );

assert( gamma_move(board, 7, 0, 0) == 0 );

assert( gamma_move(board, 8, 0, 0) == 0 );

assert( gamma_move(board, 1, 0, 0) == 0 );

assert( gamma_move(board, 2, 0, 2) == 0 );

assert( gamma_move(board, 3, 1, 0) == 0 );

assert( gamma_move(board, 4, 0, 7) == 0 );

assert( gamma_move(board, 5, 1, 0) == 0 );

assert( gamma_move(board, 6, 0, 3) == 0 );

assert( gamma_move(board, 7, 1, 8) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert( gamma_move(board, 1, 0, 2) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 0 );

assert( gamma_golden_move(board, 1, 0, 4) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 1, 7) == 0 );

assert( gamma_move(board, 4, 1, 2) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 0, 8) == 0 );

assert( gamma_move(board, 8, 1, 0) == 0 );

assert( gamma_move(board, 1, 1, 2) == 0 );

assert( gamma_move(board, 2, 0, 4) == 0 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 1, 7) == 0 );

assert( gamma_move(board, 5, 1, 2) == 0 );

assert( gamma_move(board, 6, 0, 4) == 0 );

assert( gamma_move(board, 7, 0, 6) == 0 );

assert( gamma_move(board, 8, 0, 5) == 0 );

assert( gamma_move(board, 1, 1, 7) == 0 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 0, 7) == 0 );

assert( gamma_move(board, 4, 0, 0) == 0 );

assert( gamma_move(board, 5, 0, 3) == 0 );

assert( gamma_move(board, 6, 0, 1) == 0 );

assert( gamma_move(board, 7, 0, 1) == 0 );

assert( gamma_move(board, 8, 1, 7) == 0 );

assert( gamma_move(board, 1, 0, 2) == 0 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 1, 4) == 0 );

assert( gamma_move(board, 6, 0, 2) == 0 );

assert( gamma_move(board, 7, 1, 2) == 0 );

assert( gamma_move(board, 8, 1, 7) == 0 );

assert( gamma_move(board, 1, 0, 3) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 0, 2) == 0 );

assert( gamma_move(board, 3, 0, 5) == 0 );

assert( gamma_move(board, 4, 0, 6) == 0 );

assert( gamma_move(board, 5, 0, 3) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 0, 3) == 0 );

assert( gamma_move(board, 8, 0, 8) == 0 );

assert( gamma_move(board, 1, 0, 1) == 0 );

assert( gamma_move(board, 2, 1, 6) == 0 );

assert( gamma_move(board, 3, 1, 5) == 0 );

assert( gamma_move(board, 4, 1, 4) == 0 );

assert( gamma_move(board, 5, 1, 6) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 1, 4) == 0 );

assert( gamma_move(board, 8, 0, 6) == 0 );

assert( gamma_move(board, 1, 1, 3) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 0) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 1, 8) == 0 );

assert( gamma_move(board, 6, 1, 0) == 0 );

assert( gamma_move(board, 7, 1, 1) == 0 );

assert( gamma_move(board, 8, 0, 4) == 0 );

assert( gamma_move(board, 1, 0, 4) == 0 );

assert( gamma_move(board, 2, 0, 8) == 0 );

assert( gamma_move(board, 3, 0, 8) == 0 );

assert( gamma_move(board, 4, 1, 3) == 0 );

assert( gamma_move(board, 5, 0, 4) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 1, 8) == 0 );

assert( gamma_move(board, 8, 0, 0) == 0 );

assert( gamma_move(board, 1, 0, 5) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 1, 8) == 0 );

assert( gamma_move(board, 3, 0, 3) == 0 );

assert( gamma_move(board, 4, 1, 1) == 0 );

assert( gamma_move(board, 5, 1, 8) == 0 );

assert( gamma_move(board, 6, 0, 7) == 0 );

assert( gamma_move(board, 7, 0, 0) == 0 );

assert( gamma_move(board, 8, 1, 2) == 0 );

assert( gamma_move(board, 1, 1, 5) == 0 );

assert( gamma_move(board, 2, 0, 4) == 0 );

assert( gamma_move(board, 3, 0, 6) == 0 );

assert( gamma_move(board, 4, 1, 5) == 0 );

assert( gamma_move(board, 5, 1, 2) == 0 );

assert( gamma_move(board, 6, 1, 3) == 0 );

assert( gamma_move(board, 7, 1, 6) == 0 );

assert( gamma_move(board, 8, 0, 7) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 1, 8) == 0 );

assert( gamma_move(board, 3, 0, 8) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 1, 3) == 0 );

assert( gamma_move(board, 6, 1, 7) == 0 );

assert( gamma_move(board, 7, 1, 8) == 0 );

assert( gamma_move(board, 8, 1, 7) == 0 );

assert( gamma_move(board, 1, 0, 6) == 0 );

assert( gamma_move(board, 2, 0, 7) == 0 );

assert( gamma_move(board, 3, 1, 1) == 0 );

assert( gamma_move(board, 4, 0, 5) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 0, 4) == 0 );

assert( gamma_move(board, 7, 1, 3) == 0 );

assert( gamma_move(board, 8, 0, 5) == 0 );

assert( gamma_move(board, 1, 0, 4) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 0 );

assert( gamma_golden_move(board, 1, 1, 5) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_golden_move(board, 1, 0, 4) == 0 );

assert( gamma_move(board, 2, 0, 7) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 0, 7) == 0 );

assert( gamma_move(board, 5, 0, 0) == 0 );

assert( gamma_move(board, 6, 0, 6) == 0 );

assert( gamma_move(board, 7, 1, 7) == 0 );

assert( gamma_move(board, 8, 0, 4) == 0 );

assert( gamma_move(board, 1, 0, 8) == 0 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 0, 1) == 0 );

assert( gamma_move(board, 5, 1, 1) == 0 );

assert( gamma_move(board, 6, 1, 0) == 0 );

assert( gamma_move(board, 7, 1, 8) == 0 );

assert( gamma_move(board, 8, 0, 6) == 0 );

assert( gamma_move(board, 1, 0, 8) == 0 );

assert( gamma_move(board, 2, 1, 7) == 0 );

assert( gamma_move(board, 3, 1, 7) == 0 );

assert( gamma_move(board, 4, 0, 7) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 1, 6) == 0 );

assert( gamma_move(board, 7, 0, 5) == 0 );

assert( gamma_move(board, 8, 0, 6) == 0 );

assert( gamma_move(board, 1, 1, 1) == 0 );

assert( gamma_move(board, 2, 0, 2) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 0, 5) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 0, 0) == 0 );

assert( gamma_move(board, 7, 1, 5) == 0 );

assert( gamma_move(board, 8, 0, 2) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert( gamma_golden_move(board, 8, 0, 5) == 1 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 1 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 0 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 0);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 0 );





gamma_delete(board);



    return 0;

}

