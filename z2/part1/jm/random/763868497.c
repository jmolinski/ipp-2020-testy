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
uuid: 763868497
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );


char* board660023594 = gamma_board(board);
assert( board660023594 != NULL );
assert( strcmp(board660023594, 
".....3\n"
"......\n"
"..154.\n"
"15..82\n"
"....47\n"
"456.4.\n"
"85..62\n"
"42766.\n"
"7.367.\n") == 0);
free(board660023594);
board660023594 = NULL;
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );


char* board434844675 = gamma_board(board);
assert( board434844675 != NULL );
assert( strcmp(board434844675, 
".....3\n"
"......\n"
"2.154.\n"
"15..82\n"
"....47\n"
"456.41\n"
"85..62\n"
"42766.\n"
"7.367.\n") == 0);
free(board434844675);
board434844675 = NULL;
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board284868185 = gamma_board(board);
assert( board284868185 != NULL );
assert( strcmp(board284868185, 
".....3\n"
"......\n"
"2.154.\n"
"15..82\n"
"....47\n"
"456.41\n"
"858362\n"
"42766.\n"
"7.367.\n") == 0);
free(board284868185);
board284868185 = NULL;
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );


char* board525253283 = gamma_board(board);
assert( board525253283 != NULL );
assert( strcmp(board525253283, 
".....3\n"
"......\n"
"2.154.\n"
"15..82\n"
"....47\n"
"456.41\n"
"858362\n"
"42766.\n"
"7.367.\n") == 0);
free(board525253283);
board525253283 = NULL;
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_golden_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_free_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 6 );


char* board225770272 = gamma_board(board);
assert( board225770272 != NULL );
assert( strcmp(board225770272, 
".2...3\n"
"......\n"
"2.154.\n"
"15.386\n"
"....47\n"
"456.41\n"
"858362\n"
"42766.\n"
"7.367.\n") == 0);
free(board225770272);
board225770272 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_free_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );


char* board754423058 = gamma_board(board);
assert( board754423058 != NULL );
assert( strcmp(board754423058, 
".2...3\n"
"6.....\n"
"2.154.\n"
"15.386\n"
"....47\n"
"456541\n"
"858362\n"
"42766.\n"
"7.3671\n") == 0);
free(board754423058);
board754423058 = NULL;
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );


gamma_delete(board);

    return 0;
}
