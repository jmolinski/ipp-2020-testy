#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 321809923
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 12, 8, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );


char* board271458649 = gamma_board(board);
assert( board271458649 != NULL );
assert( strcmp(board271458649, 
"............\n"
"............\n"
"............\n"
"............\n"
"..5.........\n"
"............\n"
"7...........\n"
".16.......3.\n"
"...4........\n"
"1...........\n"
"...........2\n"
"............\n") == 0);
free(board271458649);
board271458649 = NULL;
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );


char* board383511428 = gamma_board(board);
assert( board383511428 != NULL );
assert( strcmp(board383511428, 
"............\n"
"......1.....\n"
"...........3\n"
".2....2..1..\n"
"..5.........\n"
"............\n"
"7.....4.....\n"
".16.......3.\n"
"...4........\n"
"184.........\n"
"...........2\n"
"............\n") == 0);
free(board383511428);
board383511428 = NULL;
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );


char* board325862826 = gamma_board(board);
assert( board325862826 != NULL );
assert( strcmp(board325862826, 
"......7.....\n"
"......1.....\n"
"...........3\n"
".2....2..1..\n"
"..55......1.\n"
"............\n"
"7....64.....\n"
".16....1..3.\n"
"8..4........\n"
"184.........\n"
"...........2\n"
"............\n") == 0);
free(board325862826);
board325862826 = NULL;
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 121 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_free_fields(board, 4) == 119 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 11) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_golden_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_free_fields(board, 8) == 108 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_free_fields(board, 4) == 105 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_golden_move(board, 8, 9, 11) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_free_fields(board, 1) == 100 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_free_fields(board, 3) == 97 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_golden_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_golden_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 10, 9) == 1 );


char* board748710335 = gamma_board(board);
assert( board748710335 != NULL );
assert( strcmp(board748710335, 
".78...7..8.3\n"
"..5..51..6..\n"
".1.347...823\n"
".2..622.61..\n"
"7255.4...71.\n"
".6.5......2.\n"
"75...64.....\n"
".16.81.1.43.\n"
"8..4......64\n"
"184...3.82..\n"
".5641..3...2\n"
".1......6714\n") == 0);
free(board748710335);
board748710335 = NULL;
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_free_fields(board, 8) == 65 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 11, 10) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board845102980 = gamma_board(board);
assert( board845102980 != NULL );
assert( strcmp(board845102980, 
".78...7..8.3\n"
"..5..51..6.7\n"
".1.347...823\n"
".2..622.61.3\n"
"7255.4...711\n"
".6.5......2.\n"
"755..64..7.5\n"
".16.81.1.437\n"
"88.4.3.2..64\n"
"18436.3582..\n"
".5641843...2\n"
"21..4...6714\n") == 0);
free(board845102980);
board845102980 = NULL;
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );


char* board319562332 = gamma_board(board);
assert( board319562332 != NULL );
assert( strcmp(board319562332, 
".78...7..8.3\n"
"..5..51..6.7\n"
".1.347..3823\n"
".2.3622.61.3\n"
"7255.4...711\n"
"56.5......2.\n"
"755..64..7.5\n"
".16.8141.437\n"
"88.423.2..64\n"
"18436.3582..\n"
".5641843...2\n"
"21..4...6714\n") == 0);
free(board319562332);
board319562332 = NULL;
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_golden_move(board, 7, 10, 6) == 1 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_golden_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_golden_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 11, 6) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_golden_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 9, 6) == 1 );


char* board287740035 = gamma_board(board);
assert( board287740035 != NULL );
assert( strcmp(board287740035, 
"778...7.8843\n"
"..5..515.6.7\n"
".16347..3823\n"
"62.362266113\n"
"725544.8.711\n"
"5625..83.377\n"
"7551.64.8725\n"
"21688141.437\n"
"88.423.2..64\n"
"18436.338253\n"
".5441843..12\n"
"21..4...6714\n") == 0);
free(board287740035);
board287740035 = NULL;
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_golden_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );


char* board459407501 = gamma_board(board);
assert( board459407501 != NULL );
assert( strcmp(board459407501, 
"778...7.8843\n"
"..5..515.6.7\n"
".16347..3823\n"
"62.362266113\n"
"725544.8.711\n"
"5625..83.377\n"
"7551.6458725\n"
"21688141.437\n"
"88.423.2..64\n"
"18436.338253\n"
".5441843..12\n"
"21..4...6714\n") == 0);
free(board459407501);
board459407501 = NULL;
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_golden_move(board, 6, 8, 8) == 0 );


char* board692203916 = gamma_board(board);
assert( board692203916 != NULL );
assert( strcmp(board692203916, 
"778...7.8843\n"
"..5..515.6.7\n"
"116347..3823\n"
"62.362266113\n"
"725544.8.711\n"
"5625..83.377\n"
"7551.6458725\n"
"21688141.437\n"
"88.423.2..64\n"
"18436.338253\n"
".5441843..12\n"
"21.544..6714\n") == 0);
free(board692203916);
board692203916 = NULL;
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );


char* board274255233 = gamma_board(board);
assert( board274255233 != NULL );
assert( strcmp(board274255233, 
"7788..7.8843\n"
"..5..515.6.7\n"
"116347..3823\n"
"62.362266113\n"
"725544.8.711\n"
"5625..83.377\n"
"7551.6458725\n"
"21688141.437\n"
"88.423.28.64\n"
"18436.338253\n"
".5441843..12\n"
"21.544..6714\n") == 0);
free(board274255233);
board274255233 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );


char* board734979935 = gamma_board(board);
assert( board734979935 != NULL );
assert( strcmp(board734979935, 
"7788..7.8843\n"
"..5..515.6.7\n"
"116347..3823\n"
"62.362266113\n"
"725544.8.711\n"
"5625..83.377\n"
"7551.6458725\n"
"21688141.437\n"
"88.423.28.64\n"
"18436.338253\n"
".5441843..12\n"
"21.544..6714\n") == 0);
free(board734979935);
board734979935 = NULL;
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board589550396 = gamma_board(board);
assert( board589550396 != NULL );
assert( strcmp(board589550396, 
"7788..7.8843\n"
"..5..515.677\n"
"116347..3823\n"
"62.362266113\n"
"725544.8.711\n"
"5625..83.377\n"
"7551.6458725\n"
"21688141.437\n"
"88.423828.64\n"
"18436.338253\n"
".5441843..12\n"
"215544..6714\n") == 0);
free(board589550396);
board589550396 = NULL;
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_free_fields(board, 8) == 14 );


gamma_delete(board);

    return 0;
}
