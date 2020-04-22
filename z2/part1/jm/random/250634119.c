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
uuid: 250634119
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(22, 11, 5, 49);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 21, 9) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_golden_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 19, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 230 );
assert( gamma_free_fields(board, 3) == 230 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 21, 8) == 1 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 5, 18, 5) == 1 );


char* board177197080 = gamma_board(board);
assert( board177197080 != NULL );
assert( strcmp(board177197080, 
"......................\n"
".....................3\n"
".....................4\n"
".....5................\n"
".......13.............\n"
"2.................5...\n"
"......................\n"
"......................\n"
"4..................1..\n"
"..44...3..............\n"
"....11...........2....\n") == 0);
free(board177197080);
board177197080 = NULL;
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 19, 6) == 1 );


char* board869797905 = gamma_board(board);
assert( board869797905 != NULL );
assert( strcmp(board869797905, 
"......................\n"
".....................3\n"
".....................4\n"
".....5................\n"
".......13..........1..\n"
"2.................5...\n"
"......................\n"
"......................\n"
"4..................1..\n"
"..44.1.3..............\n"
"....11...........2....\n") == 0);
free(board869797905);
board869797905 = NULL;
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_free_fields(board, 2) == 225 );
assert( gamma_move(board, 3, 17, 1) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 7, 18) == 0 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );


char* board627363016 = gamma_board(board);
assert( board627363016 != NULL );
assert( strcmp(board627363016, 
"......................\n"
".....................3\n"
".....................4\n"
".....5................\n"
".....4.131....5....1..\n"
"2...........4.....5...\n"
"......................\n"
"......................\n"
"4..................1..\n"
"..44.1.3.........3....\n"
"....11...........2....\n") == 0);
free(board627363016);
board627363016 = NULL;
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_free_fields(board, 4) == 218 );
assert( gamma_move(board, 5, 15, 5) == 1 );
assert( gamma_move(board, 2, 10, 21) == 0 );
assert( gamma_move(board, 3, 4, 20) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, 3, 21) == 0 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 16) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 5, 16, 4) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 18, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_free_fields(board, 2) == 202 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 5, 19) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );


char* board940360590 = gamma_board(board);
assert( board940360590 != NULL );
assert( strcmp(board940360590, 
".......3..............\n"
"1..2.2...............3\n"
".........4...........4\n"
"....45................\n"
".....4.131..315....1..\n"
"2.4..4......4..5..5...\n"
"..4.......2.....5.....\n"
".....3..23............\n"
"4.2................1..\n"
"..44.113.........31...\n"
"3...11..5........2....\n") == 0);
free(board940360590);
board940360590 = NULL;
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 19) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 17, 2) == 1 );
assert( gamma_move(board, 5, 16, 5) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 16, 8) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 19, 7) == 1 );
assert( gamma_move(board, 4, 20, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 16) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 10, 20) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 1, 9, 16) == 0 );
assert( gamma_move(board, 1, 19, 8) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_free_fields(board, 4) == 182 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 20, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_free_fields(board, 4) == 179 );
assert( gamma_move(board, 5, 18, 10) == 1 );
assert( gamma_golden_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 1, 21, 9) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_free_fields(board, 4) == 175 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_free_fields(board, 5) == 174 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 21, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 2, 21) == 0 );
assert( gamma_free_fields(board, 3) == 172 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 170 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_move(board, 1, 9, 19) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 20, 9) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 14, 7) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 17) == 0 );
assert( gamma_move(board, 3, 15, 0) == 1 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 18, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );


char* board270858068 = gamma_board(board);
assert( board270858068 != NULL );
assert( strcmp(board270858068, 
"1..5.253..........5.3.\n"
"15.2.2....1.........43\n"
"..5..2...4.5....1..1.4\n"
"..1.45....2...1....3..\n"
"551..4.131..315....14.\n"
"2.4..4......4..55.5...\n"
".144.4..5.2.....5.4...\n"
"..13.3..231...........\n"
"4.21.............5.1..\n"
"21442113...2.....31...\n"
"3..411..5..3.2.3.2...1\n") == 0);
free(board270858068);
board270858068 = NULL;
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 6, 21) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board918142037 = gamma_board(board);
assert( board918142037 != NULL );
assert( strcmp(board918142037, 
"1..5.253..........5.3.\n"
"15.2.2....1.........43\n"
"..5..2...4.5....1..1.4\n"
"..1.45....2...1....3..\n"
"551..4.131..315....14.\n"
"2.4..4......4..55.5...\n"
".144.4..5.2.....5.4...\n"
"..13.3..231...........\n"
"4.21.............5.1..\n"
"21442113...2.....31...\n"
"4.2411..5..3.2.3.2...1\n") == 0);
free(board918142037);
board918142037 = NULL;
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 17, 9) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_free_fields(board, 4) == 148 );
assert( gamma_move(board, 5, 7, 16) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_free_fields(board, 1) == 148 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 2, 20, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );


