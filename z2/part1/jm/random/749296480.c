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
uuid: 749296480
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 21, 6, 49);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 19) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_free_fields(board, 4) == 228 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 1, 15) == 1 );
assert( gamma_free_fields(board, 6) == 218 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 3, 9, 14) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 6, 15) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 5, 8, 17) == 1 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_golden_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 1, 3, 19) == 0 );
assert( gamma_move(board, 1, 5, 12) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 20, 9) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 18, 2) == 0 );
assert( gamma_move(board, 2, 17, 0) == 0 );
assert( gamma_move(board, 2, 2, 17) == 1 );
assert( gamma_free_fields(board, 2) == 191 );
assert( gamma_move(board, 4, 19, 10) == 0 );
assert( gamma_move(board, 4, 2, 18) == 1 );
assert( gamma_golden_move(board, 4, 15, 1) == 0 );
assert( gamma_move(board, 5, 19, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 18, 1) == 0 );
assert( gamma_move(board, 1, 20, 9) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_free_fields(board, 3) == 188 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_free_fields(board, 5) == 188 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_free_fields(board, 6) == 187 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 1, 2, 19) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_free_fields(board, 4) == 184 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 6, 17, 6) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 7, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 2, 7, 16) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 1, 16) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_free_fields(board, 5) == 177 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 5, 19) == 1 );
assert( gamma_free_fields(board, 1) == 175 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_free_fields(board, 2) == 174 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 172 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_free_fields(board, 5) == 171 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 1, 9, 18) == 1 );
assert( gamma_move(board, 1, 8, 12) == 1 );


char* board299694330 = gamma_board(board);
assert( board299694330 != NULL );
assert( strcmp(board299694330, 
"...........\n"
"..11.1.....\n"
"..4......1.\n"
"..2.....5..\n"
".3.....2...\n"
".6....4....\n"
".......2.32\n"
"...2..2....\n"
".....1..1..\n"
".2.........\n"
"251......2.\n"
"...62.1633.\n"
"..63..4...3\n"
".6.....3.43\n"
"..2........\n"
"1......33.4\n"
"1.41.54...3\n"
"...45.56.6.\n"
"3..5...2...\n"
"5.65..2..3.\n"
"...3...25..\n") == 0);
free(board299694330);
board299694330 = NULL;
assert( gamma_move(board, 2, 20, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 166 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );


char* board386089940 = gamma_board(board);
assert( board386089940 != NULL );
assert( strcmp(board386089940, 
"...........\n"
"..11.1.....\n"
"..4......1.\n"
"..2.....5..\n"
".3.....2...\n"
".6....4....\n"
".......2.32\n"
"...2..2....\n"
".....1..1..\n"
".2.........\n"
"251......2.\n"
"...6231633.\n"
"..63..4...3\n"
".62....3.43\n"
"..2........\n"
"1......33.4\n"
"1.41.54...3\n"
"...45.56.6.\n"
"3..5...2...\n"
"5.65..2..3.\n"
"...3...25..\n") == 0);
free(board386089940);
board386089940 = NULL;
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_golden_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_free_fields(board, 6) == 162 );
assert( gamma_move(board, 1, 18, 3) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_golden_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 3, 20, 6) == 0 );
assert( gamma_move(board, 3, 3, 14) == 1 );
assert( gamma_free_fields(board, 3) == 160 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 9, 17) == 1 );
assert( gamma_free_fields(board, 6) == 157 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 3, 16) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 20, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 20, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 15) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 18, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );


char* board354246472 = gamma_board(board);
assert( board354246472 != NULL );
assert( strcmp(board354246472, 
"...........\n"
"..11.1.....\n"
"..4......1.\n"
"..2.....56.\n"
".3.1...2...\n"
".6...14....\n"
"..43...2.32\n"
"...2..2....\n"
".....1..1..\n"
".2....4....\n"
"251......2.\n"
"...6231633.\n"
"..63..4.5.3\n"
".62....3.43\n"
"..2.2..6...\n"
"13.....33.4\n"
"1.41.54...3\n"
"...45.56.6.\n"
"3..5...2..1\n"
"5.65..2.63.\n"
"...3...25..\n") == 0);
free(board354246472);
board354246472 = NULL;
assert( gamma_move(board, 5, 19, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 10, 20) == 1 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 4, 14) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 4, 17, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 20, 6) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 8, 18) == 1 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 15, 7) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 2, 10, 16) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 17, 0) == 0 );
assert( gamma_move(board, 5, 10, 18) == 1 );
assert( gamma_move(board, 6, 16, 5) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 1, 19) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 10, 18) == 0 );
assert( gamma_move(board, 5, 17, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 19, 10) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 4, 20) == 1 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 20, 0) == 0 );
assert( gamma_free_fields(board, 6) == 127 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 2, 0, 17) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_move(board, 6, 18, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 9, 17) == 0 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_free_fields(board, 6) == 122 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 9, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_free_fields(board, 2) == 121 );
assert( gamma_move(board, 3, 16, 2) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_free_fields(board, 3) == 121 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 17, 7) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 17) == 0 );
assert( gamma_free_fields(board, 6) == 121 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 1, 17) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 0, 18) == 1 );
assert( gamma_move(board, 4, 20, 6) == 0 );
assert( gamma_move(board, 5, 4, 18) == 1 );
assert( gamma_move(board, 5, 1, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_free_fields(board, 1) == 114 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 5, 18, 1) == 0 );


char* board512168046 = gamma_board(board);
assert( board512168046 != NULL );
assert( strcmp(board512168046, 
"....1.....3\n"
".111.1.....\n"
"3.4.5...315\n"
"242.....56.\n"
".3.1...2..2\n"
".6...141.2.\n"
".3431..2.32\n"
".5.2..2....\n"
"...4.1361..\n"
".2....45...\n"
"251.5.4..2.\n"
"4..6231633.\n"
"3.633.4.5.3\n"
".62..2.3.43\n"
"..2.26.65.1\n"
"1323...33.4\n"
"1.41.542.33\n"
"...45.56.66\n"
"3.55...2211\n"
"5.652.2.63.\n"
"32.3...25.6\n") == 0);
free(board512168046);
board512168046 = NULL;
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_free_fields(board, 6) == 113 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 6, 16) == 1 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 1, 20, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_golden_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 20) == 1 );
assert( gamma_move(board, 4, 2, 18) == 0 );
assert( gamma_free_fields(board, 4) == 110 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 5, 2, 16) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_free_fields(board, 6) == 107 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_golden_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 20, 0) == 0 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );


char* board691098799 = gamma_board(board);
assert( board691098799 != NULL );
assert( strcmp(board691098799, 
"..3.1.....3\n"
".111.1.....\n"
"3.4.5...315\n"
"242.....56.\n"
".351..62..2\n"
".6...141.2.\n"
".3431..2.32\n"
".5.2..2....\n"
"...4.1361..\n"
".2...2456..\n"
"251.554..2.\n"
"4..6231633.\n"
"3.633.4.5.3\n"
"262..2.3.43\n"
"..2.26.65.1\n"
"1323...33.4\n"
"1.41.542.33\n"
"...25.56.66\n"
"3.556..2211\n"
"54652.2.63.\n"
"32.3...25.6\n") == 0);
free(board691098799);
board691098799 = NULL;
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 16, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_golden_move(board, 6, 18, 10) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_golden_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 6, 19) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 3, 15) == 1 );
assert( gamma_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 1, 5, 19) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_move(board, 3, 17, 10) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 15, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 10, 17) == 1 );
assert( gamma_move(board, 3, 17, 7) == 0 );
assert( gamma_golden_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_move(board, 5, 19, 4) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_golden_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 19) == 1 );
assert( gamma_move(board, 3, 20, 1) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 4, 0, 17) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 20, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 17, 4) == 0 );
assert( gamma_move(board, 4, 8, 16) == 1 );
assert( gamma_move(board, 5, 6, 14) == 1 );
assert( gamma_free_fields(board, 5) == 94 );
assert( gamma_golden_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 20, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 17, 4) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 0, 15) == 1 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 1, 17, 6) == 0 );


