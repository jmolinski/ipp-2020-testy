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
uuid: 543306191
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 10, 7, 41);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_free_fields(board, 2) == 127 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_free_fields(board, 4) == 113 );


char* board684131735 = gamma_board(board);
assert( board684131735 != NULL );
assert( strcmp(board684131735, 
"3.........1..\n"
"......1..1...\n"
"..5...16.....\n"
".3.42........\n"
"....2...3....\n"
"......2......\n"
"..7.3........\n"
".......7.....\n"
"..6..........\n"
".............\n") == 0);
free(board684131735);
board684131735 = NULL;
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_free_fields(board, 7) == 106 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board237922637 = gamma_board(board);
assert( board237922637 != NULL );
assert( strcmp(board237922637, 
"33........1..\n"
"......1..1...\n"
"..5.7.16.....\n"
".3.42........\n"
"....2...3..4.\n"
"......25.....\n"
"..7.3........\n"
".......75....\n"
"..6.....2....\n"
"7............\n") == 0);
free(board237922637);
board237922637 = NULL;
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 12, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_free_fields(board, 6) == 88 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 86 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_golden_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 12, 2) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_free_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );


char* board657496174 = gamma_board(board);
assert( board657496174 != NULL );
assert( strcmp(board657496174, 
"33275636741.7\n"
"35.7.61361.2.\n"
"455673166..34\n"
".364226.11...\n"
"6425225.3..42\n"
".72.3.2562.5.\n"
"..7.3....6.33\n"
".62274.75..17\n"
"7565.4.6253..\n"
"7.54727.46..7\n") == 0);
free(board657496174);
board657496174 = NULL;
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_golden_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );


char* board212307685 = gamma_board(board);
assert( board212307685 != NULL );
assert( strcmp(board212307685, 
"33275636741.7\n"
"3577761361.2.\n"
"4556731661.34\n"
".364726411...\n"
"6425225.32.42\n"
".7213.256255.\n"
"..7.3....6.33\n"
".62274.75..17\n"
"7565.466253.3\n"
"7.54727246..7\n") == 0);
free(board212307685);
board212307685 = NULL;
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board129766263 = gamma_board(board);
assert( board129766263 != NULL );
assert( strcmp(board129766263, 
"33275636741.7\n"
"3577761361.2.\n"
"4556731661.34\n"
".364726411...\n"
"6425225.32.42\n"
".7213.256255.\n"
"..7.3....6.33\n"
".62274.75..17\n"
"7565.466253.3\n"
"7754727246..7\n") == 0);
free(board129766263);
board129766263 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 11, 8) == 0 );


char* board328380450 = gamma_board(board);
assert( board328380450 != NULL );
assert( strcmp(board328380450, 
"33275636741.7\n"
"3577761361.2.\n"
"4556731661.34\n"
".364726411...\n"
"6425225.32.42\n"
".7213.256255.\n"
".17.3....6.33\n"
".62274.75..17\n"
"7565.466253.3\n"
"7754727246..7\n") == 0);
free(board328380450);
board328380450 = NULL;
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );


char* board536517962 = gamma_board(board);
assert( board536517962 != NULL );
assert( strcmp(board536517962, 
"33275636741.7\n"
"3577761361.2.\n"
"4556731661.34\n"
".364726411...\n"
"6425225.32.42\n"
".7213.256255.\n"
".17.3....6.33\n"
".62274.75..17\n"
"7565.466253.3\n"
"7754727246..7\n") == 0);
free(board536517962);
board536517962 = NULL;
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );


char* board625868996 = gamma_board(board);
assert( board625868996 != NULL );
assert( strcmp(board625868996, 
"33275636741.7\n"
"3577761361.2.\n"
"4556731661.34\n"
".364726411.1.\n"
"6425225.32.42\n"
".7213.256255.\n"
".17.3....6.33\n"
".62274.75..17\n"
"7565.466253.3\n"
"77547272467.7\n") == 0);
free(board625868996);
board625868996 = NULL;
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
