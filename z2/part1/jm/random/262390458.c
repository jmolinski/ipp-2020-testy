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
uuid: 262390458
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_free_fields(board, 3) == 96 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board301448553 = gamma_board(board);
assert( board301448553 != NULL );
assert( strcmp(board301448553, 
"3..........\n"
"...........\n"
"2..........\n"
".3.........\n"
"...........\n"
".......4...\n"
"...........\n"
"...........\n"
"...........\n") == 0);
free(board301448553);
board301448553 = NULL;
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_golden_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 87 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_golden_move(board, 7, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_golden_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_golden_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );


char* board321558266 = gamma_board(board);
assert( board321558266 != NULL );
assert( strcmp(board321558266, 
"37.6..6...5\n"
".3.........\n"
"21...74.15.\n"
"13.3.5674..\n"
".7.3214...6\n"
"...5..24..7\n"
".4.771....3\n"
"657..4..4..\n"
"..1.53.4...\n") == 0);
free(board321558266);
board321558266 = NULL;
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board134706482 = gamma_board(board);
assert( board134706482 != NULL );
assert( strcmp(board134706482, 
"37.6..63..5\n"
".3...2.1...\n"
"21..374.15.\n"
"136355674.7\n"
".7.3214...6\n"
"42635.24..7\n"
"3457712...3\n"
"657..4..4.2\n"
"..1.53.4...\n") == 0);
free(board134706482);
board134706482 = NULL;
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_golden_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );


char* board370037671 = gamma_board(board);
assert( board370037671 != NULL );
assert( strcmp(board370037671, 
"37.6..63..5\n"
".32..2.1...\n"
"21..374.15.\n"
"132355674.7\n"
".7.3214...6\n"
"42635.24..7\n"
"3457712...3\n"
"657..4..412\n"
"..1.53.4...\n") == 0);
free(board370037671);
board370037671 = NULL;
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );


char* board497270034 = gamma_board(board);
assert( board497270034 != NULL );
assert( strcmp(board497270034, 
"37.6..63..5\n"
".32.6221...\n"
"21..374.15.\n"
"132355674.7\n"
".7.3214...6\n"
"42635.24..7\n"
"3457712...3\n"
"657..4..412\n"
"..1.53.4.1.\n") == 0);
free(board497270034);
board497270034 = NULL;
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );


char* board711971308 = gamma_board(board);
assert( board711971308 != NULL );
assert( strcmp(board711971308, 
"37.6..63..5\n"
".32.6221.1.\n"
"21..374.15.\n"
"132355674.7\n"
".7.3214...6\n"
"42635.24..7\n"
"3457712.6.3\n"
"6577.4..412\n"
"..1.53.4.1.\n") == 0);
free(board711971308);
board711971308 = NULL;
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );


char* board632831429 = gamma_board(board);
assert( board632831429 != NULL );
assert( strcmp(board632831429, 
"37.6..63..5\n"
".32.6221.1.\n"
"21..374.15.\n"
"132355674.7\n"
".7.3214.6.6\n"
"42635.24..7\n"
"3457712.6.3\n"
"6577245.412\n"
"..1.53.4.1.\n") == 0);
free(board632831429);
board632831429 = NULL;
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 9, 2) == 1 );


char* board634568671 = gamma_board(board);
assert( board634568671 != NULL );
assert( strcmp(board634568671, 
"37.6..63..5\n"
".32.6221.1.\n"
"211.374.15.\n"
"132355674.7\n"
".7.321456.6\n"
"42635724..7\n"
"3457712.673\n"
"6577245.412\n"
"..1153.4.1.\n") == 0);
free(board634568671);
board634568671 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );


char* board837424713 = gamma_board(board);
assert( board837424713 != NULL );
assert( strcmp(board837424713, 
"37.6..63..5\n"
".32.6221.1.\n"
"211.374.15.\n"
"132355674.7\n"
".7.321456.6\n"
"42635724..7\n"
"3457712.673\n"
"6577245.412\n"
"..1153.4.1.\n") == 0);
free(board837424713);
board837424713 = NULL;
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_golden_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_golden_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );


char* board598035810 = gamma_board(board);
assert( board598035810 != NULL );
assert( strcmp(board598035810, 
"37.6.663..5\n"
".3276221.1.\n"
"211.354.15.\n"
"13235567477\n"
".7.321456.6\n"
"42635724..7\n"
"3457712.673\n"
"6577245.412\n"
".51153.4.1.\n") == 0);
free(board598035810);
board598035810 = NULL;
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );


char* board266864243 = gamma_board(board);
assert( board266864243 != NULL );
assert( strcmp(board266864243, 
"37.6.663..5\n"
".3276221.1.\n"
"211.354.15.\n"
"13235567477\n"
".7.321456.6\n"
"42635724..7\n"
"3457712.673\n"
"6577245.412\n"
".51153.4.1.\n") == 0);
free(board266864243);
board266864243 = NULL;
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );


gamma_delete(board);

    return 0;
}