char* board694474740 = gamma_board(board);
assert( board694474740 != NULL );
assert( strcmp(board694474740, 
"..3.1.....3\n"
".111.14.2..\n"
"3.4.5...315\n"
"242.....562\n"
".351..624.2\n"
"56.5.141.2.\n"
".3431.52.32\n"
".5.2..2....\n"
"...461361..\n"
".2...2456..\n"
"251.554..2.\n"
"4..6231633.\n"
"3.633.4.5.3\n"
"262..2.3.43\n"
"..2.26.65.1\n"
"132343.33.4\n"
"1.415542.33\n"
"...25556.66\n"
"3.551..2211\n"
"54652.2.63.\n"
"32.3...25.6\n") == 0);
free(board694474740);
board694474740 = NULL;
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 92 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 20, 7) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 17, 3) == 0 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );


char* board955010578 = gamma_board(board);
assert( board955010578 != NULL );
assert( strcmp(board955010578, 
"..3.1.....3\n"
".111.14.2..\n"
"3.4.5...315\n"
"242.....562\n"
".351..624.2\n"
"56.5.141.2.\n"
".3431.52.32\n"
"45.2..2....\n"
"...461361..\n"
".2..32456..\n"
"251.554.22.\n"
"4..6231633.\n"
"33633.4.5.3\n"
"262..2.3.43\n"
"..2.26465.1\n"
"132343.33.4\n"
"1.415542.33\n"
"...25556.66\n"
"3.551..2211\n"
"54652.2.63.\n"
"32.3..62516\n") == 0);
free(board955010578);
board955010578 = NULL;
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 4, 7, 17) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 2, 6, 19) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 17, 5) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 19, 9) == 0 );
assert( gamma_move(board, 3, 8, 18) == 0 );


char* board757631603 = gamma_board(board);
assert( board757631603 != NULL );
assert( strcmp(board757631603, 
"..3.1.....3\n"
".111.14.2..\n"
"3.4.5...315\n"
"242....4562\n"
".351..624.2\n"
"56.5.141.2.\n"
".3431.52.32\n"
"45.2..22...\n"
"...461361..\n"
".2..32456..\n"
"251.554.22.\n"
"4.26231633.\n"
"33633.4.5.3\n"
"262..2.3.43\n"
"..2.26465.1\n"
"132343.33.4\n"
"1.415542.33\n"
"...25556.66\n"
"3.551.42211\n"
"54652.2.633\n"
"32.3..62516\n") == 0);
free(board757631603);
board757631603 = NULL;
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 16, 5) == 0 );
assert( gamma_golden_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 6, 2, 20) == 0 );
assert( gamma_move(board, 6, 4, 16) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 5, 8, 20) == 1 );


char* board443353792 = gamma_board(board);
assert( board443353792 != NULL );
assert( strcmp(board443353792, 
"..3.1...5.3\n"
".111.14.2..\n"
"3.4.5...315\n"
"242....4562\n"
".3516.624.2\n"
"56.5.141.2.\n"
".3431.52.32\n"
"45.2..22...\n"
"..1461361..\n"
".2..32456..\n"
"251.554.22.\n"
"4.26231635.\n"
"33633.4.5.3\n"
"262.52.3.43\n"
"..2.26465.1\n"
"132343.33.4\n"
"16415542.33\n"
"...25556.66\n"
"3.551.42211\n"
"54652.2.633\n"
"32.3..62516\n") == 0);
free(board443353792);
board443353792 = NULL;
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 2, 20, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 19, 7) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 4, 17) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_move(board, 1, 20, 7) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 3, 17, 3) == 0 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 4, 18, 1) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 17) == 0 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 1, 10, 15) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 5, 20, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 10, 19) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_golden_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );


char* board933635708 = gamma_board(board);
assert( board933635708 != NULL );
assert( strcmp(board933635708, 
"..3.1...5.3\n"
".111.14.2.6\n"
"3.4.5...315\n"
"242.2..4562\n"
".3516.624.2\n"
"56.5.141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361..\n"
".21.32456..\n"
"251.554.222\n"
"4.26231635.\n"
"3363334.5.3\n"
"262.52.3443\n"
"..2.2646511\n"
"132343.3364\n"
"16415542.33\n"
"..225556.66\n"
"3.551.42211\n"
"54652.2.633\n"
"32.3..62516\n") == 0);
free(board933635708);
board933635708 = NULL;
assert( gamma_move(board, 4, 5, 19) == 0 );
assert( gamma_move(board, 5, 10, 12) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_golden_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 5, 16) == 1 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 1, 20, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 20, 1) == 0 );
assert( gamma_move(board, 2, 1, 19) == 0 );
assert( gamma_move(board, 3, 20, 7) == 0 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 4, 6, 18) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 6, 3, 18) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_golden_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 7, 18) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 24 );
assert( gamma_golden_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 20, 7) == 0 );
assert( gamma_move(board, 6, 1, 20) == 1 );
assert( gamma_move(board, 6, 1, 17) == 0 );


char* board260850398 = gamma_board(board);
assert( board260850398 != NULL );
assert( strcmp(board260850398, 
".63.1...5.3\n"
".111.14.2.6\n"
"3.465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"56.5.141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
".21.32456..\n"
"251.554.222\n"
"4.26231635.\n"
"3363334.5.3\n"
"262.52.3443\n"
"..2.2646511\n"
"132343.3364\n"
"16415542.33\n"
"..225556.66\n"
"3.551.42211\n"
"54652.2.633\n"
"32.32.62516\n") == 0);
free(board260850398);
board260850398 = NULL;
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );


char* board169018294 = gamma_board(board);
assert( board169018294 != NULL );
assert( strcmp(board169018294, 
".63.1...5.3\n"
".111.14.2.6\n"
"3.465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"56.5.141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
".21.32456..\n"
"251.554.222\n"
"4.26231635.\n"
"3363334.5.3\n"
"262.52.3443\n"
"..2.2646511\n"
"132343.3364\n"
"16415542.33\n"
"..225556.66\n"
"3.551.42211\n"
"54652.2.633\n"
"32.32.62516\n") == 0);
free(board169018294);
board169018294 = NULL;
assert( gamma_move(board, 3, 20, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 19, 0) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 11, 9) == 0 );


char* board280572525 = gamma_board(board);
assert( board280572525 != NULL );
assert( strcmp(board280572525, 
".63.1...5.3\n"
".111.14.2.6\n"
"3.465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"56.5.141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
".21.32456..\n"
"251.554.222\n"
"4.262316356\n"
"336333465.3\n"
"262.5223443\n"
"6.2.2646511\n"
"132343.3364\n"
"16415542.33\n"
"..225556466\n"
"3.551.42211\n"
"54652.2.633\n"
"32.32.62516\n") == 0);
free(board280572525);
board280572525 = NULL;
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 2, 2, 15) == 1 );


