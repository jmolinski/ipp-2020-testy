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
uuid: 795310720
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 6, 6, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_golden_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );


char* board930696363 = gamma_board(board);
assert( board930696363 != NULL );
assert( strcmp(board930696363, 
"413.5..15.2\n"
"1..621.322.\n"
".4..3..35.4\n"
"..145...1..\n"
"....2.6...4\n"
"11.6.2.....\n") == 0);
free(board930696363);
board930696363 = NULL;
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );


char* board537239020 = gamma_board(board);
assert( board537239020 != NULL );
assert( strcmp(board537239020, 
"413.5.51522\n"
"1..621.322.\n"
".4.23..35.4\n"
"..145...1..\n"
"....2.6.3.4\n"
"1146.21....\n") == 0);
free(board537239020);
board537239020 = NULL;
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );


char* board522970862 = gamma_board(board);
assert( board522970862 != NULL );
assert( strcmp(board522970862, 
"41335.51522\n"
"1..521.3223\n"
".4422.13554\n"
".114555.1..\n"
"..6122643.4\n"
"1146.21....\n") == 0);
free(board522970862);
board522970862 = NULL;
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );


char* board301903796 = gamma_board(board);
assert( board301903796 != NULL );
assert( strcmp(board301903796, 
"41335651522\n"
"12.521.3223\n"
".4422.13554\n"
".114555.1..\n"
".33122643.4\n"
"1146.41.1..\n") == 0);
free(board301903796);
board301903796 = NULL;
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );


char* board215586097 = gamma_board(board);
assert( board215586097 != NULL );
assert( strcmp(board215586097, 
"41335651522\n"
"12.521.3223\n"
".4422.13554\n"
".114555.1..\n"
".33122643.4\n"
"1146.41.1..\n") == 0);
free(board215586097);
board215586097 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );


char* board290423564 = gamma_board(board);
assert( board290423564 != NULL );
assert( strcmp(board290423564, 
"41335651522\n"
"12.521.3223\n"
".4422.13554\n"
".114555.1..\n"
".33122643.4\n"
"1146.41.1..\n") == 0);
free(board290423564);
board290423564 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_golden_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_golden_move(board, 6, 3, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );


char* board604590793 = gamma_board(board);
assert( board604590793 != NULL );
assert( strcmp(board604590793, 
"41335651522\n"
"12.526.3223\n"
".4422.13554\n"
".114555.14.\n"
".33122643.4\n"
"114644121.2\n") == 0);
free(board604590793);
board604590793 = NULL;
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );


gamma_delete(board);

    return 0;
}
