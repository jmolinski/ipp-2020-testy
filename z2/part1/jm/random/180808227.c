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
uuid: 180808227
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 4, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_golden_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_free_fields(board, 5) == 54 );


char* board675301829 = gamma_board(board);
assert( board675301829 != NULL );
assert( strcmp(board675301829, 
"...............\n"
".....2.2.1.....\n"
".......5...8...\n"
".......4.......\n") == 0);
free(board675301829);
board675301829 = NULL;
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 7, 14, 0) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 8, 12, 2) == 1 );


char* board529205290 = gamma_board(board);
assert( board529205290 != NULL );
assert( strcmp(board529205290, 
"...........6...\n"
".....2.2.1..8..\n"
".......5...86..\n"
".......4......7\n") == 0);
free(board529205290);
board529205290 = NULL;
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 13, 1) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_golden_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_golden_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 2, 14) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 14, 3) == 1 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );


char* board806851533 = gamma_board(board);
assert( board806851533 != NULL );
assert( strcmp(board806851533, 
"314683..5426..8\n"
"7.96.2.211..8..\n"
"8268.4.5..8869.\n"
"58285.24...4..7\n") == 0);
free(board806851533);
board806851533 = NULL;
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 9, 12, 0) == 1 );


char* board847701755 = gamma_board(board);
assert( board847701755 != NULL );
assert( strcmp(board847701755, 
"314683..5426..8\n"
"7.96.2.211..8..\n"
"8268.475..8869.\n"
"58285.24...49.7\n") == 0);
free(board847701755);
board847701755 = NULL;
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );


char* board836055167 = gamma_board(board);
assert( board836055167 != NULL );
assert( strcmp(board836055167, 
"314683..5426..8\n"
"7.96.2.211..8..\n"
"8268.475..8869.\n"
"58285.24...49.7\n") == 0);
free(board836055167);
board836055167 = NULL;
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 14, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );


char* board703632445 = gamma_board(board);
assert( board703632445 != NULL );
assert( strcmp(board703632445, 
"314683..5426..8\n"
"7.96.2.211..8..\n"
"8268.475..88697\n"
"58285.24...49.7\n") == 0);
free(board703632445);
board703632445 = NULL;
assert( gamma_golden_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
