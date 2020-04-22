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
uuid: 479122258
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 21, 4, 50);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 5, 14) == 1 );
assert( gamma_free_fields(board, 3) == 269 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 1, 19) == 1 );
assert( gamma_golden_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 1, 19, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 11, 16) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_free_fields(board, 3) == 254 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 3, 17, 11) == 0 );
assert( gamma_move(board, 4, 6, 17) == 1 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 4, 18) == 1 );
assert( gamma_free_fields(board, 2) == 250 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 250 );
assert( gamma_golden_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 15) == 1 );
assert( gamma_move(board, 2, 19, 5) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 1, 13) == 1 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 241 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 12, 17) == 1 );
assert( gamma_move(board, 4, 10, 18) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 12, 11) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 3, 20) == 1 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_golden_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_free_fields(board, 2) == 219 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 19, 11) == 0 );
assert( gamma_move(board, 3, 16, 3) == 0 );
assert( gamma_move(board, 3, 12, 19) == 1 );
assert( gamma_move(board, 4, 3, 20) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 2, 0, 19) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 19) == 1 );
assert( gamma_move(board, 2, 9, 19) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );


char* board370516369 = gamma_board(board);
assert( board370516369 != NULL );
assert( strcmp(board370516369, 
"...1.........\n"
"24...2...2..3\n"
"....2.....4..\n"
"......4.....3\n"
"...........2.\n"
"..1..........\n"
".....3..4....\n"
".4...........\n"
"3..3.........\n"
"..1..1431...4\n"
"3..1.234.....\n"
".21..1.22...2\n"
"4...12.3..2..\n"
".2..34.4.2...\n"
"43..2.13.....\n"
".3.........3.\n"
"....11.2...3.\n"
".....4..3.3..\n"
"......43.....\n"
"...1.4..3.11.\n"
"23.....22.431\n") == 0);
free(board370516369);
board370516369 = NULL;
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_move(board, 4, 5, 15) == 1 );


char* board445435358 = gamma_board(board);
assert( board445435358 != NULL );
assert( strcmp(board445435358, 
"...1.........\n"
"24...2...2..3\n"
"....2.....4..\n"
"......4.....3\n"
"...........2.\n"
"..1..4.......\n"
".....3..4....\n"
".4...........\n"
"3..3.........\n"
"..1..14314..4\n"
"3..1.234.....\n"
".21..1.22...2\n"
"4...12.3..2..\n"
".2..34.4.2...\n"
"43..2.13.....\n"
".3.........3.\n"
"....11.2...3.\n"
".....4..3.3..\n"
"......43.....\n"
"...1.4..3.11.\n"
"23.....22.431\n") == 0);
free(board445435358);
board445435358 = NULL;
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 19) == 1 );
assert( gamma_move(board, 2, 12, 10) == 1 );
assert( gamma_move(board, 4, 20, 11) == 0 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_move(board, 1, 10, 5) == 0 );


char* board336767349 = gamma_board(board);
assert( board336767349 != NULL );
assert( strcmp(board336767349, 
"...1.........\n"
"24...2.2.2..3\n"
"....2.....4..\n"
"......4.....3\n"
"...........2.\n"
"..1..4.......\n"
".....3..4....\n"
".4...........\n"
"3..3.........\n"
"..1..14314..4\n"
"3..1.234....2\n"
".21..1.22...2\n"
"4...12.3..2..\n"
".2..34.4.2...\n"
"43..2.13.....\n"
".3.........3.\n"
"...111.2...3.\n"
".....4..3.3..\n"
"......43.....\n"
"...1.4..3.11.\n"
"23.....22.431\n") == 0);
free(board336767349);
board336767349 = NULL;
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 5, 17) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 17) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_golden_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 18, 1) == 0 );
assert( gamma_move(board, 3, 1, 18) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );


char* board110402290 = gamma_board(board);
assert( board110402290 != NULL );
assert( strcmp(board110402290, 
"...1.........\n"
"24...2.2.2..3\n"
".3..2.....4..\n"
"4....34.....3\n"
"...........2.\n"
"..1..4.......\n"
".....3..4....\n"
".4...........\n"
"3..3....4....\n"
"..1..14314..4\n"
"3..1.234....2\n"
".21..1.22...2\n"
"4...12.3..2..\n"
".2.134.4.2...\n"
"43..2.131....\n"
".3.........3.\n"
"...111.2...3.\n"
"..4..4..3.3..\n"
"......43.....\n"
"...1.4..3.11.\n"
"23.....22.431\n") == 0);
free(board110402290);
board110402290 = NULL;
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_free_fields(board, 1) == 189 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 18) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, 4, 17) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_free_fields(board, 4) == 182 );
assert( gamma_golden_move(board, 4, 18, 4) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_free_fields(board, 3) == 179 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_free_fields(board, 1) == 178 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 10, 15) == 1 );
assert( gamma_golden_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 1, 15) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 20, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_golden_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 2, 17) == 1 );
assert( gamma_free_fields(board, 4) == 166 );
assert( gamma_move(board, 1, 5, 20) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );


char* board802819838 = gamma_board(board);
assert( board802819838 != NULL );
assert( strcmp(board802819838, 
"...1.1.......\n"
"24...2.2.2..3\n"
".3..2.....4..\n"
"4.3.234.....3\n"
"...........2.\n"
".31..4.1..2..\n"
".....3..4....\n"
".4...43.2....\n"
"3.43..1.4....\n"
"..1..14314..4\n"
"3.411234.4..2\n"
".21..1.22...2\n"
"4...12.3..2..\n"
".2.134.4.2...\n"
"43.22.131...1\n"
"432......3.3.\n"
"..3111.4.423.\n"
"3.4..4..3.3..\n"
"......43.....\n"
".3.1.4..3.112\n"
"23...2.22.431\n") == 0);
free(board802819838);
board802819838 = NULL;
assert( gamma_move(board, 1, 7, 20) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 20, 10) == 0 );
assert( gamma_golden_move(board, 4, 20, 7) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 1, 0, 20) == 1 );
assert( gamma_move(board, 2, 1, 11) == 1 );


char* board772944091 = gamma_board(board);
assert( board772944091 != NULL );
assert( strcmp(board772944091, 
"1..1.1.1.....\n"
"24...2.2.2..3\n"
".3..2.....4..\n"
"4.3.234.....3\n"
"...........2.\n"
".31..4.1..2..\n"
".....3..4....\n"
"44...43.2....\n"
"3.43..1.4...2\n"
".21..14314..4\n"
"3.411234.4..2\n"
".21..1.32...2\n"
"4...12.3..2..\n"
".2.134.4.2...\n"
"43.22.131...1\n"
"432......313.\n"
"..3111.4.423.\n"
"3.4..4..3.3..\n"
"......43.....\n"
".3.1.4..3.112\n"
"23...2.22.431\n") == 0);
free(board772944091);
board772944091 = NULL;
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 9, 14) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 1, 9, 16) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );


char* board813571452 = gamma_board(board);
assert( board813571452 != NULL );
assert( strcmp(board813571452, 
"1..1.1.1.....\n"
"24...2.2.2..3\n"
".3..2.....4..\n"
"4.3.234.....3\n"
".........1.2.\n"
".31..4.1..2..\n"
".....3..43...\n"
"44...43.2....\n"
"3.43..1.4...2\n"
".21..14314..4\n"
"3.411234.4..2\n"
".21..1.32...2\n"
"4...12.3..2..\n"
".2.134.4.2...\n"
"43.22.131...1\n"
"432......313.\n"
"..3111.4.423.\n"
"3.4..4..3.3..\n"
"......43.....\n"
".3.1.4..3.112\n"
"23...2.22.431\n") == 0);
free(board813571452);
board813571452 = NULL;
assert( gamma_move(board, 2, 18, 6) == 0 );
assert( gamma_free_fields(board, 2) == 155 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 12) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 16) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 4, 0, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 18, 12) == 0 );
assert( gamma_free_fields(board, 1) == 144 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_free_fields(board, 1) == 143 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 2, 7, 18) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 19, 6) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 9, 20) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_free_fields(board, 2) == 139 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 3, 9, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_move(board, 3, 6, 19) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_move(board, 3, 3, 19) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 18) == 0 );
assert( gamma_move(board, 1, 20, 11) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 2, 8, 15) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 1, 18, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 2, 5, 20) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );


char* board842170534 = gamma_board(board);
assert( board842170534 != NULL );
assert( strcmp(board842170534, 
"1..1.1.1.1...\n"
"24.3.232.2..3\n"
".3..2..2..4..\n"
"4.3.234..3..3\n"
"4........1.2.\n"
".31..4.12.2..\n"
"....33..43...\n"
"443..43.2....\n"
"3.43..1.4..32\n"
".21..14314..4\n"
"3.411234.4.22\n"
".213.1132.4.2\n"
"4.2.12.34.2.2\n"
".2.134.4.2...\n"
"43.22.131...1\n"
"432..2...3133\n"
".13111.4.423.\n"
"3.44.4..3.34.\n"
"12....43.....\n"
".3.1.4..3.112\n"
"23...2.22.431\n") == 0);
free(board842170534);
board842170534 = NULL;
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 11, 19) == 1 );
assert( gamma_free_fields(board, 1) == 129 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 16, 3) == 0 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_move(board, 4, 8, 16) == 1 );
assert( gamma_free_fields(board, 4) == 128 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 12, 20) == 1 );
assert( gamma_busy_fields(board, 2) == 39 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_free_fields(board, 3) == 124 );
assert( gamma_golden_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 17, 10) == 0 );
assert( gamma_move(board, 1, 7, 16) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 3, 20, 8) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 1, 11, 18) == 1 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 12, 18) == 1 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_move(board, 2, 20, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_free_fields(board, 3) == 116 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 12, 15) == 1 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 4, 19, 4) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 1, 20) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 12, 15) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 109 );
assert( gamma_move(board, 2, 7, 19) == 0 );
assert( gamma_move(board, 2, 6, 14) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_free_fields(board, 4) == 108 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_free_fields(board, 3) == 108 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_free_fields(board, 2) == 106 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 44 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 16) == 1 );
assert( gamma_move(board, 1, 17, 10) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 2, 18) == 1 );
assert( gamma_move(board, 4, 15, 11) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_free_fields(board, 1) == 102 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );


char* board742228383 = gamma_board(board);
assert( board742228383 != NULL );
assert( strcmp(board742228383, 
"11.1.1.1.1..2\n"
"24.3.232.2.13\n"
".33.2..2..414\n"
"4.3.234..3..3\n"
"4..4...141.2.\n"
".31..4.12.2.1\n"
"....332.43...\n"
"443..4312....\n"
"3.43331.4..32\n"
".21..14314244\n"
"3.411234.4.22\n"
"3213.113244.2\n"
"4.2.12.34.2.2\n"
".2.134.4.21.4\n"
"43.22213112.1\n"
"432..2...3133\n"
"41311134.423.\n"
"3.44.4.43.34.\n"
"1214..432....\n"
".331.4..3.112\n"
"23...2.22.431\n") == 0);
free(board742228383);
board742228383 = NULL;
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_move(board, 2, 19, 8) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 2, 20, 10) == 0 );
assert( gamma_move(board, 2, 11, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 11, 14) == 1 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 2, 1, 14) == 1 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 7, 17) == 1 );
assert( gamma_move(board, 2, 18, 0) == 0 );
assert( gamma_move(board, 3, 20, 2) == 0 );
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 19, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 16, 12) == 0 );
assert( gamma_move(board, 1, 7, 20) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 1, 20, 12) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 3, 19) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );


char* board295885378 = gamma_board(board);
assert( board295885378 != NULL );
assert( strcmp(board295885378, 
"11.1.1.1.1..2\n"
"24.3.232.2.13\n"
".33.2..2..414\n"
"4.3.2341.3..3\n"
"4..4...141.2.\n"
".31..4.12.221\n"
".2.1332.43.1.\n"
"443..4312....\n"
"3.43331.4..32\n"
".21..14314244\n"
"3.411234.4.22\n"
"3213.113244.2\n"
"4.2.12.34.2.2\n"
".2.134.4.21.4\n"
"43.22213112.1\n"
"432..2...3133\n"
"41311134.423.\n"
"3.44.4.43.34.\n"
"1214.2432....\n"
".331.4..3.112\n"
"23...2.22.431\n") == 0);
free(board295885378);
board295885378 = NULL;
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 1, 6, 20) == 1 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 44 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 5, 20) == 0 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_move(board, 3, 1, 20) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );


char* board529058197 = gamma_board(board);
assert( board529058197 != NULL );
assert( strcmp(board529058197, 
"11.1.111.1..2\n"
"24.3.232.2.13\n"
".33.2..2..414\n"
"4.3.2341.3..3\n"
"4..4...141.2.\n"
".31..4.12.221\n"
".2.1332.43.1.\n"
"443..4312....\n"
"3.43331.4..32\n"
".21..14314244\n"
"3.411234.4.22\n"
"3213.113244.2\n"
"4.2412.34.2.2\n"
".2.134.4.21.4\n"
"43.22213112.1\n"
"432..2...3133\n"
"41311134.423.\n"
"3244.4.43.34.\n"
"1214.2432....\n"
".331.4..3.112\n"
"23...2.22.431\n") == 0);
free(board529058197);
board529058197 = NULL;
assert( gamma_busy_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 11, 20) == 1 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_free_fields(board, 4) == 90 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 12, 16) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );


char* board882163980 = gamma_board(board);
assert( board882163980 != NULL );
assert( strcmp(board882163980, 
"11.1.111.1.22\n"
"24.3.232.2.13\n"
".33.2..2..414\n"
"4.3.2341.3..3\n"
"4..4...141.21\n"
".31..4.12.221\n"
".2.1332.43.1.\n"
"443..4312....\n"
"3.43331.4..32\n"
".21..14314244\n"
"3.411234.4.22\n"
"3213.113244.2\n"
"4.2412.3442.2\n"
".2.134.4.21.4\n"
"43.22213112.1\n"
"432..2...3133\n"
"41311134.423.\n"
"3244.4.43434.\n"
"1214.2432....\n"
".331.4..3.112\n"
"23...2.22.431\n") == 0);
free(board882163980);
board882163980 = NULL;
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 88 );
assert( gamma_move(board, 4, 10, 14) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 14) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 4, 15) == 1 );
assert( gamma_move(board, 1, 19, 2) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 8, 19) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 11, 17) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_free_fields(board, 1) == 81 );
assert( gamma_move(board, 2, 3, 19) == 0 );
assert( gamma_free_fields(board, 2) == 81 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );


char* board223473580 = gamma_board(board);
assert( board223473580 != NULL );
assert( strcmp(board223473580, 
"11.1.111.1.22\n"
"24.3.23232.13\n"
".33.2..2..414\n"
"4.3.2341.3.43\n"
"4..4...141.21\n"
".31.44.12.221\n"
".221332.4341.\n"
"443..4312....\n"
"3.43331.4..32\n"
".21..14314244\n"
"3.411234.4.22\n"
"3213.113244.2\n"
"4.2412.3442.2\n"
".2.134.4221.4\n"
"43.22213112.1\n"
"432..24..3133\n"
"41311134.423.\n"
"3244.4.43434.\n"
"1214.2432....\n"
".331.4..3.112\n"
"23...2.22.431\n") == 0);
free(board223473580);
board223473580 = NULL;
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 17, 10) == 0 );
assert( gamma_move(board, 3, 9, 17) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_free_fields(board, 1) == 79 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 19, 4) == 0 );
assert( gamma_move(board, 3, 19, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board242506146 = gamma_board(board);
assert( board242506146 != NULL );
assert( strcmp(board242506146, 
"11.1.111.1.22\n"
"24.3.23232.13\n"
".33.2..2..414\n"
"4.3.2341.3.43\n"
"4..4...141.21\n"
".31.44.12.221\n"
".221332.4341.\n"
"443..4312....\n"
"3.43331.4..32\n"
".21..14314244\n"
"3.411234.4122\n"
"3213.113244.2\n"
"442412.344242\n"
".2.134.4221.4\n"
"43.22213112.1\n"
"432..24..3133\n"
"41311134.4231\n"
"3244.4.43434.\n"
"1214.2432....\n"
".331.4..3.112\n"
"23...2.22.431\n") == 0);
free(board242506146);
board242506146 = NULL;
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 19) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 17) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 48 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 1, 16, 10) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 3, 10, 16) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 7, 20) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_move(board, 2, 0, 14) == 1 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 20, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 20, 8) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 17, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 17, 10) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 49 );


char* board418803256 = gamma_board(board);
assert( board418803256 != NULL );
assert( strcmp(board418803256, 
"11.1.111.1.22\n"
"24.3.23232.13\n"
".33.2..2..414\n"
"4.3.2341.3.43\n"
"4..4...141321\n"
".31.44.12.221\n"
"2221332.4341.\n"
"443..4312....\n"
"3.43331.4..32\n"
".211.14314244\n"
"3.411234.4122\n"
"3213.113244.2\n"
"442412.344242\n"
".2.134.4221.4\n"
"43.22213112.1\n"
"432..24..3133\n"
"41311134.4231\n"
"3244.4.43434.\n"
"1214.2432....\n"
"4331.42.3.112\n"
"23...2322.431\n") == 0);
free(board418803256);
board418803256 = NULL;
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 10, 20) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 2, 16) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 6, 19) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_free_fields(board, 2) == 69 );