char* board542501639 = gamma_board(board);
assert( board542501639 != NULL );
assert( strcmp(board542501639, 
"1..5.253..........5.3.\n"
"15.252..3.1......3..43\n"
"..5..2...4.5....1..1.4\n"
"..1.45.2.32...1....3..\n"
"551314.131..315....14.\n"
"214..4..1...4..55.5...\n"
".144.4..5.2.....5.4...\n"
"..13.3..231...........\n"
"4.21.............5.1..\n"
"214421135..2.....31.2.\n"
"4.2411.45..3.2.3.2...1\n") == 0);
free(board542501639);
board542501639 = NULL;
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_free_fields(board, 5) == 142 );
assert( gamma_move(board, 1, 1, 21) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 19, 7) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 17, 10) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_free_fields(board, 5) == 138 );
assert( gamma_move(board, 1, 15, 0) == 0 );
assert( gamma_move(board, 1, 15, 2) == 1 );
assert( gamma_move(board, 2, 17, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 9, 18) == 0 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 5, 15, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_golden_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 2, 16, 2) == 1 );
assert( gamma_free_fields(board, 2) == 131 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 1, 10, 19) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 8) == 1 );
assert( gamma_move(board, 2, 19, 10) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 15, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 2, 21, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 15) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 21) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 16, 6) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 21) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_free_fields(board, 3) == 123 );
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 5, 1, 15) == 0 );
assert( gamma_move(board, 1, 3, 20) == 0 );
assert( gamma_move(board, 1, 17, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 21) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_free_fields(board, 3) == 121 );
assert( gamma_golden_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 5, 18, 4) == 0 );
assert( gamma_free_fields(board, 5) == 121 );
assert( gamma_move(board, 1, 18, 8) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 18, 0) == 1 );
assert( gamma_move(board, 3, 7, 20) == 0 );
assert( gamma_free_fields(board, 4) == 118 );
assert( gamma_move(board, 5, 1, 15) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_free_fields(board, 3) == 116 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 8, 15) == 0 );
assert( gamma_move(board, 1, 5, 19) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_move(board, 2, 16, 9) == 1 );
assert( gamma_move(board, 3, 20, 2) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_free_fields(board, 3) == 112 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 5, 15, 4) == 1 );


char* board977415163 = gamma_board(board);
assert( board977415163 != NULL );
assert( strcmp(board977415163, 
"15.5.2534.2......3523.\n"
"15.252..321.....23..43\n"
"..5..23..4.5..4.1211.4\n"
"..1245.2.32...14.2.3..\n"
"551314.131.5315.4..14.\n"
"2141.4..1..34..55.5...\n"
".14424.15.2...45514...\n"
"..13.3..231...35.....2\n"
"4.21..........2125.13.\n"
"214421135..2.....31.2.\n"
"4.2411245..3.2.3.22..1\n") == 0);
free(board977415163);
board977415163 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_free_fields(board, 2) == 110 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_move(board, 5, 16, 7) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 20, 1) == 0 );
assert( gamma_move(board, 3, 9, 15) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );


char* board759303491 = gamma_board(board);
assert( board759303491 != NULL );
assert( strcmp(board759303491, 
"1545.2534.2......3523.\n"
"15.252..321.....23..43\n"
"..5..23..4.5..4.1211.4\n"
"..1245.2.325..1452.3..\n"
"551314.131.5315.4..14.\n"
"2141.4..1..34..55.5...\n"
".14424.15.22..45514...\n"
"..13.3..231...35.....2\n"
"4.21..........2125.13.\n"
"214421135..2.....31.2.\n"
"4.2411245..3.2.3.22..1\n") == 0);
free(board759303491);
board759303491 = NULL;
assert( gamma_move(board, 2, 16, 1) == 1 );
assert( gamma_free_fields(board, 2) == 106 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 18, 6) == 1 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 21, 3) == 0 );
assert( gamma_free_fields(board, 5) == 105 );


