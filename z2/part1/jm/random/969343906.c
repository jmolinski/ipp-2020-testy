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
uuid: 969343906
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 11, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );


char* board115630022 = gamma_board(board);
assert( board115630022 != NULL );
assert( strcmp(board115630022, 
"52.1.....\n"
"6.3...5..\n"
"4.2.526..\n"
"6....63..\n"
".5.26.3..\n"
"6..312...\n"
".535.3...\n"
".3422....\n"
"14.....1.\n"
"46.3.2.3.\n"
"6.42.....\n") == 0);
free(board115630022);
board115630022 = NULL;
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );


char* board888779159 = gamma_board(board);
assert( board888779159 != NULL );
assert( strcmp(board888779159, 
"52.1.....\n"
"6.3...5..\n"
"4.2.526..\n"
"6....63..\n"
".5.26.3..\n"
"6..312...\n"
".53553...\n"
".3422...4\n"
"14.....1.\n"
"46.3.2.3.\n"
"6.42.....\n") == 0);
free(board888779159);
board888779159 = NULL;
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );


char* board415952587 = gamma_board(board);
assert( board415952587 != NULL );
assert( strcmp(board415952587, 
"52.1....1\n"
"6.3...5..\n"
"442.526..\n"
"6....63..\n"
".5.26.3..\n"
"6.3312.1.\n"
".53553...\n"
".3422...4\n"
"14.....1.\n"
"46.3.2.3.\n"
"6142.....\n") == 0);
free(board415952587);
board415952587 = NULL;
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );


char* board866987710 = gamma_board(board);
assert( board866987710 != NULL );
assert( strcmp(board866987710, 
"52.14...1\n"
"6.3...5..\n"
"442.5265.\n"
"6..4463..\n"
".5326.3..\n"
"633312.13\n"
"6535554..\n"
".3422...4\n"
"144....1.\n"
"46.3.2.3.\n"
"61421.53.\n") == 0);
free(board866987710);
board866987710 = NULL;
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );


char* board660948855 = gamma_board(board);
assert( board660948855 != NULL );
assert( strcmp(board660948855, 
"52.14...1\n"
"6.3...5..\n"
"442.5265.\n"
"6..44635.\n"
".5326.3..\n"
"633312.13\n"
"6535554..\n"
".3422...4\n"
"144....1.\n"
"46.3.2.3.\n"
"61421.53.\n") == 0);
free(board660948855);
board660948855 = NULL;
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );


char* board879201717 = gamma_board(board);
assert( board879201717 != NULL );
assert( strcmp(board879201717, 
"52.14...1\n"
"6.3...5..\n"
"442.5265.\n"
"6..44635.\n"
".5326.3..\n"
"633312.13\n"
"6535554..\n"
".3422...4\n"
"144...31.\n"
"46.3.2.3.\n"
"61421.53.\n") == 0);
free(board879201717);
board879201717 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_move(board, 2, 9, 6) == 0 );


char* board993573116 = gamma_board(board);
assert( board993573116 != NULL );
assert( strcmp(board993573116, 
"52.14...1\n"
"6.3...5..\n"
"442.5265.\n"
"6..44635.\n"
".5326.3..\n"
"633312.13\n"
"6535554..\n"
".3422...4\n"
"144...31.\n"
"46.3.2.3.\n"
"61421.53.\n") == 0);
free(board993573116);
board993573116 = NULL;
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_golden_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board742107061 = gamma_board(board);
assert( board742107061 != NULL );
assert( strcmp(board742107061, 
"52.14...1\n"
"6.3...5..\n"
"442.5265.\n"
"6..44635.\n"
".5326.3..\n"
"633312.13\n"
"6535554..\n"
".3422...4\n"
"144...31.\n"
"46.3.233.\n"
"61421.53.\n") == 0);
free(board742107061);
board742107061 = NULL;
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );


char* board200092190 = gamma_board(board);
assert( board200092190 != NULL );
assert( strcmp(board200092190, 
"52.14...1\n"
"6.3...5..\n"
"442.5265.\n"
"64.44635.\n"
".5326.3..\n"
"633312313\n"
"6535554..\n"
".3422...4\n"
"144...31.\n"
"46.3.233.\n"
"61421.53.\n") == 0);
free(board200092190);
board200092190 = NULL;
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 0) == 0 );


char* board192312891 = gamma_board(board);
assert( board192312891 != NULL );
assert( strcmp(board192312891, 
"52.14...1\n"
"6.3...5..\n"
"442.52653\n"
"64.44635.\n"
".5326.3..\n"
"633312313\n"
"6535554..\n"
".3422...4\n"
"144...31.\n"
"46.3.233.\n"
"61421.53.\n") == 0);
free(board192312891);
board192312891 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