char* board737761660 = gamma_board(board);
assert( board737761660 != NULL );
assert( strcmp(board737761660, 
"11.1.111.1322\n"
"24.3.23232.13\n"
".33.2..2..414\n"
"4.3.2341.3.43\n"
"4.24...141321\n"
".31.44.12.221\n"
"2221332.4341.\n"
"443..4312....\n"
"3.43331.4..32\n"
".211.14314244\n"
"3.411234.4122\n"
"3213.113244.2\n"
"442412.344242\n"
".2.134.4221.4\n"
"43.22213112.1\n"
"432..24..3133\n"
"41311134.4231\n"
"3244.4.43434.\n"
"1214.2432....\n"
"4331.42.3.112\n"
"23...2322.431\n") == 0);
free(board737761660);
board737761660 = NULL;
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 17, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 2, 0, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 1, 20) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_golden_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 1, 19, 10) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 19, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 19, 2) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 1, 9, 19) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 4, 1, 18) == 0 );
assert( gamma_move(board, 1, 5, 20) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 18, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );


char* board769693857 = gamma_board(board);
assert( board769693857 != NULL );
assert( strcmp(board769693857, 
"11.1.111.1322\n"
"24.3.23232.13\n"
".33.2..2..414\n"
"4.3.2341.3.43\n"
"4.24...141321\n"
".31.44.12.221\n"
"2221332.4341.\n"
"443..43123...\n"
"3243331.4..32\n"
".211.14314244\n"
"3.411234.4122\n"
"3213.113244.2\n"
"442412.344242\n"
".2.1343422134\n"
"43.22213112.1\n"
"432..24..3133\n"
"41311134.4231\n"
"3244.4.43434.\n"
"1214.24321...\n"
"4331.42.3.112\n"
"23...2322.431\n") == 0);
free(board769693857);
board769693857 = NULL;
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 6, 19) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );


char* board313253818 = gamma_board(board);
assert( board313253818 != NULL );
assert( strcmp(board313253818, 
"11.1.111.1322\n"
"24.3.23232.13\n"
".33.2..2..414\n"
"4.3.2341.3.43\n"
"4.24...141321\n"
".31.44.12.221\n"
"2221332.4341.\n"
"443..43123...\n"
"3243331.4..32\n"
".211.14314244\n"
"3.411234.4122\n"
"3213.113244.2\n"
"442412.344242\n"
".2.1343422134\n"
"43.22213112.1\n"
"432..24..3133\n"
"41311134.4231\n"
"3244.4.43434.\n"
"1214.24321...\n"
"4331.42.3.112\n"
"23...2322.431\n") == 0);
free(board313253818);
board313253818 = NULL;
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 19, 2) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 3, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 4, 0, 19) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 18, 6) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 15) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );


char* board327540899 = gamma_board(board);
assert( board327540899 != NULL );
assert( strcmp(board327540899, 
"11.1.111.1322\n"
"24.3.23232.13\n"
".33.2..2..414\n"
"4.3.2341.3.43\n"
"4.24...141321\n"
"431.44.12.221\n"
"2221332.4341.\n"
"443..43123...\n"
"3243331.4..32\n"
".212.14314244\n"
"3.411234.4122\n"
"3213.113244.2\n"
"442412.344242\n"
".2.1343422134\n"
"43.22213112.1\n"
"432..24..3133\n"
"41311134.4231\n"
"3244.4.43434.\n"
"1214.24321.3.\n"
"4331.42.3.112\n"
"23...2322.431\n") == 0);
free(board327540899);
board327540899 = NULL;
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 2, 2, 19) == 1 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_move(board, 3, 20, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 0, 19) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 56 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 7, 20) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 20, 4) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 1, 0, 19) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 3, 4, 19) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 7, 17) == 0 );
assert( gamma_move(board, 1, 19, 10) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );


char* board850585444 = gamma_board(board);
assert( board850585444 != NULL );
assert( strcmp(board850585444, 
"11.1.111.1322\n"
"2423323232.13\n"
".33.2..2..414\n"
"4.3.2341.3.43\n"
"4.24...141321\n"
"431.44.12.221\n"
"222133244341.\n"
"443..43123..2\n"
"3243331.4..32\n"
".212.14314244\n"
"34411234.4122\n"
"3213.113244.2\n"
"442412.344242\n"
".211343422134\n"
"43.22213112.1\n"
"432..24..3133\n"
"41311134.4231\n"
"324434.43434.\n"
"1214.24311.3.\n"
"4331.42.3.112\n"
"23...2322.431\n") == 0);
free(board850585444);
board850585444 = NULL;
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_golden_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_golden_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 7, 18) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 18, 6) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 1, 7, 19) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 1, 8, 16) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 57 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 12, 20) == 0 );
assert( gamma_move(board, 2, 4, 16) == 1 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 15, 6) == 0 );


gamma_delete(board);

    return 0;
}
