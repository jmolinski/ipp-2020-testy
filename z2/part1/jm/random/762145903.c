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
uuid: 762145903
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 9, 7, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );


char* board877414853 = gamma_board(board);
assert( board877414853 != NULL );
assert( strcmp(board877414853, 
".3.....1.....\n"
".............\n"
"...3...6.1.1.\n"
".............\n"
"......2.3....\n"
".............\n"
"...4.........\n"
"..........1..\n"
"2............\n") == 0);
free(board877414853);
board877414853 = NULL;
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_golden_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 99 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 97 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_golden_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_free_fields(board, 7) == 85 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_free_fields(board, 3) == 83 );
assert( gamma_golden_move(board, 3, 0, 12) == 0 );


char* board841786284 = gamma_board(board);
assert( board841786284 != NULL );
assert( strcmp(board841786284, 
".31....15....\n"
"3.....7......\n"
"...3...651617\n"
".4.....12....\n"
".3....2.3....\n"
"....7...6....\n"
"3..4.3574....\n"
".1........1..\n"
"25......4.3.5\n") == 0);
free(board841786284);
board841786284 = NULL;
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_golden_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_golden_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );


char* board922421321 = gamma_board(board);
assert( board922421321 != NULL );
assert( strcmp(board922421321, 
".31...4156217\n"
"3.4...7..62.2\n"
"...3..2651617\n"
".43....12.7..\n"
".3...7223....\n"
"544577..65...\n"
"3..4.3574....\n"
"51.7....3.1.3\n"
"25..64..4.3.5\n") == 0);
free(board922421321);
board922421321 = NULL;
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_golden_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );


char* board557555034 = gamma_board(board);
assert( board557555034 != NULL );
assert( strcmp(board557555034, 
"13572.4156217\n"
"3.4.1.75662.2\n"
"..13..2651617\n"
".43...712.7..\n"
".3..57223..3.\n"
"5445772465...\n"
"3.6233574....\n"
"51273.213.1.3\n"
"251.644.4.365\n") == 0);
free(board557555034);
board557555034 = NULL;
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 11, 7) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );


char* board474228876 = gamma_board(board);
assert( board474228876 != NULL );
assert( strcmp(board474228876, 
"13572.4156217\n"
"354.1.7566272\n"
"..13..2651617\n"
".431..712.7..\n"
".3..57223..34\n"
"5445772465...\n"
"3.6233574....\n"
"51273.213.1.3\n"
"251264464.365\n") == 0);
free(board474228876);
board474228876 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_free_fields(board, 7) == 27 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board564060878 = gamma_board(board);
assert( board564060878 != NULL );
assert( strcmp(board564060878, 
"13572.4156217\n"
"35421.7566272\n"
"..13..2651617\n"
".431.2712.7..\n"
".3..57223..34\n"
"5445772465..6\n"
"3.6233574....\n"
"51273.213.1.3\n"
"251264464.365\n") == 0);
free(board564060878);
board564060878 = NULL;
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_golden_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
