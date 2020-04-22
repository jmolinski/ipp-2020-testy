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
uuid: 725823635
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 5, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );


char* board202428788 = gamma_board(board);
assert( board202428788 != NULL );
assert( strcmp(board202428788, 
"...............\n"
"...............\n"
"......63.......\n"
"...1...........\n"
".2.....5....5..\n") == 0);
free(board202428788);
board202428788 = NULL;
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 13, 3) == 1 );
assert( gamma_free_fields(board, 9) == 67 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_golden_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );


char* board342037939 = gamma_board(board);
assert( board342037939 != NULL );
assert( strcmp(board342037939, 
"..8............\n"
".............9.\n"
"2.....63.......\n"
"...1..1....76..\n"
".2.7...5....5..\n") == 0);
free(board342037939);
board342037939 = NULL;
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_free_fields(board, 7) == 53 );
assert( gamma_move(board, 8, 14, 0) == 1 );
assert( gamma_move(board, 9, 2, 10) == 0 );


char* board216425827 = gamma_board(board);
assert( board216425827 != NULL );
assert( strcmp(board216425827, 
"..8.....3.2....\n"
".............9.\n"
"24..2563.......\n"
"...1.71....764.\n"
"32.7...5....578\n") == 0);
free(board216425827);
board216425827 = NULL;
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );


char* board252640641 = gamma_board(board);
assert( board252640641 != NULL );
assert( strcmp(board252640641, 
"..8.....3.2.3..\n"
"..7........1.9.\n"
"24..2563.......\n"
"..21.71....764.\n"
"32.7...5....578\n") == 0);
free(board252640641);
board252640641 = NULL;
assert( gamma_move(board, 9, 10, 1) == 1 );
assert( gamma_move(board, 9, 13, 2) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 1, 14) == 0 );


char* board381563399 = gamma_board(board);
assert( board381563399 != NULL );
assert( strcmp(board381563399, 
"..8.....3.2.3.1\n"
"..7........1.9.\n"
"24..2563.....9.\n"
"..21371...9764.\n"
"32.7...5..4.578\n") == 0);
free(board381563399);
board381563399 = NULL;
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );


char* board339514518 = gamma_board(board);
assert( board339514518 != NULL );
assert( strcmp(board339514518, 
"..8.....3.2.3.1\n"
"..787......1.9.\n"
"24..2563.....9.\n"
"1821371...9764.\n"
"32878.75..4.578\n") == 0);
free(board339514518);
board339514518 = NULL;
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_golden_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 14, 3) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_golden_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );


char* board182254429 = gamma_board(board);
assert( board182254429 != NULL );
assert( strcmp(board182254429, 
"..8.....3.2.3.1\n"
"..787......1.96\n"
"24..2563.....9.\n"
"1821371..89764.\n"
"32878.75..4.578\n") == 0);
free(board182254429);
board182254429 = NULL;
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_golden_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_free_fields(board, 9) == 25 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 8, 14, 1) == 1 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );


char* board791833603 = gamma_board(board);
assert( board791833603 != NULL );
assert( strcmp(board791833603, 
"4.8.52..312.331\n"
"..7873.9..41496\n"
"246.256325.719.\n"
"1821371..897648\n"
"32878.75494.578\n") == 0);
free(board791833603);
board791833603 = NULL;
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_free_fields(board, 2) == 6 );


char* board329525127 = gamma_board(board);
assert( board329525127 != NULL );
assert( strcmp(board329525127, 
"4.8.52..312.331\n"
"..7873.9..41496\n"
"246.256325.719.\n"
"1821371..897648\n"
"32878.75494.578\n") == 0);
free(board329525127);
board329525127 = NULL;
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 3, 1) == 0 );


gamma_delete(board);

    return 0;
}
