#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 355775764

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 56, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 0) == 0 );

assert( gamma_move(board, 2, 0, 23) == 1 );

assert( gamma_move(board, 3, 0, 42) == 1 );

assert( gamma_move(board, 4, 0, 19) == 1 );

assert( gamma_move(board, 5, 0, 3) == 1 );

assert( gamma_move(board, 6, 0, 41) == 1 );

assert( gamma_move(board, 7, 1, 28) == 0 );

assert( gamma_move(board, 8, 0, 18) == 1 );

assert( gamma_move(board, 1, 0, 25) == 1 );

assert( gamma_move(board, 2, 1, 49) == 0 );

assert( gamma_move(board, 3, 1, 20) == 0 );

assert( gamma_move(board, 4, 1, 1) == 0 );

assert( gamma_move(board, 5, 0, 17) == 1 );

assert( gamma_move(board, 6, 1, 44) == 0 );

assert( gamma_move(board, 7, 1, 49) == 0 );

assert( gamma_move(board, 8, 1, 49) == 0 );

assert( gamma_move(board, 1, 1, 36) == 0 );

assert( gamma_move(board, 2, 0, 49) == 1 );

assert( gamma_move(board, 3, 1, 26) == 0 );

assert( gamma_move(board, 4, 0, 33) == 1 );

assert( gamma_move(board, 5, 1, 41) == 0 );

assert( gamma_move(board, 6, 1, 48) == 0 );

assert( gamma_move(board, 7, 0, 27) == 1 );

assert( gamma_move(board, 8, 1, 46) == 0 );

assert( gamma_move(board, 1, 0, 1) == 1 );

assert( gamma_move(board, 2, 0, 32) == 1 );

assert( gamma_move(board, 3, 0, 33) == 0 );

assert( gamma_move(board, 4, 0, 45) == 1 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 1, 4) == 0 );

assert( gamma_move(board, 7, 0, 3) == 0 );

assert( gamma_move(board, 8, 0, 25) == 0 );

assert( gamma_move(board, 1, 1, 45) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 42 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 42 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 42 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 42 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 42 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 1 );

assert( gamma_free_fields(board, 6) == 42 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 1 );

assert( gamma_free_fields(board, 7) == 42 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 42 );

assert( gamma_move(board, 2, 1, 47) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 1, 15) == 0 );

assert( gamma_move(board, 5, 0, 52) == 1 );

assert( gamma_move(board, 6, 1, 30) == 0 );

assert( gamma_move(board, 7, 1, 35) == 0 );

assert( gamma_move(board, 8, 0, 46) == 1 );

assert( gamma_move(board, 1, 1, 4) == 0 );

assert( gamma_move(board, 2, 1, 22) == 0 );

assert( gamma_move(board, 3, 1, 27) == 0 );

assert( gamma_move(board, 4, 0, 41) == 0 );

assert( gamma_move(board, 5, 0, 18) == 0 );

assert( gamma_move(board, 6, 1, 25) == 0 );

assert( gamma_move(board, 7, 0, 50) == 1 );

assert( gamma_move(board, 8, 1, 39) == 0 );

assert( gamma_move(board, 1, 0, 28) == 1 );

assert( gamma_move(board, 2, 1, 45) == 0 );

assert( gamma_move(board, 3, 1, 15) == 0 );

assert( gamma_move(board, 4, 1, 26) == 0 );

assert( gamma_move(board, 5, 1, 21) == 0 );

assert( gamma_move(board, 6, 0, 39) == 1 );

assert( gamma_move(board, 7, 0, 46) == 0 );

assert( gamma_move(board, 8, 0, 43) == 1 );

assert( gamma_move(board, 1, 1, 23) == 0 );

assert( gamma_move(board, 2, 1, 39) == 0 );

assert( gamma_move(board, 3, 0, 3) == 0 );

assert( gamma_move(board, 4, 0, 0) == 1 );

assert( gamma_move(board, 5, 0, 41) == 0 );

assert( gamma_move(board, 6, 0, 56) == 0 );

