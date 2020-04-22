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
uuid: 323551690
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_move(board, 5, 4, 1) == 0 );


char* board965904856 = gamma_board(board);
assert( board965904856 != NULL );
assert( strcmp(board965904856, 
"5.......\n"
".2...43.\n"
".3..1...\n"
"...32...\n"
"1.......\n"
"4.....2.\n") == 0);
free(board965904856);
board965904856 = NULL;
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, 1) == 1 );


char* board377099863 = gamma_board(board);
assert( board377099863 != NULL );
assert( strcmp(board377099863, 
"5......1\n"
".2.2.43.\n"
".3..1...\n"
"...32..2\n"
"1..3....\n"
"4.....2.\n") == 0);
free(board377099863);
board377099863 = NULL;
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 25 );


char* board236836524 = gamma_board(board);
assert( board236836524 != NULL );
assert( strcmp(board236836524, 
"5.....51\n"
"42.2.43.\n"
"331.15..\n"
"..432..2\n"
"11.3.1..\n"
"4.....2.\n") == 0);
free(board236836524);
board236836524 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_golden_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );


char* board768857857 = gamma_board(board);
assert( board768857857 != NULL );
assert( strcmp(board768857857, 
"5.3.2251\n"
"4222343.\n"
"321415..\n"
"45432152\n"
"1133.132\n"
"4...4.2.\n") == 0);
free(board768857857);
board768857857 = NULL;
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 10 );


char* board469992024 = gamma_board(board);
assert( board469992024 != NULL );
assert( strcmp(board469992024, 
"5.3.2251\n"
"42223435\n"
"321415..\n"
"45432152\n"
"1133.132\n"
"4...4.2.\n") == 0);
free(board469992024);
board469992024 = NULL;
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 8 );


gamma_delete(board);

    return 0;
}
