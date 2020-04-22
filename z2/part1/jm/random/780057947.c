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
uuid: 780057947
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 5, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 47 );


char* board237587131 = gamma_board(board);
assert( board237587131 != NULL );
assert( strcmp(board237587131, 
"......\n"
"......\n"
".3....\n"
"......\n"
"...2..\n"
".4.1..\n"
"..55..\n"
"33..31\n"
"2.....\n"
"3.5...\n") == 0);
free(board237587131);
board237587131 = NULL;
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );


char* board406174508 = gamma_board(board);
assert( board406174508 != NULL );
assert( strcmp(board406174508, 
"533...\n"
".1....\n"
"23..3.\n"
"214524\n"
"22.2..\n"
"1451.3\n"
"..552.\n"
"335.31\n"
"23.54.\n"
"3.5.2.\n") == 0);
free(board406174508);
board406174508 = NULL;
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );


char* board921500655 = gamma_board(board);
assert( board921500655 != NULL );
assert( strcmp(board921500655, 
"533...\n"
".1...5\n"
"23..3.\n"
"214524\n"
"22.2.3\n"
"145153\n"
"..552.\n"
"335.31\n"
"23.53.\n"
"3.532.\n") == 0);
free(board921500655);
board921500655 = NULL;
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );


char* board315861225 = gamma_board(board);
assert( board315861225 != NULL );
assert( strcmp(board315861225, 
"533.4.\n"
".1...5\n"
"23..3.\n"
"214524\n"
"22.2.3\n"
"145153\n"
"..552.\n"
"335.31\n"
"23.53.\n"
"3.532.\n") == 0);
free(board315861225);
board315861225 = NULL;
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board147515675 = gamma_board(board);
assert( board147515675 != NULL );
assert( strcmp(board147515675, 
"533.4.\n"
"113.15\n"
"23.53.\n"
"214524\n"
"22.253\n"
"145153\n"
".1552.\n"
"335131\n"
"23.55.\n"
"3.5325\n") == 0);
free(board147515675);
board147515675 = NULL;
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );


gamma_delete(board);

    return 0;
}
