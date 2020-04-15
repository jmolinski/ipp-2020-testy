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
uuid: 871934142
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 11, 7, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_free_fields(board, 1) == 163 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_free_fields(board, 2) == 162 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );


char* board163992465 = gamma_board(board);
assert( board163992465 != NULL );
assert( strcmp(board163992465, 
".....3.........\n"
".....1.........\n"
"...............\n"
"...............\n"
"...............\n"
"...1...........\n"
"..........2....\n"
"...............\n"
"...............\n"
".......3.......\n"
"...............\n") == 0);
free(board163992465);
board163992465 = NULL;
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_free_fields(board, 5) == 143 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 143 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 141 );
assert( gamma_move(board, 2, 13, 10) == 1 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_golden_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_free_fields(board, 7) == 134 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_golden_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_free_fields(board, 7) == 123 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );


char* board641783759 = gamma_board(board);
assert( board641783759 != NULL );
assert( strcmp(board641783759, 
".1.1.3.....2.2.\n"
".....1...3.6...\n"
".67...7..2.....\n"
"...5.....3.....\n"
"25.3..2.3..6...\n"
"..31..562......\n"
"1.3.3.6..52..2.\n"
"44..5..44.....4\n"
"7677...2......5\n"
"5.....63....1..\n"
"...6.4.114.....\n") == 0);
free(board641783759);
board641783759 = NULL;
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_free_fields(board, 7) == 105 );
assert( gamma_golden_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 94 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 94 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 14, 8) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );


char* board917713914 = gamma_board(board);
assert( board917713914 != NULL );
assert( strcmp(board917713914, 
".1.1.3.6.6.2.2.\n"
"..3..17..3.6.3.\n"
".67..575.2....2\n"
"..45.....3.....\n"
"25.33.2.3..6...\n"
"..31..56256....\n"
"1.3.3.6.452..2.\n"
"44..5.474.....4\n"
"76774.62.....45\n"
"572..263.4..1..\n"
"..36.4.114.....\n") == 0);
free(board917713914);
board917713914 = NULL;
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_free_fields(board, 2) == 84 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 13, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );


char* board421986442 = gamma_board(board);
assert( board421986442 != NULL );
assert( strcmp(board421986442, 
".1.1.3.6.6.2.2.\n"
"..31.17..356.3.\n"
".67..575.2....2\n"
"..453....3.....\n"
"25.33.2435.6.3.\n"
"..31..56256....\n"
"1.3.3.6.452.32.\n"
"44..5.474.....4\n"
"76774.624.4..45\n"
"572..263.4..1..\n"
"..36.4.114.....\n") == 0);
free(board421986442);
board421986442 = NULL;
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_golden_move(board, 4, 2, 6) == 1 );


char* board691887605 = gamma_board(board);
assert( board691887605 != NULL );
assert( strcmp(board691887605, 
".1.1.3.6.6.2.2.\n"
"..31.17..356.3.\n"
".67..575.2....2\n"
"..453....33....\n"
"25433.2435.6.3.\n"
"1.31..56256....\n"
"1.3.3.6.452.32.\n"
"44..51474.....4\n"
"76774.624.4..45\n"
"572..263.4..1..\n"
"..36142114.....\n") == 0);
free(board691887605);
board691887605 = NULL;
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_free_fields(board, 5) == 75 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_free_fields(board, 6) == 74 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_free_fields(board, 1) == 73 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 14, 10) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_free_fields(board, 6) == 72 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_free_fields(board, 7) == 72 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board499885611 = gamma_board(board);
assert( board499885611 != NULL );
assert( strcmp(board499885611, 
".1.173.6.6.2.22\n"
"..31.17..356.3.\n"
".67..575.26...2\n"
"..453....33....\n"
"25433.2435.6.3.\n"
"1.31..56256....\n"
"1.3.3.6.452.32.\n"
"44..51474.....4\n"
"76774.624.4..45\n"
"572..263.4..1..\n"
"..36142114.....\n") == 0);
free(board499885611);
board499885611 = NULL;
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 17 );


