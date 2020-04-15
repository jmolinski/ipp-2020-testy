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
uuid: 597646800
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 6, 4, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );


char* board619608559 = gamma_board(board);
assert( board619608559 != NULL );
assert( strcmp(board619608559, 
"...............\n"
"............2.2\n"
"........1...3..\n"
"...............\n"
"...4.......1...\n"
"..3..........2.\n") == 0);
free(board619608559);
board619608559 = NULL;
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_free_fields(board, 3) == 81 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_golden_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_golden_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_golden_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );


char* board172784036 = gamma_board(board);
assert( board172784036 != NULL );
assert( strcmp(board172784036, 
"2.3..42..13.4..\n"
"3...22.2....2.2\n"
"43..44.21.1.34.\n"
"1.314.3...4..4.\n"
".34422.....12..\n"
".23.14.......23\n") == 0);
free(board172784036);
board172784036 = NULL;
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 14, 5) == 1 );
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board804248373 = gamma_board(board);
assert( board804248373 != NULL );
assert( strcmp(board804248373, 
"2.32442.413.4.3\n"
"3...22.2....2.2\n"
"43..44.21.1.34.\n"
"1.314.3...4..42\n"
".34422.....12..\n"
".23.14......423\n") == 0);
free(board804248373);
board804248373 = NULL;
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board867506078 = gamma_board(board);
assert( board867506078 != NULL );
assert( strcmp(board867506078, 
"2.32442.413.423\n"
"3...22.2.42.2.2\n"
"434.44.2141.34.\n"
"1.314.3...4..42\n"
".34422...4.12..\n"
".23.14......423\n") == 0);
free(board867506078);
board867506078 = NULL;
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_golden_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );


char* board889668202 = gamma_board(board);
assert( board889668202 != NULL );
assert( strcmp(board889668202, 
"2.32442.4131423\n"
"3...22.2.42.2.2\n"
"434.44.2141.34.\n"
"1.314.3...4..42\n"
".34422...4.12..\n"
".23.14.....2423\n") == 0);
free(board889668202);
board889668202 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );


char* board446355595 = gamma_board(board);
assert( board446355595 != NULL );
assert( strcmp(board446355595, 
"2.32442.4131423\n"
"3...22.2.42.2.2\n"
"434.44.2141.34.\n"
"1.314.3...4..42\n"
".34422...4.12..\n"
".23.14.....2423\n") == 0);
free(board446355595);
board446355595 = NULL;
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board282799859 = gamma_board(board);
assert( board282799859 != NULL );
assert( strcmp(board282799859, 
"2.32442.4131423\n"
"3...22.2.42.2.2\n"
"434.44.2141.341\n"
"1.314.3...4..42\n"
".344223.34.12..\n"
".23314.....2423\n") == 0);
free(board282799859);
board282799859 = NULL;
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_golden_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );


char* board586442949 = gamma_board(board);
assert( board586442949 != NULL );
assert( strcmp(board586442949, 
"2.32442.4131423\n"
"3...22.2.42.2.2\n"
"434.44.2141.341\n"
"1.31443.4.4.442\n"
".344223.34.1233\n"
"423314..1.32423\n") == 0);
free(board586442949);
board586442949 = NULL;
assert( gamma_move(board, 3, 5, 1) == 0 );


char* board631441941 = gamma_board(board);
assert( board631441941 != NULL );
assert( strcmp(board631441941, 
"2.32442.4131423\n"
"3...22.2.42.2.2\n"
"434.44.2141.341\n"
"1.31443.4.4.442\n"
".344223.34.1233\n"
"423314..1.32423\n") == 0);
free(board631441941);
board631441941 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_free_fields(board, 1) == 21 );


char* board616754724 = gamma_board(board);
assert( board616754724 != NULL );
assert( strcmp(board616754724, 
"2.32442.4131423\n"
"3...2212.42.2.2\n"
"434.44.2141.341\n"
"1.31443.4.4.442\n"
".344223.34.1233\n"
"423314..1.32423\n") == 0);
free(board616754724);
board616754724 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );


char* board387191495 = gamma_board(board);
assert( board387191495 != NULL );
assert( strcmp(board387191495, 
"2.32442.4131423\n"
"3...2212442.2.2\n"
"434.44.2141.341\n"
"1.31443.4.4.442\n"
".344223.34.1233\n"
"423314..1.32423\n") == 0);
free(board387191495);
board387191495 = NULL;
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );


char* board674102639 = gamma_board(board);
assert( board674102639 != NULL );
assert( strcmp(board674102639, 
"2.32442.4131423\n"
"3.1.2212442.2.2\n"
"434.44.2141.341\n"
"1.31443.4.4.442\n"
".344223134.1233\n"
"423314..1.32423\n") == 0);
free(board674102639);
board674102639 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );


char* board979538142 = gamma_board(board);
assert( board979538142 != NULL );
assert( strcmp(board979538142, 
"2.32442.4131423\n"
"3.1.2212442.2.2\n"
"434.44.2141.341\n"
"1.31443.4.4.442\n"
".144223134.1233\n"
"423314..1.32423\n") == 0);
free(board979538142);
board979538142 = NULL;
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 5, 5) == 1 );


char* board702036269 = gamma_board(board);
assert( board702036269 != NULL );
assert( strcmp(board702036269, 
"2.32432.4131423\n"
"3.1.2212442.2.2\n"
"434.4412141.341\n"
"1.31443.4.4.442\n"
".144223134.1233\n"
"423314..1.32423\n") == 0);
free(board702036269);
board702036269 = NULL;
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