char* board196181640 = gamma_board(board);
assert( board196181640 != NULL );
assert( strcmp(board196181640, 
".63.1...5.3\n"
".111.14.2.6\n"
"3.465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"5625.141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
".21.32456..\n"
"251.554.222\n"
"4.262316356\n"
"336333465.3\n"
"262.5223443\n"
"6.2.2646511\n"
"132343.3364\n"
"16415542.33\n"
"..225556466\n"
"3.551.42211\n"
"54652.2.633\n"
"32.32.62516\n") == 0);
free(board196181640);
board196181640 = NULL;
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 17, 3) == 0 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_move(board, 5, 3, 19) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 20) == 1 );
assert( gamma_move(board, 5, 20, 0) == 0 );
assert( gamma_move(board, 6, 18, 1) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_golden_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 1, 18) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 4, 16) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 1, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_move(board, 3, 8, 18) == 0 );
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 6, 20) == 0 );
assert( gamma_move(board, 6, 4, 15) == 1 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 20) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 20, 7) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 20, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 6, 6) == 0 );


char* board409363778 = gamma_board(board);
assert( board409363778 != NULL );
assert( strcmp(board409363778, 
".63.1.3.5.3\n"
".111.14.2.6\n"
"33465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"56256141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
".21432456..\n"
"251.554.222\n"
"4.262316356\n"
"336333465.3\n"
"262.5223443\n"
"6.2.2646511\n"
"13234363364\n"
"16415542.33\n"
"..225556466\n"
"3.551.42211\n"
"54652.25633\n"
"32532.62516\n") == 0);
free(board409363778);
board409363778 = NULL;
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );


char* board748651882 = gamma_board(board);
assert( board748651882 != NULL );
assert( strcmp(board748651882, 
".63.1.3.5.3\n"
".111.14.2.6\n"
"33465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"56256141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
".21432456..\n"
"251.554.222\n"
"4.262316356\n"
"336333465.3\n"
"262.5223443\n"
"6.2.2646511\n"
"13234363364\n"
"16415542.33\n"
"..225556466\n"
"3.551.42211\n"
"54652.25633\n"
"32532.62516\n") == 0);
free(board748651882);
board748651882 = NULL;
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 35 );


char* board957524453 = gamma_board(board);
assert( board957524453 != NULL );
assert( strcmp(board957524453, 
".63.1.3.5.3\n"
".111.14.2.6\n"
"33465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"56256141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
".21432456..\n"
"251.554.222\n"
"4.262316356\n"
"336333465.3\n"
"262.5223443\n"
"6.2.2646511\n"
"13234363364\n"
"16415542.33\n"
"..225556466\n"
"3.551.42211\n"
"54652.25633\n"
"32532.62516\n") == 0);
free(board957524453);
board957524453 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 10, 20) == 0 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_golden_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_free_fields(board, 6) == 43 );


char* board684723823 = gamma_board(board);
assert( board684723823 != NULL );
assert( strcmp(board684723823, 
".63.1.3.5.3\n"
".111.14.2.6\n"
"33465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"56256141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
"621432456..\n"
"251.554.222\n"
"4.262316356\n"
"336333465.3\n"
"262.5223443\n"
"6.2.2646511\n"
"13234363364\n"
"16415542.33\n"
"..225556466\n"
"3.551.42211\n"
"54652.25633\n"
"32532.62516\n") == 0);
free(board684723823);
board684723823 = NULL;
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 6, 9, 20) == 1 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 19) == 0 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );


char* board310573774 = gamma_board(board);
assert( board310573774 != NULL );
assert( strcmp(board310573774, 
".63.1.3.563\n"
".111.14.2.6\n"
"33465.43315\n"
"242.2..4562\n"
".35164624.2\n"
"56256141.21\n"
".3431.52.32\n"
"45.2.122...\n"
"..1461361.5\n"
"6214324565.\n"
"251.554.222\n"
"4.262316356\n"
"336333465.3\n"
"262.5223443\n"
"6.2.2646511\n"
"13234363364\n"
"16415542.33\n"
"..225556466\n"
"3.551.42211\n"
"54652.25633\n"
"32532.62516\n") == 0);
free(board310573774);
board310573774 = NULL;


gamma_delete(board);

    return 0;
}
