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
uuid: 686593912
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 9, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_free_fields(board, 7) == 79 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );


char* board706812911 = gamma_board(board);
assert( board706812911 != NULL );
assert( strcmp(board706812911, 
"...9....\n"
"......3.\n"
".....7..\n"
"........\n"
".......6\n"
"........\n"
"..5.1..7\n"
"....4...\n"
"........\n"
".1..1...\n"
".23.....\n") == 0);
free(board706812911);
board706812911 = NULL;
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_golden_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 55 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );


char* board739573129 = gamma_board(board);
assert( board739573129 != NULL );
assert( strcmp(board739573129, 
".6.9....\n"
"2...293.\n"
"...3.7..\n"
".1.4.7..\n"
"..5.3926\n"
"..6.3...\n"
".35.1..7\n"
"....42..\n"
"5..7....\n"
".1511592\n"
".2324887\n") == 0);
free(board739573129);
board739573129 = NULL;
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_golden_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 7, 10) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );


char* board553286929 = gamma_board(board);
assert( board553286929 != NULL );
assert( strcmp(board553286929, 
"16.9...9\n"
"2.7.293.\n"
".9.347..\n"
".1.477.7\n"
"..5.3926\n"
"..613.2.\n"
".35.1..7\n"
"....429.\n"
"5..7..64\n"
".1511592\n"
"32324887\n") == 0);
free(board553286929);
board553286929 = NULL;
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_golden_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );


char* board920074845 = gamma_board(board);
assert( board920074845 != NULL );
assert( strcmp(board920074845, 
"16.9..19\n"
"2.7.293.\n"
".98347..\n"
".1.477.7\n"
"..5.3926\n"
"..613.2.\n"
".35.1..7\n"
"6..4429.\n"
"5..7.264\n"
".1511592\n"
"32324887\n") == 0);
free(board920074845);
board920074845 = NULL;
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_free_fields(board, 8) == 23 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );


char* board702551027 = gamma_board(board);
assert( board702551027 != NULL );
assert( strcmp(board702551027, 
"16.91.19\n"
"287.293.\n"
"398347.8\n"
"91.47777\n"
"..5.3926\n"
"..61352.\n"
"335.1..7\n"
"6..4429.\n"
"5..7.264\n"
".1511592\n"
"32324887\n") == 0);
free(board702551027);
board702551027 = NULL;
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );


char* board348714459 = gamma_board(board);
assert( board348714459 != NULL );
assert( strcmp(board348714459, 
"16.91.19\n"
"287.293.\n"
"398347.8\n"
"91.47777\n"
"..5.3926\n"
"..61352.\n"
"335.1..7\n"
"6..4429.\n"
"5..7.264\n"
".1511592\n"
"32324887\n") == 0);
free(board348714459);
board348714459 = NULL;
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );


char* board882256099 = gamma_board(board);
assert( board882256099 != NULL );
assert( strcmp(board882256099, 
"16.91719\n"
"287.2935\n"
"398347.8\n"
"91.47777\n"
"..5.3926\n"
"..61352.\n"
"335.1..7\n"
"6..44299\n"
"51677264\n"
"81511592\n"
"32324887\n") == 0);
free(board882256099);
board882256099 = NULL;
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );


char* board464932153 = gamma_board(board);
assert( board464932153 != NULL );
assert( strcmp(board464932153, 
"16.91719\n"
"287.2935\n"
"398347.8\n"
"91547777\n"
"78523926\n"
".561352.\n"
"335.12.7\n"
"6..44299\n"
"51647262\n"
"81511592\n"
"32324887\n") == 0);
free(board464932153);
board464932153 = NULL;
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_free_fields(board, 3) == 8 );


char* board453132010 = gamma_board(board);
assert( board453132010 != NULL );
assert( strcmp(board453132010, 
"16.91719\n"
"287.2935\n"
"398347.8\n"
"91547777\n"
"78523926\n"
".561352.\n"
"335.12.7\n"
"6.844299\n"
"51647262\n"
"81511592\n"
"32324887\n") == 0);
free(board453132010);
board453132010 = NULL;
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