char* board665806277 = gamma_board(board);
assert( board665806277 != NULL );
assert( strcmp(board665806277, 
"1545.2534.2......3523.\n"
"15.252..321.....23..43\n"
"..5..23..4.5..4.1211.4\n"
"..1245.2.325..1452.3..\n"
"551314.131.5315.4.314.\n"
"2141.4..1..34..55.5...\n"
".14424.15.22..45514...\n"
"..13.3..231...35.....2\n"
"4.21..........2125.13.\n"
"214421135..2....231.2.\n"
"4.2411245..3.2.3.22..1\n") == 0);
free(board665806277);
board665806277 = NULL;
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 18) == 0 );
assert( gamma_move(board, 2, 19, 10) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 19) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 19, 3) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 0, 19) == 0 );
assert( gamma_move(board, 5, 12, 10) == 1 );


char* board369637606 = gamma_board(board);
assert( board369637606 != NULL );
assert( strcmp(board369637606, 
"1545.2534.2.5....3523.\n"
"15.252..321.....23..43\n"
"..5..23..4.5..4.1211.4\n"
"..1245.2.325..1452.3..\n"
"551314.131.5315.4.314.\n"
"214144..1..34..55.5...\n"
".14424.15.22..45514...\n"
"..13.3..231...35...2.2\n"
"4.21......5...2125.13.\n"
"214421135..2....231.2.\n"
"4.2411245..3.2.3.22..1\n") == 0);
free(board369637606);
board369637606 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 20, 8) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 3, 20) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_golden_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 3, 5, 21) == 0 );
assert( gamma_busy_fields(board, 4) == 26 );


char* board301017522 = gamma_board(board);
assert( board301017522 != NULL );
assert( strcmp(board301017522, 
"1545.2534.2.5....3523.\n"
"15.252..321.....23..43\n"
"..5..23..4.5..4.121114\n"
"..1245.2.325..1452.3..\n"
"551314.131.5315.4.314.\n"
"214144..1..34..55.5...\n"
".14424.15222..45514...\n"
"..13.3..231...35...2.2\n"
"4.21......5...2125.13.\n"
"214421135..2....231.2.\n"
"4.2411245..3.2.3.22..1\n") == 0);
free(board301017522);
board301017522 = NULL;
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 21, 0) == 0 );
assert( gamma_move(board, 1, 4, 20) == 0 );
assert( gamma_move(board, 1, 19, 9) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_free_fields(board, 2) == 98 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 21, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 1, 10, 21) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_move(board, 4, 5, 18) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 20, 7) == 1 );
assert( gamma_golden_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 2, 16, 7) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 15, 1) == 1 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 1, 15, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_free_fields(board, 3) == 95 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );


char* board693783936 = gamma_board(board);
assert( board693783936 != NULL );
assert( strcmp(board693783936, 
"1545.2534.2.5....3523.\n"
"15.252..321.....23.143\n"
"..5..23..4.5..4.121114\n"
"..1245.2.325.31452.35.\n"
"551314.131.5315.4.314.\n"
"214144..1..34..55.5...\n"
".14424.15222..45514...\n"
"..13.3..231...35...2.2\n"
"4.21......5...2125.13.\n"
"214421135..2...5231.2.\n"
"4.2411245..3.2.3.22..1\n") == 0);
free(board693783936);
board693783936 = NULL;
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_move(board, 4, 15, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 30 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_free_fields(board, 3) == 91 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );


char* board985058754 = gamma_board(board);
assert( board985058754 != NULL );
assert( strcmp(board985058754, 
"1545.2534.2.5....3523.\n"
"15.252..321....423.143\n"
"..5..23.14.5..4.121114\n"
"..1245.2.325.31452.35.\n"
"551314.131.5315.4.314.\n"
"214144..1..34..55.5...\n"
".14424.15222..45514...\n"
"..1313..2315..35...2.2\n"
"4.21.1....5...2125.13.\n"
"214421135..2...5231.2.\n"
"4.2411245..3.2.3.22..1\n") == 0);
free(board985058754);
board985058754 = NULL;
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_free_fields(board, 2) == 89 );


