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
uuid: 491321993
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 10, 8, 48);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );


char* board849614030 = gamma_board(board);
assert( board849614030 != NULL );
assert( strcmp(board849614030, 
"........1...\n"
"............\n"
".......5....\n"
"............\n"
"........4...\n"
"............\n"
"...1........\n"
".......35...\n"
"........26..\n"
"......8.....\n") == 0);
free(board849614030);
board849614030 = NULL;
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_free_fields(board, 4) == 108 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );


char* board682378549 = gamma_board(board);
assert( board682378549 != NULL );
assert( strcmp(board682378549, 
"....7...1...\n"
"........5...\n"
"5.....15....\n"
"............\n"
"........4...\n"
"...........2\n"
"...18.2....3\n"
".......35...\n"
"........26..\n"
"......8.....\n") == 0);
free(board682378549);
board682378549 = NULL;
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_free_fields(board, 6) == 98 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );


char* board336026059 = gamma_board(board);
assert( board336026059 != NULL );
assert( strcmp(board336026059, 
"....7...12..\n"
".......15...\n"
"5.....15.32.\n"
"..5.6...3..5\n"
"......7.4...\n"
"7..31...3..2\n"
".4.18.2.6..3\n"
"...6...35...\n"
"6......226..\n"
"..5...8.....\n") == 0);
free(board336026059);
board336026059 = NULL;
assert( gamma_move(board, 8, 2, 5) == 1 );


char* board663455248 = gamma_board(board);
assert( board663455248 != NULL );
assert( strcmp(board663455248, 
"....7...12..\n"
".......15...\n"
"5.....15.32.\n"
"..5.6...3..5\n"
"..8...7.4...\n"
"7..31...3..2\n"
".4.18.2.6..3\n"
"...6...35...\n"
"6......226..\n"
"..5...8.....\n") == 0);
free(board663455248);
board663455248 = NULL;
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 4, 10, 8) == 1 );


char* board688318350 = gamma_board(board);
assert( board688318350 != NULL );
assert( strcmp(board688318350, 
"....78..12..\n"
"6......15.4.\n"
"5.....15832.\n"
".55.6...3..5\n"
"438...774...\n"
"7.23133.3..2\n"
".4.1862.6..3\n"
"...6...352..\n"
"625.156226..\n"
"..51..8....5\n") == 0);
free(board688318350);
board688318350 = NULL;
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_golden_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_golden_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board221090955 = gamma_board(board);
assert( board221090955 != NULL );
assert( strcmp(board221090955, 
"..8.78..1111\n"
"63..1..15.43\n"
"5.75.515832.\n"
".55.6.2.6..5\n"
"438.83774...\n"
"7.23133.3..2\n"
".4.8862165.3\n"
"...6..8352..\n"
"625.1562266.\n"
"2.51848..665\n") == 0);
free(board221090955);
board221090955 = NULL;
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_golden_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );


char* board364269179 = gamma_board(board);
assert( board364269179 != NULL );
assert( strcmp(board364269179, 
".78.78..1111\n"
"63..1.215.43\n"
"5.757515832.\n"
".55.6.2.6..5\n"
"438.83774...\n"
"7.2313363..2\n"
".4.8862165.3\n"
".5.6..83523.\n"
"625.1562266.\n"
"2.518485.665\n") == 0);
free(board364269179);
board364269179 = NULL;
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_golden_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_golden_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );


char* board710320920 = gamma_board(board);
assert( board710320920 != NULL );
assert( strcmp(board710320920, 
".78.787.1111\n"
"635.11215.43\n"
"5.757515832.\n"
".35.6.2.65.5\n"
"438.837744..\n"
"7.2313363.22\n"
"6488862165.3\n"
".5364383523.\n"
"625.1562266.\n"
"2.518485.665\n") == 0);
free(board710320920);
board710320920 = NULL;
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_golden_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_free_fields(board, 6) == 23 );


char* board980506926 = gamma_board(board);
assert( board980506926 != NULL );
assert( strcmp(board980506926, 
".78.787.1111\n"
"635.11215.43\n"
"5.757515832.\n"
".35.6.2.65.5\n"
"438.837744..\n"
"7.2313363.22\n"
"6488862165.3\n"
".5364383523.\n"
"625.1562266.\n"
"2.5184854665\n") == 0);
free(board980506926);
board980506926 = NULL;
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 8, 10, 5) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_golden_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );


char* board831512626 = gamma_board(board);
assert( board831512626 != NULL );
assert( strcmp(board831512626, 
".78.787.1111\n"
"635.11215.43\n"
"5.757415832.\n"
"635.6.2.65.5\n"
"238.8377448.\n"
"7.2313363.22\n"
"6488862165.3\n"
".5364383523.\n"
"625.1562266.\n"
"285184854665\n") == 0);
free(board831512626);
board831512626 = NULL;


char* board176013478 = gamma_board(board);
assert( board176013478 != NULL );
assert( strcmp(board176013478, 
".78.787.1111\n"
"635.11215.43\n"
"5.757415832.\n"
"635.6.2.65.5\n"
"238.8377448.\n"
"7.2313363.22\n"
"6488862165.3\n"
".5364383523.\n"
"625.1562266.\n"
"285184854665\n") == 0);
free(board176013478);
board176013478 = NULL;
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 10, 6) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );


gamma_delete(board);

    return 0;
}
