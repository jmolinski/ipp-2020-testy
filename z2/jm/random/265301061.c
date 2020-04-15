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
uuid: 265301061
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 15, 4, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_move(board, 4, 3, 14) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_free_fields(board, 1) == 143 );
assert( gamma_golden_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );


char* board808109233 = gamma_board(board);
assert( board808109233 != NULL );
assert( strcmp(board808109233, 
"..14......\n"
"........3.\n"
"..........\n"
"...1.....4\n"
"..........\n"
"........31\n"
"..........\n"
"..........\n"
"..........\n"
"........1.\n"
".......3..\n"
"..........\n"
"2.........\n"
"..........\n"
".......3..\n") == 0);
free(board808109233);
board808109233 = NULL;
assert( gamma_move(board, 4, 10, 4) == 0 );


char* board628866880 = gamma_board(board);
assert( board628866880 != NULL );
assert( strcmp(board628866880, 
"..14......\n"
"........3.\n"
"..........\n"
"...1.....4\n"
"..........\n"
"........31\n"
"..........\n"
"..........\n"
"..........\n"
"........1.\n"
".......3..\n"
"..........\n"
"2.........\n"
"..........\n"
".......3..\n") == 0);
free(board628866880);
board628866880 = NULL;
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 14) == 1 );


char* board752690525 = gamma_board(board);
assert( board752690525 != NULL );
assert( strcmp(board752690525, 
"..14..3...\n"
"....1...3.\n"
".....4....\n"
".4.1.....4\n"
"......2...\n"
"........31\n"
"..........\n"
"..1.......\n"
"..........\n"
"........1.\n"
".......32.\n"
"..1.......\n"
"2..1..3...\n"
"..........\n"
".....2.3..\n") == 0);
free(board752690525);
board752690525 = NULL;
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 8, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 126 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 1, 4, 14) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 112 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_golden_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_free_fields(board, 4) == 100 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );


char* board249655571 = gamma_board(board);
assert( board249655571 != NULL );
assert( strcmp(board249655571, 
"..141.3.2.\n"
"...21...31\n"
".....4....\n"
".431.3...4\n"
"4...312...\n"
".2...1..31\n"
"..........\n"
"..11..43..\n"
"4.........\n"
".......31.\n"
"1.41..3323\n"
"1.1.....3.\n"
"24.11234..\n"
"2.....4...\n"
".....2.32.\n") == 0);
free(board249655571);
board249655571 = NULL;
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );


char* board589994895 = gamma_board(board);
assert( board589994895 != NULL );
assert( strcmp(board589994895, 
"..141.3.2.\n"
"...21...31\n"
".....4..3.\n"
".43113...4\n"
"42..312...\n"
".2.411..31\n"
"..........\n"
".211..43..\n"
"4.....2.1.\n"
"..4...231.\n"
"1241..3323\n"
"1.1..2..3.\n"
"24.11234..\n"
"2.....4...\n"
"....22.32.\n") == 0);
free(board589994895);
board589994895 = NULL;
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_golden_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 14) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );


char* board549464094 = gamma_board(board);
assert( board549464094 != NULL );
assert( strcmp(board549464094, 
"..141.332.\n"
"...21...31\n"
".....4..3.\n"
".43113...4\n"
"42..312...\n"
".2.411..31\n"
"..........\n"
".211..43..\n"
"4.....2.1.\n"
"..4...231.\n"
"1241..3323\n"
"1.1..2..3.\n"
"24.11234..\n"
"2...2.4...\n"
"....22.32.\n") == 0);
free(board549464094);
board549464094 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_golden_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 4, 3) == 0 );


char* board792972287 = gamma_board(board);
assert( board792972287 != NULL );
assert( strcmp(board792972287, 
"..141.332.\n"
"...21...31\n"
".....4..3.\n"
".43113..44\n"
"42..312...\n"
".2.411..31\n"
".3........\n"
".211..431.\n"
"4.4...2.1.\n"
"..41.2231.\n"
"1241..3323\n"
"1.1..2.33.\n"
"24.11234..\n"
"2..1244...\n"
"....22.32.\n") == 0);
free(board792972287);
board792972287 = NULL;
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );


