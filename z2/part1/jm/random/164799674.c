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
uuid: 164799674
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 11, 4, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_golden_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board420319057 = gamma_board(board);
assert( board420319057 != NULL );
assert( strcmp(board420319057, 
"321..\n"
"....3\n"
"13..3\n"
"4..42\n"
"2.21.\n"
"12..2\n"
"34133\n"
"1.12.\n"
"2.3.3\n"
"1223.\n"
"..3..\n") == 0);
free(board420319057);
board420319057 = NULL;
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );


char* board867327745 = gamma_board(board);
assert( board867327745 != NULL );
assert( strcmp(board867327745, 
"321..\n"
"....3\n"
"13..3\n"
"4..42\n"
"2121.\n"
"12..2\n"
"34133\n"
"1.122\n"
"2.3.3\n"
"1223.\n"
"..3..\n") == 0);
free(board867327745);
board867327745 = NULL;
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board823550630 = gamma_board(board);
assert( board823550630 != NULL );
assert( strcmp(board823550630, 
"321..\n"
"....3\n"
"13..3\n"
"42.42\n"
"2121.\n"
"12..2\n"
"34133\n"
"1.122\n"
"2.3.3\n"
"1223.\n"
"..3.4\n") == 0);
free(board823550630);
board823550630 = NULL;
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );


char* board996509916 = gamma_board(board);
assert( board996509916 != NULL );
assert( strcmp(board996509916, 
"321.3\n"
"..423\n"
"13..3\n"
"42.42\n"
"21211\n"
"12..2\n"
"34133\n"
"1.122\n"
"2.3.3\n"
"1223.\n"
".43.4\n") == 0);
free(board996509916);
board996509916 = NULL;
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );


char* board453064619 = gamma_board(board);
assert( board453064619 != NULL );
assert( strcmp(board453064619, 
"321.3\n"
"..423\n"
"13..3\n"
"42.42\n"
"21211\n"
"12.12\n"
"34133\n"
"1.122\n"
"24343\n"
"1223.\n"
"243.4\n") == 0);
free(board453064619);
board453064619 = NULL;
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_golden_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );


gamma_delete(board);

    return 0;
}