char* board624612467 = gamma_board(board);
assert( board624612467 != NULL );
assert( strcmp(board624612467, 
"1545.2534.2.5....3523.\n"
"153252..321....423.143\n"
"..5..23.14.5..4.121114\n"
"..1245.2.325.31452.35.\n"
"551314.131.5315.4.314.\n"
"214144..1..34..55.5...\n"
".14424.15222..45514...\n"
"..1313..2315..35...2.2\n"
"4.21.1....5...2125.13.\n"
"214421135..2...5231.2.\n"
"4.2411245..3.2.3.22..1\n") == 0);
free(board624612467);
board624612467 = NULL;
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_golden_move(board, 1, 3, 21) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 21) == 0 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 1, 2, 21) == 0 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 4, 21) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 1, 19) == 0 );
assert( gamma_busy_fields(board, 5) == 30 );
assert( gamma_move(board, 1, 1, 19) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 1, 21) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 31 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 2, 4, 19) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 34 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_free_fields(board, 4) == 78 );
assert( gamma_move(board, 5, 0, 20) == 0 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 5, 20) == 0 );
assert( gamma_move(board, 3, 3, 20) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 2, 7, 21) == 0 );
assert( gamma_move(board, 2, 20, 4) == 1 );
assert( gamma_move(board, 4, 10, 16) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_golden_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 19) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 16, 4) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_golden_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 21) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_golden_move(board, 3, 2, 21) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 3, 20) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board487696803 = gamma_board(board);
assert( board487696803 != NULL );
assert( strcmp(board487696803, 
"1542.253452.5....3523.\n"
"153252..321.2..423.143\n"
"1152123.14.5..4.121114\n"
"..1245.2.325.31452.35.\n"
"5513141131.5315.4.314.\n"
"214144..13.343.55.5...\n"
".144244152224.45514.2.\n"
"3.1313..2315..35...2.2\n"
"4.21.14...5...2125.13.\n"
"214421135..23.45231.2.\n"
"432411245..312.3.22..1\n") == 0);
free(board487696803);
board487696803 = NULL;
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 17, 6) == 1 );
assert( gamma_golden_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 21) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 2, 21, 7) == 1 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_move(board, 1, 3, 18) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 2, 18, 9) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 31 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 20) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_golden_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 8, 15) == 0 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 18) == 0 );
assert( gamma_move(board, 5, 20, 6) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 21, 10) == 1 );
assert( gamma_move(board, 5, 15, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_move(board, 1, 1, 21) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_move(board, 3, 21, 6) == 1 );
assert( gamma_move(board, 4, 14, 0) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 4, 19, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 20, 3) == 1 );
assert( gamma_move(board, 4, 21, 1) == 1 );
assert( gamma_move(board, 5, 20, 0) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 43 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 19, 0) == 1 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );


char* board792448503 = gamma_board(board);
assert( board792448503 != NULL );
assert( strcmp(board792448503, 
"1542.253452.5..5.35235\n"
"153252..121.24.4232143\n"
"1152123514.54.4.121114\n"
"..1245.2.325.31452.352\n"
"5513141131.5315.433143\n"
"214144..13.343.55.5...\n"
".144244152224145514.2.\n"
"3.1313..2315..35...242\n"
"4.21.14...5...2125.13.\n"
"214421135..23.45231.24\n"
"432411245..31243.22451\n") == 0);
free(board792448503);
board792448503 = NULL;
assert( gamma_move(board, 3, 2, 21) == 0 );
assert( gamma_move(board, 3, 18, 6) == 0 );
assert( gamma_move(board, 4, 8, 15) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 3, 18) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 1, 7, 18) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 21) == 0 );
assert( gamma_move(board, 2, 20, 3) == 0 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 34 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 14, 9) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 5, 19, 7) == 0 );
assert( gamma_move(board, 1, 5, 20) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 15) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_golden_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 16) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 1, 19) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_golden_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 21, 9) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_move(board, 1, 21, 7) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 15) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 19, 10) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 1, 21, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 18) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 8, 15) == 0 );
assert( gamma_move(board, 4, 19, 0) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 19, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_move(board, 1, 20, 1) == 0 );
assert( gamma_move(board, 2, 4, 21) == 0 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 21, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 8, 15) == 0 );
assert( gamma_move(board, 4, 17, 10) == 0 );


gamma_delete(board);

    return 0;
}
