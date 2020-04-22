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
uuid: 701692572
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 12, 9, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_free_fields(board, 5) == 136 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_golden_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 8, 10, 9) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );


char* board283379893 = gamma_board(board);
assert( board283379893 != NULL );
assert( strcmp(board283379893, 
"..5.........\n"
"............\n"
"..2...1...84\n"
"6...........\n"
"...8........\n"
"......684...\n"
"....4......7\n"
".3.3........\n"
"........5...\n"
"...1........\n"
"1..9........\n"
".......43...\n") == 0);
free(board283379893);
board283379893 = NULL;
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );


char* board785409088 = gamma_board(board);
assert( board785409088 != NULL );
assert( strcmp(board785409088, 
"4.5......6..\n"
"............\n"
"6.2...1...84\n"
"61.2........\n"
"...8........\n"
"......684...\n"
"....47..2..7\n"
".3.3........\n"
".....5..5...\n"
"...1........\n"
"1..9........\n"
"......343...\n") == 0);
free(board785409088);
board785409088 = NULL;
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_golden_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_move(board, 9, 8, 10) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board322697863 = gamma_board(board);
assert( board322697863 != NULL );
assert( strcmp(board322697863, 
"4.5...1..6..\n"
"........9...\n"
"612.8.1...84\n"
"61.2........\n"
"...8........\n"
".8....884...\n"
"....47..2..7\n"
".3.3........\n"
".....5..5...\n"
"...1........\n"
"1..9.......9\n"
"......343...\n") == 0);
free(board322697863);
board322697863 = NULL;
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board517788280 = gamma_board(board);
assert( board517788280 != NULL );
assert( strcmp(board517788280, 
"4.5...1..6..\n"
"........9...\n"
"612.8.1...84\n"
"61.24....6..\n"
"...8....5.3.\n"
".8....884...\n"
"....47..2..7\n"
".3.3........\n"
".....5..5...\n"
"...1..5.....\n"
"1..9.......9\n"
"......343...\n") == 0);
free(board517788280);
board517788280 = NULL;
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_golden_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_golden_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 9, 10, 3) == 1 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 91 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );


char* board509669371 = gamma_board(board);
assert( board509669371 != NULL );
assert( strcmp(board509669371, 
"465...1..6.3\n"
"4.....2.9...\n"
"61278.1..284\n"
"61.248...6..\n"
"...8....5.3.\n"
".8....884.3.\n"
"...347.92..7\n"
".3.35..5....\n"
".....5..3.9.\n"
"...1..5.2...\n"
"1199.......9\n"
".....9343...\n") == 0);
free(board509669371);
board509669371 = NULL;
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 9, 5, 11) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );


char* board424946501 = gamma_board(board);
assert( board424946501 != NULL );
assert( strcmp(board424946501, 
"465..91..6.3\n"
"4..13.2.9...\n"
"61278.1..284\n"
"61.248...6..\n"
"...8....5.3.\n"
".8...1884.3.\n"
"...347.92..7\n"
".3.35.45....\n"
".....5..3.9.\n"
"..31..5.2...\n"
"1199.......9\n"
".....9343...\n") == 0);
free(board424946501);
board424946501 = NULL;
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );


char* board737633019 = gamma_board(board);
assert( board737633019 != NULL );
assert( strcmp(board737633019, 
"465..91..6.3\n"
"4..13.2.9...\n"
"6127891..284\n"
"61.248...6..\n"
"...8...5563.\n"
".8...1884.3.\n"
"..4347.92..7\n"
".3.35.45....\n"
".....5..3.9.\n"
"..31..5.2.5.\n"
"1199.......9\n"
".....9343...\n") == 0);
free(board737633019);
board737633019 = NULL;
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board778032960 = gamma_board(board);
assert( board778032960 != NULL );
assert( strcmp(board778032960, 
"465..91..6.3\n"
"4..13.2.9...\n"
"6127891..284\n"
"61.248...6..\n"
"...8...5563.\n"
".8...1884.3.\n"
"..4347.92..7\n"
".3.35.45....\n"
".....51.6.9.\n"
"..31..5.2.5.\n"
"1199.......9\n"
".....9343.8.\n") == 0);
free(board778032960);
board778032960 = NULL;
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 7, 8, 11) == 1 );


char* board415238956 = gamma_board(board);
assert( board415238956 != NULL );
assert( strcmp(board415238956, 
"465..91.76.3\n"
"4..13.2.9...\n"
"6127891..284\n"
"61.248...6..\n"
"...8...5563.\n"
".8...1884.3.\n"
"..4347.92..7\n"
".3.35.45....\n"
".....51.6.9.\n"
"..31..5.2.5.\n"
"1199.......9\n"
".....9343.8.\n") == 0);
free(board415238956);
board415238956 = NULL;
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );


char* board148539185 = gamma_board(board);
assert( board148539185 != NULL );
assert( strcmp(board148539185, 
"465..91.76.3\n"
"4..13.2.9...\n"
"6127891..284\n"
"61.248..86..\n"
"...8...5563.\n"
".8...1884.3.\n"
"..4347.92..7\n"
".3.35.45....\n"
".....51.6.9.\n"
"..31..5.2.5.\n"
"1199.......9\n"
".....9343.8.\n") == 0);
free(board148539185);
board148539185 = NULL;
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_golden_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 9, 9, 11) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 9, 7, 11) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_move(board, 4, 3, 8) == 1 );