assert( gamma_move(board, 7, 1, 2) == 0 );

assert( gamma_move(board, 8, 0, 51) == 1 );

assert( gamma_move(board, 1, 1, 12) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 34 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 34 );

assert( gamma_golden_move(board, 1, 0, 5) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 34 );

assert( gamma_golden_move(board, 1, 0, 26) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 34 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 34 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 34 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 0, 12) == 1 );

assert( gamma_move(board, 3, 0, 18) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 0, 20) == 1 );

assert( gamma_move(board, 6, 0, 1) == 0 );

assert( gamma_move(board, 7, 1, 7) == 0 );

assert( gamma_move(board, 8, 1, 28) == 0 );

assert( gamma_move(board, 1, 1, 52) == 0 );

assert( gamma_move(board, 2, 1, 27) == 0 );

assert( gamma_move(board, 3, 1, 36) == 0 );

assert( gamma_move(board, 4, 0, 40) == 0 );

assert( gamma_move(board, 5, 0, 46) == 0 );

assert( gamma_move(board, 6, 1, 1) == 0 );

assert( gamma_move(board, 7, 0, 33) == 0 );

assert( gamma_move(board, 8, 1, 54) == 0 );

assert( gamma_move(board, 1, 0, 6) == 1 );

assert( gamma_move(board, 2, 0, 25) == 0 );

assert( gamma_move(board, 3, 0, 16) == 1 );

assert( gamma_move(board, 4, 0, 56) == 0 );

assert( gamma_move(board, 5, 0, 23) == 0 );

assert( gamma_move(board, 6, 1, 39) == 0 );

assert( gamma_move(board, 7, 0, 53) == 1 );

assert( gamma_move(board, 8, 0, 26) == 0 );

assert( gamma_move(board, 1, 1, 30) == 0 );

assert( gamma_move(board, 2, 1, 18) == 0 );

assert( gamma_move(board, 3, 1, 26) == 0 );

assert( gamma_move(board, 4, 1, 19) == 0 );

assert( gamma_move(board, 5, 0, 41) == 0 );

assert( gamma_move(board, 6, 1, 10) == 0 );

assert( gamma_move(board, 7, 0, 20) == 0 );

assert( gamma_move(board, 8, 1, 37) == 0 );

assert( gamma_move(board, 1, 1, 27) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 6 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 29 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 29 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 29 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 21) == 0 );

assert( gamma_move(board, 3, 0, 19) == 0 );

assert( gamma_move(board, 4, 0, 0) == 0 );

assert( gamma_move(board, 5, 1, 13) == 0 );

assert( gamma_move(board, 6, 1, 15) == 0 );

assert( gamma_move(board, 7, 0, 41) == 0 );

assert( gamma_move(board, 8, 0, 16) == 0 );

assert( gamma_move(board, 1, 1, 45) == 0 );

assert( gamma_move(board, 2, 0, 15) == 0 );

assert( gamma_move(board, 3, 0, 6) == 0 );

assert( gamma_move(board, 4, 0, 17) == 0 );

assert( gamma_move(board, 5, 1, 26) == 0 );

assert( gamma_move(board, 6, 0, 26) == 1 );

assert( gamma_move(board, 7, 1, 49) == 0 );

assert( gamma_move(board, 8, 1, 33) == 0 );

assert( gamma_move(board, 1, 1, 35) == 0 );

assert( gamma_move(board, 2, 1, 53) == 0 );

assert( gamma_move(board, 3, 0, 28) == 0 );

assert( gamma_move(board, 4, 0, 16) == 0 );

assert( gamma_move(board, 5, 1, 21) == 0 );

assert( gamma_move(board, 6, 0, 1) == 0 );

assert( gamma_move(board, 7, 0, 20) == 0 );

assert( gamma_move(board, 8, 0, 28) == 0 );

assert( gamma_move(board, 1, 0, 26) == 0 );

assert( gamma_move(board, 2, 1, 34) == 0 );

assert( gamma_move(board, 3, 0, 32) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 0, 49) == 0 );

