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
uuid: 804158513
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 5, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );


char* board781150696 = gamma_board(board);
assert( board781150696 != NULL );
assert( strcmp(board781150696, 
".....32.\n"
"..4.....\n"
"2...1.3.\n"
"....5...\n"
".1......\n") == 0);
free(board781150696);
board781150696 = NULL;
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );


char* board926246081 = gamma_board(board);
assert( board926246081 != NULL );
assert( strcmp(board926246081, 
"2..1532.\n"
"..4155..\n"
"22.31.3.\n"
"44..5...\n"
"41...4..\n") == 0);
free(board926246081);
board926246081 = NULL;
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board625972544 = gamma_board(board);
assert( board625972544 != NULL );
assert( strcmp(board625972544, 
"2.41532.\n"
"3.41554.\n"
"22.31.3.\n"
"44..5...\n"
"41...4..\n") == 0);
free(board625972544);
board625972544 = NULL;
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