char* board552787006 = gamma_board(board);
assert( board552787006 != NULL );
assert( strcmp(board552787006, 
"465.391976.3\n"
"4..13.2.9...\n"
"6127891..284\n"
"61.448..86..\n"
".6.8...5563.\n"
".8...1884.3.\n"
"..4347.92..7\n"
".34351452...\n"
".....51.6.9.\n"
"..31..5.2.5.\n"
"1199794.7.29\n"
"....59343.8.\n") == 0);
free(board552787006);
board552787006 = NULL;
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_free_fields(board, 9) == 56 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_free_fields(board, 8) == 54 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_golden_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );


char* board450625391 = gamma_board(board);
assert( board450625391 != NULL );
assert( strcmp(board450625391, 
"465539197633\n"
"4..13.269.2.\n"
"6127891..284\n"
"61.448..86..\n"
".6.8...5563.\n"
".8...1884.3.\n"
"..4347.92..7\n"
"334351452...\n"
"8.59.51.6.9.\n"
"..31..5.2.5.\n"
"1199794.7.29\n"
"5.6259343.8.\n") == 0);
free(board450625391);
board450625391 = NULL;
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_free_fields(board, 9) == 48 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_free_fields(board, 7) == 45 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_free_fields(board, 9) == 44 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );


char* board500824580 = gamma_board(board);
assert( board500824580 != NULL );
assert( strcmp(board500824580, 
"465539197633\n"
"4..134269.2.\n"
"6127891.9284\n"
"61.448..86..\n"
"5688...5563.\n"
".8...1884.3.\n"
"..4347.92..7\n"
"334351452...\n"
"8.59.51.6.9.\n"
"..31..5.2.53\n"
"1199794.7.29\n"
"5.6259343.8.\n") == 0);
free(board500824580);
board500824580 = NULL;
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 7, 9, 7) == 0 );


char* board122743440 = gamma_board(board);
assert( board122743440 != NULL );
assert( strcmp(board122743440, 
"465539197633\n"
"4..134269.2.\n"
"6127891.9284\n"
"61.448..86..\n"
"5688...5563.\n"
".8...1884.32\n"
"8.4347.92.27\n"
"334351452...\n"
"8.59.51.6.9.\n"
"..316.5.2.53\n"
"1199794.7.29\n"
"5.6259343.8.\n") == 0);
free(board122743440);
board122743440 = NULL;
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );


char* board233726618 = gamma_board(board);
assert( board233726618 != NULL );
assert( strcmp(board233726618, 
"465539197633\n"
"4..134269.2.\n"
"6127891.9284\n"
"61.448..86..\n"
"5688...5563.\n"
".8...1884.32\n"
"8.4347.92.27\n"
"334351452...\n"
"8.59.51.6.9.\n"
"..316.5.2.53\n"
"1199794.7.29\n"
"5.6259343.8.\n") == 0);
free(board233726618);
board233726618 = NULL;
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );


char* board788589578 = gamma_board(board);
assert( board788589578 != NULL );
assert( strcmp(board788589578, 
"465539197633\n"
"4..134269.2.\n"
"6127891.9284\n"
"61.448..86..\n"
"5688...5563.\n"
".8...1884.32\n"
"8.4347.92.27\n"
"334351452...\n"
"8.5965166.9.\n"
"..316.5.2.53\n"
"1199794.7.29\n"
"5.6259343.8.\n") == 0);
free(board788589578);
board788589578 = NULL;
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_golden_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_free_fields(board, 8) == 32 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );


char* board382173188 = gamma_board(board);
assert( board382173188 != NULL );
assert( strcmp(board382173188, 
"465539197633\n"
"4..134269.2.\n"
"6127891.9284\n"
"611448.886..\n"
"5688.385563.\n"
".8.2.1884.32\n"
"8.4347.92.27\n"
"334351452...\n"
"8.5965166.92\n"
"..316.5.2.53\n"
"1199794.7.29\n"
"5.6259343.8.\n") == 0);
free(board382173188);
board382173188 = NULL;
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 8, 10, 9) == 0 );


char* board434947246 = gamma_board(board);
assert( board434947246 != NULL );
assert( strcmp(board434947246, 
"465539197633\n"
"4..134269.2.\n"
"6127891.9284\n"
"611448.886..\n"
"5688.385563.\n"
".8.2.1884.32\n"
"8.4347.92.27\n"
"334351452...\n"
"8.5965166.92\n"
"..316.5.2.53\n"
"1199794.7.29\n"
"5.6259343.8.\n") == 0);
free(board434947246);
board434947246 = NULL;
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_golden_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );


char* board220462202 = gamma_board(board);
assert( board220462202 != NULL );
assert( strcmp(board220462202, 
"465539197633\n"
"4.7134269.2.\n"
"6127891.9284\n"
"6114488886..\n"
"5688.3855634\n"
".822.1884432\n"
"834347.92.27\n"
"334351452..8\n"
"1.5965166.92\n"
".9316.522.53\n"
"1599794.7.29\n"
"596259343.8.\n") == 0);
free(board220462202);
board220462202 = NULL;
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 1, 1) == 1 );


gamma_delete(board);

    return 0;
}
