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
uuid: 730297496
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );


char* board795795026 = gamma_board(board);
assert( board795795026 != NULL );
assert( strcmp(board795795026, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..1.......\n"
"..........\n") == 0);
free(board795795026);
board795795026 = NULL;
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );


char* board977719756 = gamma_board(board);
assert( board977719756 != NULL );
assert( strcmp(board977719756, 
"......3...\n"
"........6.\n"
"..........\n"
"..2.......\n"
"..........\n"
"..........\n"
"..........\n"
".....2..4.\n"
"5.........\n"
"..1.......\n"
"..6.......\n") == 0);
free(board977719756);
board977719756 = NULL;
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 9, 8, 8) == 1 );
assert( gamma_golden_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_free_fields(board, 6) == 93 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_golden_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_free_fields(board, 5) == 88 );


char* board832419624 = gamma_board(board);
assert( board832419624 != NULL );
assert( strcmp(board832419624, 
"...63.3...\n"
"1......26.\n"
"........9.\n"
"..2.....4.\n"
"3...899...\n"
"........3.\n"
"..........\n"
".1...2..4.\n"
"5........4\n"
"..1..2....\n"
"..6.......\n") == 0);
free(board832419624);
board832419624 = NULL;
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 84 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_free_fields(board, 8) == 77 );
assert( gamma_golden_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 9, 0, 8) == 1 );
assert( gamma_free_fields(board, 9) == 59 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );


char* board787783340 = gamma_board(board);
assert( board787783340 != NULL );
assert( strcmp(board787783340, 
"...63.3.7.\n"
"1...5..26.\n"
"9.7.48519.\n"
"5.2.....4.\n"
"3...899..6\n"
"....4.7835\n"
"..2.15..3.\n"
"91..62..47\n"
"5599..8..4\n"
"2.1.62833.\n"
"3.64.1....\n") == 0);
free(board787783340);
board787783340 = NULL;
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_golden_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_free_fields(board, 9) == 11 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_golden_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_free_fields(board, 9) == 10 );


char* board994680350 = gamma_board(board);
assert( board994680350 != NULL );
assert( strcmp(board994680350, 
"...63.3.7.\n"
"17.65.326.\n"
"9.7448519.\n"
"5.2.....46\n"
"3...899..6\n"
"....4.7835\n"
"..2.15..3.\n"
"911962.747\n"
"5599.983.4\n"
"281.62833.\n"
"3.6481....\n") == 0);
free(board994680350);
board994680350 = NULL;
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );


char* board410281457 = gamma_board(board);
assert( board410281457 != NULL );
assert( strcmp(board410281457, 
"...63.3.7.\n"
"17.65.326.\n"
"9.7448519.\n"
"5.2.....46\n"
"3...899..6\n"
"....4.7835\n"
"..2.15..3.\n"
"911962.747\n"
"5599.983.4\n"
"281.62833.\n"
"3.6481....\n") == 0);
free(board410281457);
board410281457 = NULL;
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_free_fields(board, 6) == 8 );


char* board818233584 = gamma_board(board);
assert( board818233584 != NULL );
assert( strcmp(board818233584, 
"...63.3.7.\n"
"17.65.326.\n"
"9.7448519.\n"
"5.2.....46\n"
"3...899..6\n"
"....4.7835\n"
"..2.15..3.\n"
"911962.747\n"
"5599.983.4\n"
"281.62833.\n"
"3.6481....\n") == 0);
free(board818233584);
board818233584 = NULL;
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board722647579 = gamma_board(board);
assert( board722647579 != NULL );
assert( strcmp(board722647579, 
"...63.3.7.\n"
"17.65.326.\n"
"9.7448519.\n"
"5.2.....46\n"
"3..8899..6\n"
"....4.7835\n"
"..2.15..3.\n"
"911962.747\n"
"5599.983.4\n"
"281.62833.\n"
"3.6481....\n") == 0);
free(board722647579);
board722647579 = NULL;
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );


char* board890665458 = gamma_board(board);
assert( board890665458 != NULL );
assert( strcmp(board890665458, 
"...63.3.7.\n"
"17.65.326.\n"
"9.7448519.\n"
"5.2.....46\n"
"3..8899..6\n"
"....4.7835\n"
"..2.15.73.\n"
"911962.747\n"
"5599.983.4\n"
"281.62833.\n"
"3.6481....\n") == 0);
free(board890665458);
board890665458 = NULL;
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );


char* board389024965 = gamma_board(board);
assert( board389024965 != NULL );
assert( strcmp(board389024965, 
"...63.3.7.\n"
"17.65.326.\n"
"9.7448519.\n"
"5.2...9.46\n"
"3..8899..6\n"
"....447835\n"
"..2.15.73.\n"
"911962.747\n"
"5599.983.4\n"
"281.62833.\n"
"3.6481....\n") == 0);
free(board389024965);
board389024965 = NULL;
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );


char* board631613760 = gamma_board(board);
assert( board631613760 != NULL );
assert( strcmp(board631613760, 
"...63.3.7.\n"
"17.65.326.\n"
"9.7448519.\n"
"5.2...9.46\n"
"3..8899..6\n"
"....447835\n"
"..2.15.73.\n"
"911962.747\n"
"5599.983.4\n"
"281.62833.\n"
"3.6481....\n") == 0);
free(board631613760);
board631613760 = NULL;
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 7, 1) == 0 );


char* board661397875 = gamma_board(board);
assert( board661397875 != NULL );
assert( strcmp(board661397875, 
"...63.3.7.\n"
"17.65.326.\n"
"9.7448519.\n"
"5.2...9.46\n"
"3..8899..6\n"
"....447835\n"
"..2.15.73.\n"
"911962.747\n"
"5599.983.4\n"
"281.62833.\n"
"3.6481....\n") == 0);
free(board661397875);
board661397875 = NULL;
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );


gamma_delete(board);

    return 0;
}
