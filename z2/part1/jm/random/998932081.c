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
uuid: 998932081
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 5) == 0 );


char* board858344312 = gamma_board(board);
assert( board858344312 != NULL );
assert( strcmp(board858344312, 
"........1\n"
".65......\n"
".........\n"
"...1...4.\n"
"......3..\n"
".....5...\n"
".........\n"
"2........\n") == 0);
free(board858344312);
board858344312 = NULL;
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_golden_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_golden_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );


char* board987016984 = gamma_board(board);
assert( board987016984 != NULL );
assert( strcmp(board987016984, 
".461....1\n"
"265...5..\n"
"3..311.16\n"
"2..14..4.\n"
"....3.3..\n"
"2.2.75.7.\n"
".7..15.7.\n"
"4..4....3\n") == 0);
free(board987016984);
board987016984 = NULL;
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_free_fields(board, 1) == 29 );


char* board351267966 = gamma_board(board);
assert( board351267966 != NULL );
assert( strcmp(board351267966, 
".461....1\n"
"2654..5..\n"
"3..311116\n"
"2.514.24.\n"
".5463.37.\n"
"2.2.75.7.\n"
".7.115.7.\n"
"47.4...13\n") == 0);
free(board351267966);
board351267966 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );


char* board521427695 = gamma_board(board);
assert( board521427695 != NULL );
assert( strcmp(board521427695, 
".4613...1\n"
"2654..5..\n"
"3..311116\n"
"26514.24.\n"
".5463.37.\n"
"252.75.7.\n"
".72115.7.\n"
"47.4.7.13\n") == 0);
free(board521427695);
board521427695 = NULL;
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );


char* board364561853 = gamma_board(board);
assert( board364561853 != NULL );
assert( strcmp(board364561853, 
".4613..41\n"
"2654..53.\n"
"3..311116\n"
"26514.24.\n"
".5463.37.\n"
"252.75.7.\n"
".72115.7.\n"
"47.4.7.13\n") == 0);
free(board364561853);
board364561853 = NULL;
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 22 );


char* board603882161 = gamma_board(board);
assert( board603882161 != NULL );
assert( strcmp(board603882161, 
".4613..41\n"
"2654..53.\n"
"3..311116\n"
"26514.24.\n"
".5463.37.\n"
"252.75.7.\n"
".72115.7.\n"
"47.4.7.13\n") == 0);
free(board603882161);
board603882161 = NULL;
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );


char* board333982313 = gamma_board(board);
assert( board333982313 != NULL );
assert( strcmp(board333982313, 
".4613..41\n"
"2654..53.\n"
"3..311116\n"
"26514.24.\n"
".5463.37.\n"
"252.75.7.\n"
".72115.7.\n"
"47.4.7.13\n") == 0);
free(board333982313);
board333982313 = NULL;
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );


char* board682442903 = gamma_board(board);
assert( board682442903 != NULL );
assert( strcmp(board682442903, 
".4613..41\n"
"2654.353.\n"
"3..311116\n"
"26514.24.\n"
".5463.37.\n"
"252.75.7.\n"
"472115.7.\n"
"47.4.7413\n") == 0);
free(board682442903);
board682442903 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );


char* board880091272 = gamma_board(board);
assert( board880091272 != NULL );
assert( strcmp(board880091272, 
".4613..41\n"
"2654.353.\n"
"3..311116\n"
"26514.24.\n"
".5463.37.\n"
"252.75.7.\n"
"472115.72\n"
"4714.7413\n") == 0);
free(board880091272);
board880091272 = NULL;
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_golden_move(board, 7, 3, 3) == 1 );


char* board691738122 = gamma_board(board);
assert( board691738122 != NULL );
assert( strcmp(board691738122, 
".4613..41\n"
"2654.353.\n"
"3..311116\n"
"26514.24.\n"
".5473.37.\n"
"252.75177\n"
"472115.72\n"
"4714.7413\n") == 0);
free(board691738122);
board691738122 = NULL;
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );


gamma_delete(board);

    return 0;
}
