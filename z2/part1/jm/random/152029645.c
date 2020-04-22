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
uuid: 152029645
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 5, 5, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board834752704 = gamma_board(board);
assert( board834752704 != NULL );
assert( strcmp(board834752704, 
".1...4..\n"
"1.......\n"
".5......\n"
"........\n"
".1......\n") == 0);
free(board834752704);
board834752704 = NULL;
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );


char* board516858674 = gamma_board(board);
assert( board516858674 != NULL );
assert( strcmp(board516858674, 
".1...4..\n"
"125.....\n"
".5......\n"
".....2..\n"
"11......\n") == 0);
free(board516858674);
board516858674 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );


char* board673539910 = gamma_board(board);
assert( board673539910 != NULL );
assert( strcmp(board673539910, 
".1.1.4..\n"
"1254...5\n"
".5..23..\n"
"...412..\n"
"11......\n") == 0);
free(board673539910);
board673539910 = NULL;
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 14 );


char* board689565013 = gamma_board(board);
assert( board689565013 != NULL );
assert( strcmp(board689565013, 
"115154.2\n"
"125442.5\n"
"254.23..\n"
"...412..\n"
"11.3..5.\n") == 0);
free(board689565013);
board689565013 = NULL;
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board210094753 = gamma_board(board);
assert( board210094753 != NULL );
assert( strcmp(board210094753, 
"115154.2\n"
"125442.5\n"
"254.23..\n"
".2.412..\n"
"11.3..55\n") == 0);
free(board210094753);
board210094753 = NULL;
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 9 );


char* board180729560 = gamma_board(board);
assert( board180729560 != NULL );
assert( strcmp(board180729560, 
"11515442\n"
"125442.5\n"
"254.23..\n"
".2.412.5\n"
"1153..55\n") == 0);
free(board180729560);
board180729560 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );


char* board422585135 = gamma_board(board);
assert( board422585135 != NULL );
assert( strcmp(board422585135, 
"11515442\n"
"125442.5\n"
"254.23.1\n"
".2.412.5\n"
"1153..55\n") == 0);
free(board422585135);
board422585135 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );


gamma_delete(board);

    return 0;
}
