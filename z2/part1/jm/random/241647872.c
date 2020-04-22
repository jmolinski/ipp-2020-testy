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
uuid: 241647872
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 11, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );


char* board113296934 = gamma_board(board);
assert( board113296934 != NULL );
assert( strcmp(board113296934, 
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
"..1..\n"
".....\n"
".....\n"
".....\n") == 0);
free(board113296934);
board113296934 = NULL;
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );


char* board497000738 = gamma_board(board);
assert( board497000738 != NULL );
assert( strcmp(board497000738, 
"7....\n"
".....\n"
"5....\n"
"1...5\n"
".....\n"
"4....\n"
".3...\n"
".21..\n"
"2....\n"
"...6.\n"
".7...\n") == 0);
free(board497000738);
board497000738 = NULL;
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );


char* board324910753 = gamma_board(board);
assert( board324910753 != NULL );
assert( strcmp(board324910753, 
"7....\n"
".....\n"
"51...\n"
"1..35\n"
".....\n"
"4.27.\n"
".3...\n"
".21..\n"
"2....\n"
"...6.\n"
".7..1\n") == 0);
free(board324910753);
board324910753 = NULL;
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_golden_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_golden_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_golden_move(board, 7, 10, 3) == 0 );


char* board620083065 = gamma_board(board);
assert( board620083065 != NULL );
assert( strcmp(board620083065, 
"7..46\n"
".....\n"
"51...\n"
"15.35\n"
"1.274\n"
"46276\n"
"53.36\n"
".213.\n"
"2..62\n"
".6667\n"
"77..1\n") == 0);
free(board620083065);
board620083065 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );


char* board659242577 = gamma_board(board);
assert( board659242577 != NULL );
assert( strcmp(board659242577, 
"7..46\n"
"7....\n"
"51...\n"
"15.35\n"
"1.274\n"
"46276\n"
"53.36\n"
".213.\n"
"2..62\n"
".6667\n"
"77..1\n") == 0);
free(board659242577);
board659242577 = NULL;
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_free_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );


char* board527423832 = gamma_board(board);
assert( board527423832 != NULL );
assert( strcmp(board527423832, 
"7..46\n"
"7....\n"
"51...\n"
"15.35\n"
"1.274\n"
"46276\n"
"53136\n"
".213.\n"
"2..62\n"
".6667\n"
"77.61\n") == 0);
free(board527423832);
board527423832 = NULL;
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_golden_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );


gamma_delete(board);

    return 0;
}
