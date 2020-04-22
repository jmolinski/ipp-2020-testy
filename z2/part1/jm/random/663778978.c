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
uuid: 663778978
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 34 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );


char* board504120927 = gamma_board(board);
assert( board504120927 != NULL );
assert( strcmp(board504120927, 
"...6..\n"
".6.3.4\n"
"..2.7.\n"
"....7.\n"
"4.3...\n"
"1..5..\n"
"42...2\n") == 0);
free(board504120927);
board504120927 = NULL;
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_free_fields(board, 8) == 23 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


char* board443879884 = gamma_board(board);
assert( board443879884 != NULL );
assert( strcmp(board443879884, 
"7.26.2\n"
".6.3.4\n"
".52.78\n"
"1.1.7.\n"
"4.3..4\n"
"1175..\n"
"42...2\n") == 0);
free(board443879884);
board443879884 = NULL;
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );


char* board868119394 = gamma_board(board);
assert( board868119394 != NULL );
assert( strcmp(board868119394, 
"7.26.2\n"
".6.3.4\n"
".52.78\n"
"1.1.7.\n"
"4.3..4\n"
"1175..\n"
"42...2\n") == 0);
free(board868119394);
board868119394 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board825366911 = gamma_board(board);
assert( board825366911 != NULL );
assert( strcmp(board825366911, 
"7.26.2\n"
".6.3.4\n"
".52178\n"
"1.1.7.\n"
"4.3..4\n"
"1175..\n"
"42...2\n") == 0);
free(board825366911);
board825366911 = NULL;
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_free_fields(board, 8) == 12 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_golden_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );


char* board986529438 = gamma_board(board);
assert( board986529438 != NULL );
assert( strcmp(board986529438, 
"712672\n"
".6.344\n"
"352178\n"
"12147.\n"
"4.34.4\n"
"1175.7\n"
"42.432\n") == 0);
free(board986529438);
board986529438 = NULL;
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_free_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 2) == 0 );


gamma_delete(board);

    return 0;
}
