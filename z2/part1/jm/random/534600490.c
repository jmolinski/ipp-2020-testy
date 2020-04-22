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
uuid: 534600490
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 5, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );


char* board417017692 = gamma_board(board);
assert( board417017692 != NULL );
assert( strcmp(board417017692, 
"...1....\n"
"........\n"
"2..1....\n"
".....3..\n"
"2.......\n") == 0);
free(board417017692);
board417017692 = NULL;
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );


char* board348987730 = gamma_board(board);
assert( board348987730 != NULL );
assert( strcmp(board348987730, 
".8.1.8..\n"
"1.......\n"
"22.1....\n"
"..6..3..\n"
"2...4.5.\n") == 0);
free(board348987730);
board348987730 = NULL;
assert( gamma_move(board, 5, 0, 7) == 0 );


char* board631259492 = gamma_board(board);
assert( board631259492 != NULL );
assert( strcmp(board631259492, 
".8.1.8..\n"
"1.......\n"
"22.1....\n"
"..6..3..\n"
"2...4.5.\n") == 0);
free(board631259492);
board631259492 = NULL;
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );


char* board549493000 = gamma_board(board);
assert( board549493000 != NULL );
assert( strcmp(board549493000, 
"38.1.894\n"
"176.....\n"
"22.189..\n"
".76..3.1\n"
"2...4.5.\n") == 0);
free(board549493000);
board549493000 = NULL;
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_golden_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_free_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );


char* board528121857 = gamma_board(board);
assert( board528121857 != NULL );
assert( strcmp(board528121857, 
"38.15894\n"
"17657...\n"
"22718953\n"
"87613311\n"
"2.184.51\n") == 0);
free(board528121857);
board528121857 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_golden_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );


char* board417756756 = gamma_board(board);
assert( board417756756 != NULL );
assert( strcmp(board417756756, 
"37815894\n"
"176575..\n"
"22718953\n"
"87613311\n"
"2.184.51\n") == 0);
free(board417756756);
board417756756 = NULL;
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_free_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );


char* board877780614 = gamma_board(board);
assert( board877780614 != NULL );
assert( strcmp(board877780614, 
"37815894\n"
"176575.1\n"
"22718953\n"
"87613311\n"
"26184.51\n") == 0);
free(board877780614);
board877780614 = NULL;
assert( gamma_move(board, 8, 3, 6) == 0 );


gamma_delete(board);

    return 0;
}