assert( gamma_move(board, 6, 1, 13) == 0 );

assert( gamma_move(board, 7, 0, 17) == 0 );

assert( gamma_move(board, 8, 0, 32) == 0 );

assert( gamma_move(board, 1, 1, 30) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 5 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 6 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 28 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 28 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 28 );

assert( gamma_golden_move(board, 1, 0, 37) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_golden_move(board, 1, 1, 56) == 0 );

assert( gamma_move(board, 2, 1, 12) == 0 );

assert( gamma_move(board, 3, 0, 54) == 1 );

assert( gamma_move(board, 4, 0, 26) == 0 );

assert( gamma_move(board, 5, 1, 32) == 0 );

assert( gamma_move(board, 6, 0, 56) == 0 );

assert( gamma_move(board, 7, 1, 55) == 0 );

assert( gamma_move(board, 8, 1, 11) == 0 );

assert( gamma_move(board, 1, 0, 55) == 0 );

assert( gamma_move(board, 2, 0, 52) == 0 );

assert( gamma_move(board, 3, 0, 12) == 0 );

assert( gamma_move(board, 4, 1, 7) == 0 );

assert( gamma_move(board, 5, 0, 34) == 0 );

assert( gamma_move(board, 6, 1, 7) == 0 );

assert( gamma_move(board, 7, 1, 35) == 0 );

assert( gamma_move(board, 8, 0, 48) == 0 );

assert( gamma_move(board, 1, 0, 24) == 1 );

assert( gamma_move(board, 2, 0, 27) == 0 );

assert( gamma_move(board, 3, 1, 15) == 0 );

assert( gamma_move(board, 4, 1, 27) == 0 );

assert( gamma_move(board, 5, 0, 2) == 1 );

assert( gamma_move(board, 6, 1, 32) == 0 );

assert( gamma_move(board, 7, 1, 46) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 1, 24) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 55) == 1 );

assert( gamma_move(board, 4, 1, 18) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 0, 25) == 0 );

assert( gamma_move(board, 7, 0, 32) == 0 );

assert( gamma_move(board, 8, 1, 49) == 0 );

assert( gamma_move(board, 1, 1, 5) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 24 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 24 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 24 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 13) == 0 );

assert( gamma_move(board, 3, 1, 40) == 0 );

assert( gamma_move(board, 4, 1, 23) == 0 );

assert( gamma_move(board, 5, 1, 48) == 0 );

assert( gamma_move(board, 6, 0, 6) == 0 );

assert( gamma_move(board, 7, 0, 23) == 0 );

assert( gamma_move(board, 8, 0, 53) == 0 );

assert( gamma_move(board, 1, 0, 1) == 0 );

assert( gamma_move(board, 2, 0, 0) == 0 );

assert( gamma_move(board, 3, 0, 45) == 0 );

assert( gamma_move(board, 4, 0, 56) == 0 );

assert( gamma_move(board, 5, 0, 18) == 0 );

assert( gamma_move(board, 6, 1, 46) == 0 );

assert( gamma_move(board, 7, 1, 0) == 0 );

assert( gamma_move(board, 8, 0, 41) == 0 );

assert( gamma_move(board, 1, 0, 46) == 0 );

assert( gamma_move(board, 2, 0, 56) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 0, 52) == 0 );

assert( gamma_move(board, 5, 1, 0) == 0 );

assert( gamma_move(board, 6, 1, 35) == 0 );

assert( gamma_move(board, 7, 1, 45) == 0 );

assert( gamma_move(board, 8, 1, 29) == 0 );

assert( gamma_move(board, 1, 0, 5) == 1 );

assert( gamma_move(board, 2, 0, 14) == 0 );

assert( gamma_move(board, 3, 0, 31) == 1 );

assert( gamma_move(board, 4, 1, 55) == 0 );

assert( gamma_move(board, 5, 0, 16) == 0 );

assert( gamma_move(board, 6, 0, 28) == 0 );

