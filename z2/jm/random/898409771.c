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
uuid: 898409771
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 7, 9, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_free_fields(board, 5) == 99 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_move(board, 8, 11, 4) == 1 );


char* board608907945 = gamma_board(board);
assert( board608907945 != NULL );
assert( strcmp(board608907945, 
"...............\n"
"...............\n"
".....6....78..5\n"
"......3....4...\n"
"..............2\n"
"............6..\n"
"..31...........\n") == 0);
free(board608907945);
board608907945 = NULL;
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_golden_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_free_fields(board, 7) == 88 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 9, 9, 1) == 1 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_free_fields(board, 1) == 79 );


char* board660062836 = gamma_board(board);
assert( board660062836 != NULL );
assert( strcmp(board660062836, 
"...............\n"
".......7...31..\n"
".....6....78.45\n"
"......321..4..1\n"
"...8..9.......2\n"
"...7..8..9..6.3\n"
"6.3162.........\n") == 0);
free(board660062836);
board660062836 = NULL;
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_free_fields(board, 8) == 74 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 6, 13, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 8, 14, 6) == 1 );
assert( gamma_move(board, 9, 4, 7) == 0 );


char* board449436337 = gamma_board(board);
assert( board449436337 != NULL );
assert( strcmp(board449436337, 
".....35.9....68\n"
".3...5.73..31..\n"
"544..6....78.45\n"
".....4321..4..1\n"
".888.29..27...2\n"
"...7..8..9..6.3\n"
"663162..8.7....\n") == 0);
free(board449436337);
board449436337 = NULL;
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );


char* board764239045 = gamma_board(board);
assert( board764239045 != NULL );
assert( strcmp(board764239045, 
".....35.9....68\n"
".3...5.73..31..\n"
"544..6....78.45\n"
"....24321..4..1\n"
".888.29..27...2\n"
"...7..8..9..6.3\n"
"663162..8.7....\n") == 0);
free(board764239045);
board764239045 = NULL;
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );


char* board348065815 = gamma_board(board);
assert( board348065815 != NULL );
assert( strcmp(board348065815, 
".....35.9....68\n"
".3...5.73..31..\n"
"544..6....78.45\n"
"....24321..4..1\n"
".888.298.27..72\n"
"...7..8..9..6.3\n"
"663162..8.7....\n") == 0);
free(board348065815);
board348065815 = NULL;
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 14, 5) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_golden_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 10, 5) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 10, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );


char* board732560039 = gamma_board(board);
assert( board732560039 != NULL );
assert( strcmp(board732560039, 
"....635.9....68\n"
".3..45.73.831.5\n"
"544.16.1.178445\n"
"2...24321.84741\n"
".888.298.27..72\n"
".5.7.68..99.663\n"
"663162.58.73...\n") == 0);
free(board732560039);
board732560039 = NULL;
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 9, 9, 6) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board282593145 = gamma_board(board);
assert( board282593145 != NULL );
assert( strcmp(board282593145, 
"....635599...68\n"
".3..45.73.831.5\n"
"544.1661.178445\n"
"2...24321.84741\n"
".888.298.27..72\n"
".5.7.68..99.663\n"
"663162458.73..2\n") == 0);
free(board282593145);
board282593145 = NULL;
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );


char* board184225276 = gamma_board(board);
assert( board184225276 != NULL );
assert( strcmp(board184225276, 
"....635599...68\n"
".3..45.73.831.5\n"
"544.1661.178445\n"
"2.4.24321.84741\n"
".888.298.271.72\n"
".5.7.68..99.663\n"
"663162458.73..2\n") == 0);
free(board184225276);
board184225276 = NULL;
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 9, 13, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );


char* board939361516 = gamma_board(board);
assert( board939361516 != NULL );
assert( strcmp(board939361516, 
".1..63559916.68\n"
".3..45.73.831.5\n"
"544.16614178445\n"
"234724321.84741\n"
".8884298.271.72\n"
".5.7.68..999663\n"
"663162458.73.92\n") == 0);
free(board939361516);
board939361516 = NULL;
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_golden_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_free_fields(board, 8) == 18 );


char* board112781497 = gamma_board(board);
assert( board112781497 != NULL );
assert( strcmp(board112781497, 
"61..63559916468\n"
".3..457738831.5\n"
"544.16614178445\n"
"234724321.84741\n"
".8884298.271.72\n"
".5.7.68..999663\n"
"663162458.73.92\n") == 0);
free(board112781497);
board112781497 = NULL;
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_free_fields(board, 9) == 18 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );


char* board522207501 = gamma_board(board);
assert( board522207501 != NULL );
assert( strcmp(board522207501, 
"61..63559916468\n"
".3..457738831.5\n"
"544.16614178445\n"
"234724321.84741\n"
".8884298.271.72\n"
".5.7.68..999663\n"
"663162458.73.92\n") == 0);
free(board522207501);
board522207501 = NULL;
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );


char* board360753276 = gamma_board(board);
assert( board360753276 != NULL );
assert( strcmp(board360753276, 
"61..63559916468\n"
".3..457738831.5\n"
"544.16614178445\n"
"234724321.84741\n"
".8884298.271.72\n"
".5.7.68..999663\n"
"663162458.73.92\n") == 0);
free(board360753276);
board360753276 = NULL;
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );


gamma_delete(board);

    return 0;
}
