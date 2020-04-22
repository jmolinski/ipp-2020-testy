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
uuid: 212635943
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 5, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board409847178 = gamma_board(board);
assert( board409847178 != NULL );
assert( strcmp(board409847178, 
".536..4...\n"
".......2..\n"
"77........\n"
".6.2......\n"
"...4.1....\n") == 0);
free(board409847178);
board409847178 = NULL;
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );


char* board280135108 = gamma_board(board);
assert( board280135108 != NULL );
assert( strcmp(board280135108, 
".5366.4...\n"
"..1....2..\n"
"7744.....3\n"
"26.2..6...\n"
"..34713..7\n") == 0);
free(board280135108);
board280135108 = NULL;
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );


char* board907190470 = gamma_board(board);
assert( board907190470 != NULL );
assert( strcmp(board907190470, 
".5366.4...\n"
"..1....25.\n"
"7744.....3\n"
"26.2..6...\n"
"..34713..7\n") == 0);
free(board907190470);
board907190470 = NULL;
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_golden_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board546554460 = gamma_board(board);
assert( board546554460 != NULL );
assert( strcmp(board546554460, 
".5366.4...\n"
"641..25253\n"
"7744.....3\n"
"26.2.16...\n"
"4.347136.7\n") == 0);
free(board546554460);
board546554460 = NULL;
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );


gamma_delete(board);

    return 0;
}