assert( gamma_move(board, 7, 0, 14) == 1 );

assert( gamma_move(board, 8, 0, 46) == 0 );

assert( gamma_move(board, 1, 1, 18) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 21 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 1, 38) == 0 );

assert( gamma_move(board, 4, 0, 7) == 0 );

assert( gamma_move(board, 5, 1, 47) == 0 );

assert( gamma_move(board, 6, 0, 25) == 0 );

assert( gamma_move(board, 7, 0, 44) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 0, 29) == 1 );

assert( gamma_move(board, 2, 1, 49) == 0 );

assert( gamma_move(board, 3, 0, 7) == 0 );

assert( gamma_move(board, 4, 1, 24) == 0 );

assert( gamma_move(board, 5, 1, 13) == 0 );

assert( gamma_move(board, 6, 1, 0) == 0 );

assert( gamma_move(board, 7, 0, 7) == 0 );

assert( gamma_move(board, 8, 1, 31) == 0 );

assert( gamma_move(board, 1, 0, 32) == 0 );

assert( gamma_move(board, 2, 1, 47) == 0 );

assert( gamma_move(board, 3, 0, 6) == 0 );

assert( gamma_move(board, 4, 1, 21) == 0 );

assert( gamma_move(board, 5, 0, 27) == 0 );

assert( gamma_move(board, 6, 0, 29) == 0 );

assert( gamma_move(board, 7, 1, 31) == 0 );

assert( gamma_move(board, 8, 1, 33) == 0 );

assert( gamma_move(board, 1, 1, 10) == 0 );

assert( gamma_move(board, 2, 0, 36) == 0 );

assert( gamma_move(board, 3, 0, 53) == 0 );

assert( gamma_move(board, 4, 0, 43) == 0 );

assert( gamma_move(board, 5, 1, 41) == 0 );

assert( gamma_move(board, 6, 1, 55) == 0 );

assert( gamma_move(board, 7, 1, 1) == 0 );

assert( gamma_move(board, 8, 0, 46) == 0 );

assert( gamma_move(board, 1, 1, 7) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 7 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 20 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 0, 45) == 0 );

assert( gamma_move(board, 3, 1, 36) == 0 );

assert( gamma_move(board, 4, 0, 21) == 0 );

assert( gamma_move(board, 5, 0, 34) == 0 );

assert( gamma_move(board, 6, 1, 10) == 0 );

assert( gamma_move(board, 7, 0, 9) == 0 );

assert( gamma_move(board, 8, 0, 45) == 0 );

assert( gamma_move(board, 1, 0, 34) == 0 );

assert( gamma_move(board, 2, 1, 14) == 0 );

assert( gamma_move(board, 3, 1, 19) == 0 );

assert( gamma_move(board, 4, 0, 8) == 0 );

assert( gamma_move(board, 5, 0, 46) == 0 );

assert( gamma_move(board, 6, 1, 42) == 0 );

assert( gamma_move(board, 7, 1, 35) == 0 );

assert( gamma_move(board, 8, 1, 48) == 0 );

assert( gamma_move(board, 1, 0, 15) == 0 );

assert( gamma_move(board, 2, 0, 47) == 0 );

assert( gamma_move(board, 3, 0, 50) == 0 );

assert( gamma_move(board, 4, 1, 27) == 0 );

assert( gamma_move(board, 5, 0, 10) == 0 );

assert( gamma_move(board, 6, 0, 43) == 0 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 0, 27) == 0 );

assert( gamma_move(board, 1, 0, 52) == 0 );

assert( gamma_move(board, 2, 0, 44) == 0 );

assert( gamma_move(board, 3, 0, 31) == 0 );

assert( gamma_move(board, 4, 1, 24) == 0 );

assert( gamma_move(board, 5, 0, 50) == 0 );

assert( gamma_move(board, 6, 1, 50) == 0 );

assert( gamma_move(board, 7, 0, 17) == 0 );

assert( gamma_move(board, 8, 1, 20) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 7 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 20 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );





gamma_delete(board);



    return 0;

}