char* board118705837 = gamma_board(board);
assert( board118705837 != NULL );
assert( strcmp(board118705837, 
".1.17316.6.2.22\n"
"..31.17..356.3.\n"
".67..575.26...2\n"
"..453....33....\n"
"25433.2435.613.\n"
"1.31..56256....\n"
"1.3.3.6.452.32.\n"
"44.651474.....4\n"
"76774.624.4..45\n"
"572..263.4..1..\n"
"..36142114.....\n") == 0);
free(board118705837);
board118705837 = NULL;
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_free_fields(board, 7) == 66 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_golden_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_golden_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );


char* board831540210 = gamma_board(board);
assert( board831540210 != NULL );
assert( strcmp(board831540210, 
".1.17316.6.2.22\n"
"7.31.17..356.3.\n"
".671.575.26...2\n"
".6453....33..3.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747....4\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"..36142114.....\n") == 0);
free(board831540210);
board831540210 = NULL;


char* board946324245 = gamma_board(board);
assert( board946324245 != NULL );
assert( strcmp(board946324245, 
".1.17316.6.2.22\n"
"7.31.17..356.3.\n"
".671.575.26...2\n"
".6453....33..3.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747....4\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"..36142114.....\n") == 0);
free(board946324245);
board946324245 = NULL;
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );


char* board444651394 = gamma_board(board);
assert( board444651394 != NULL );
assert( strcmp(board444651394, 
".1.17316.6.2.22\n"
"7.31.17..356.3.\n"
".671.575.26...2\n"
".6453....33..3.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747....4\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"1.36142114.....\n") == 0);
free(board444651394);
board444651394 = NULL;
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_golden_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );


char* board424093023 = gamma_board(board);
assert( board424093023 != NULL );
assert( strcmp(board424093023, 
".1.17316.6.2.22\n"
"7.31.17..356.3.\n"
".671.575.265..2\n"
".6453....33..3.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747..1.4\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"1.36142114.....\n") == 0);
free(board424093023);
board424093023 = NULL;
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );


char* board725687785 = gamma_board(board);
assert( board725687785 != NULL );
assert( strcmp(board725687785, 
".1.17316.6.2.22\n"
"7.31.17..356.3.\n"
".671.575.265..2\n"
".6453....33..3.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747.51.4\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"1.36142114.....\n") == 0);
free(board725687785);
board725687785 = NULL;
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );


char* board857853792 = gamma_board(board);
assert( board857853792 != NULL );
assert( strcmp(board857853792, 
".1.17316.6.2.22\n"
"7.31.17..356.3.\n"
".671.575.265..2\n"
".6453....33.13.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747.51.4\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"1.36142114.....\n") == 0);
free(board857853792);
board857853792 = NULL;
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );


char* board658957095 = gamma_board(board);
assert( board658957095 != NULL );
assert( strcmp(board658957095, 
".1.17316.662.22\n"
"7.31.17..356.3.\n"
".671.575.265..2\n"
".6453....33.13.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747.51.4\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"1.36142114.....\n") == 0);
free(board658957095);
board658957095 = NULL;
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 13, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_golden_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );


char* board956386461 = gamma_board(board);
assert( board956386461 != NULL );
assert( strcmp(board956386461, 
".1.17316.662.22\n"
"7.31.177.356.3.\n"
".671.575.265..2\n"
".6453....33313.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747.5174\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"1.36142114.....\n") == 0);
free(board956386461);
board956386461 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );


char* board973542120 = gamma_board(board);
assert( board973542120 != NULL );
assert( strcmp(board973542120, 
".1.17316.662.22\n"
"7.31.177.356.3.\n"
".671.575.265..2\n"
".6453....33313.\n"
"25433.2435.613.\n"
"1.31.456256...4\n"
"1.3.316.452432.\n"
"44.6514747.5174\n"
"76774.62444..45\n"
"572.5263.4.41..\n"
"1.36142114.....\n") == 0);
free(board973542120);
board973542120 = NULL;
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 14, 0) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_golden_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_golden_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_golden_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 7, 14) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 10, 1) == 0 );


gamma_delete(board);

    return 0;
}