char* board626082423 = gamma_board(board);
assert( board626082423 != NULL );
assert( strcmp(board626082423, 
"..141.332.\n"
"...21...31\n"
"...1.4..3.\n"
".43113..44\n"
"42..312...\n"
".2.411..31\n"
".3.....31.\n"
".211..431.\n"
"4.4...2.1.\n"
"..41.2231.\n"
"1241..3323\n"
"1.1..2.33.\n"
"24.112343.\n"
"2..1244...\n"
"....22.32.\n") == 0);
free(board626082423);
board626082423 = NULL;
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


char* board578053457 = gamma_board(board);
assert( board578053457 != NULL );
assert( strcmp(board578053457, 
"..141.332.\n"
"...21...31\n"
"...1.4..3.\n"
".43113..44\n"
"42..312...\n"
".2.411..31\n"
".3.....31.\n"
".211..431.\n"
"4.4...2.1.\n"
"..41.2231.\n"
"1241..3323\n"
"1.1..2.33.\n"
"24.112343.\n"
"2..1244...\n"
"....22.32.\n") == 0);
free(board578053457);
board578053457 = NULL;
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );


char* board176114877 = gamma_board(board);
assert( board176114877 != NULL );
assert( strcmp(board176114877, 
"..141.332.\n"
"...21...31\n"
"...1.4..3.\n"
".43113..44\n"
"42..312...\n"
".2.411..31\n"
".3.....31.\n"
".211..431.\n"
"4.4...2.1.\n"
"..41.2231.\n"
"1241..3323\n"
"1.1..2.33.\n"
"24.112343.\n"
"2..1244...\n"
"....22.32.\n") == 0);
free(board176114877);
board176114877 = NULL;
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_golden_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_golden_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );


char* board961772338 = gamma_board(board);
assert( board961772338 != NULL );
assert( strcmp(board961772338, 
"..141.332.\n"
"...21...31\n"
"...1.44.3.\n"
".43113..44\n"
"42..312.3.\n"
"42.411..31\n"
".3.....31.\n"
".211..431.\n"
"4.44..2.1.\n"
"..4112231.\n"
"12411.3323\n"
"111.12.33.\n"
"24.112343.\n"
"2..12443..\n"
"2...22.32.\n") == 0);
free(board961772338);
board961772338 = NULL;
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 3, 4, 14) == 0 );


char* board561411158 = gamma_board(board);
assert( board561411158 != NULL );
assert( strcmp(board561411158, 
"..141.332.\n"
"...21...31\n"
"...1.44.3.\n"
".43113..44\n"
"42..312.3.\n"
"42.4111331\n"
".3.....31.\n"
".211..431.\n"
"4.44.12.1.\n"
"..4112231.\n"
"12411.3323\n"
"111.12.33.\n"
"241112343.\n"
"2..12443..\n"
"2...22.32.\n") == 0);
free(board561411158);
board561411158 = NULL;


char* board888204196 = gamma_board(board);
assert( board888204196 != NULL );
assert( strcmp(board888204196, 
"..141.332.\n"
"...21...31\n"
"...1.44.3.\n"
".43113..44\n"
"42..312.3.\n"
"42.4111331\n"
".3.....31.\n"
".211..431.\n"
"4.44.12.1.\n"
"..4112231.\n"
"12411.3323\n"
"111.12.33.\n"
"241112343.\n"
"2..12443..\n"
"2...22.32.\n") == 0);
free(board888204196);
board888204196 = NULL;
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_golden_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_golden_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 13) == 1 );


char* board392464173 = gamma_board(board);
assert( board392464173 != NULL );
assert( strcmp(board392464173, 
"..141.332.\n"
".1.21...31\n"
"...1.44.3.\n"
".43113..44\n"
"42..312.3.\n"
"4244111331\n"
".3.3...31.\n"
".2111.431.\n"
"4.44.12.1.\n"
"..4112231.\n"
"1241123323\n"
"111.12.33.\n"
"241112343.\n"
"24.12443..\n"
"22..22.321\n") == 0);
free(board392464173);
board392464173 = NULL;
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 36 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 6, 1) == 0 );


gamma_delete(board);

    return 0;
}
