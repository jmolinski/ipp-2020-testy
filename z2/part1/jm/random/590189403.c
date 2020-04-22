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
uuid: 590189403
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 5, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );


char* board132314525 = gamma_board(board);
assert( board132314525 != NULL );
assert( strcmp(board132314525, 
"......34..5\n"
"3..........\n"
".........5.\n"
"4..........\n"
"...........\n"
".4.........\n"
".......1...\n"
".....1.....\n"
"..3.5..11..\n"
"..2.......2\n"
"...2.......\n") == 0);
free(board132314525);
board132314525 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );


char* board722928925 = gamma_board(board);
assert( board722928925 != NULL );
assert( strcmp(board722928925, 
"......34..5\n"
"3..........\n"
".........5.\n"
"4..........\n"
"...........\n"
".4.........\n"
".......1...\n"
".....1.....\n"
"..3.5..11..\n"
"..2.......2\n"
"...2.......\n") == 0);
free(board722928925);
board722928925 = NULL;
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_golden_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );


char* board801205682 = gamma_board(board);
assert( board801205682 != NULL );
assert( strcmp(board801205682, 
"......34..5\n"
"33.........\n"
".........5.\n"
"4..........\n"
"...........\n"
".4.........\n"
".......1...\n"
"....51.....\n"
"..3.5..11..\n"
"..2.......2\n"
"...2.......\n") == 0);
free(board801205682);
board801205682 = NULL;
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_golden_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 8 );


char* board792616370 = gamma_board(board);
assert( board792616370 != NULL );
assert( strcmp(board792616370, 
"......34..5\n"
"33.........\n"
"3........55\n"
"4..........\n"
"...........\n"
"44.........\n"
".......1...\n"
"....51.....\n"
"..2.5..11..\n"
"..2.......2\n"
"...2....3..\n") == 0);
free(board792616370);
board792616370 = NULL;
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_golden_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );


char* board736600181 = gamma_board(board);
assert( board736600181 != NULL );
assert( strcmp(board736600181, 
"......34..5\n"
"33.........\n"
"3........55\n"
"4..........\n"
"...........\n"
"44.........\n"
".......11..\n"
"....51.....\n"
"..2.5..11..\n"
"..2.5.....2\n"
"...2...33..\n") == 0);
free(board736600181);
board736600181 = NULL;
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );


char* board860294789 = gamma_board(board);
assert( board860294789 != NULL );
assert( strcmp(board860294789, 
"......34..5\n"
"33.........\n"
"3........55\n"
"4..........\n"
"...........\n"
"44.........\n"
".......11..\n"
"....51.....\n"
"..2.5..11..\n"
"..2.5.....2\n"
"...2...33..\n") == 0);
free(board860294789);
board860294789 = NULL;
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board242770423 = gamma_board(board);
assert( board242770423 != NULL );
assert( strcmp(board242770423, 
"......34..5\n"
"33.........\n"
"3........55\n"
"4..........\n"
"...........\n"
"44.........\n"
".......11..\n"
"..2.511....\n"
"..2.5..11.2\n"
"..2.5...3.2\n"
"...2...33.2\n") == 0);
free(board242770423);
board242770423 = NULL;
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board145069182 = gamma_board(board);
assert( board145069182 != NULL );
assert( strcmp(board145069182, 
"......34..5\n"
"33.........\n"
"3........55\n"
"4..........\n"
"...........\n"
"44.........\n"
".......11..\n"
"..2.511....\n"
"..2.5..11.2\n"
"..2.5...3.2\n"
"...2...33.2\n") == 0);
free(board145069182);
board145069182 = NULL;
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );


char* board340278638 = gamma_board(board);
assert( board340278638 != NULL );
assert( strcmp(board340278638, 
"......34..5\n"
"33.........\n"
"3........55\n"
"4..........\n"
"...........\n"
"44.........\n"
".......11..\n"
"..2.511....\n"
"..2.5..11.2\n"
"..2.5...3.2\n"
"...2...33.2\n") == 0);
free(board340278638);
board340278638 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 5) == 1 );


char* board677114734 = gamma_board(board);
assert( board677114734 != NULL );
assert( strcmp(board677114734, 
"......34..5\n"
"33.........\n"
"3........55\n"
"4..........\n"
"...........\n"
"444........\n"
".......11..\n"
".22.511....\n"
"..2.5.111.2\n"
"..2.5...3.2\n"
"...2...33.2\n") == 0);
free(board677114734);
board677114734 = NULL;
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 9) == 0 );


char* board763332252 = gamma_board(board);
assert( board763332252 != NULL );
assert( strcmp(board763332252, 
"......34..5\n"
"33.........\n"
"3........55\n"
"4.....1....\n"
"...........\n"
"444........\n"
".......11..\n"
".22.511....\n"
"..2.5.111.2\n"
"..2.5..13.2\n"
"...2...33.2\n") == 0);
free(board763332252);
board763332252 = NULL;
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );


char* board973124730 = gamma_board(board);
assert( board973124730 != NULL );
assert( strcmp(board973124730, 
"......34..5\n"
"33........5\n"
"3........55\n"
"4.....1....\n"
"...........\n"
"444........\n"
".......11..\n"
"222.511....\n"
"..2.5.11122\n"
"..2.5..13.2\n"
"...2..533.2\n") == 0);
free(board973124730);
board973124730 = NULL;
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board859907401 = gamma_board(board);
assert( board859907401 != NULL );
assert( strcmp(board859907401, 
"......34..5\n"
"33........5\n"
"3.......555\n"
"4.....1....\n"
"...........\n"
"444........\n"
".......11..\n"
"222.511....\n"
"..2.5.11122\n"
"..2.5.113.2\n"
"...2..533.2\n") == 0);
free(board859907401);
board859907401 = NULL;
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );


char* board952863877 = gamma_board(board);
assert( board952863877 != NULL );
assert( strcmp(board952863877, 
"......34..5\n"
"33........5\n"
"3.......555\n"
"4.....1...5\n"
"...........\n"
"444........\n"
"..2....11..\n"
"222.511....\n"
"..2.5.11122\n"
"..2.5.113.2\n"
"...2..533.2\n") == 0);
free(board952863877);
board952863877 = NULL;
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );


char* board135363842 = gamma_board(board);
assert( board135363842 != NULL );
assert( strcmp(board135363842, 
"......34..5\n"
"33........5\n"
"3.......555\n"
"4.....1...5\n"
"...........\n"
"444........\n"
"..2....11..\n"
"222.511....\n"
"..2.5.11122\n"
"..2.5.113.2\n"
"...2..533.2\n") == 0);
free(board135363842);
board135363842 = NULL;
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );


char* board897449909 = gamma_board(board);
assert( board897449909 != NULL );
assert( strcmp(board897449909, 
"......34..5\n"
"33........5\n"
"3.......555\n"
"4.....1...5\n"
"...........\n"
"444........\n"
"..2....11..\n"
"222.511....\n"
"..2.5.11122\n"
"..2.5.113.2\n"
"...2..533.2\n") == 0);
free(board897449909);
board897449909 = NULL;
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_golden_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );


char* board464333820 = gamma_board(board);
assert( board464333820 != NULL );
assert( strcmp(board464333820, 
"......34..5\n"
"33........5\n"
"3.......555\n"
"4.....1...5\n"
"...........\n"
"444........\n"
"..2.11.11..\n"
"2225511....\n"
"..2.5.11122\n"
"..2.5.113.2\n"
"...25.533.2\n") == 0);
free(board464333820);
board464333820 = NULL;
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_free_fields(board, 2) == 13 );


gamma_delete(board);

    return 0;
}
