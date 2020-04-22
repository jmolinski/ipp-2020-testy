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
uuid: 746411204
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(19, 14, 6, 45);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 13) == 1 );
assert( gamma_move(board, 6, 6, 15) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_free_fields(board, 6) == 257 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 15, 9) == 1 );
assert( gamma_golden_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 4, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 15) == 0 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );


char* board579598753 = gamma_board(board);
assert( board579598753 != NULL );
assert( strcmp(board579598753, 
"...........5.......\n"
"...2...............\n"
"....4..............\n"
"...................\n"
".........2.3...2...\n"
"...1......1........\n"
"...................\n"
".......1...........\n"
"...................\n"
"...................\n"
"............6......\n"
"...................\n"
"...3...............\n"
"..........2...5....\n") == 0);
free(board579598753);
board579598753 = NULL;
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 13, 8) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 17) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 1, 1, 17) == 0 );


char* board834708551 = gamma_board(board);
assert( board834708551 != NULL );
assert( strcmp(board834708551, 
"...........5.......\n"
"...2...............\n"
"....4..............\n"
"...3...............\n"
".........2.3...2...\n"
"...1......1..2.....\n"
".........1.........\n"
".2.....1...........\n"
"...................\n"
"...6...............\n"
"....1.......6......\n"
"...................\n"
"...3...6...........\n"
"..........2...5....\n") == 0);
free(board834708551);
board834708551 = NULL;
assert( gamma_move(board, 2, 5, 12) == 1 );


char* board224186134 = gamma_board(board);
assert( board224186134 != NULL );
assert( strcmp(board224186134, 
"...........5.......\n"
"...2.2.............\n"
"....4..............\n"
"...3...............\n"
".........2.3...2...\n"
"...1......1..2.....\n"
".........1.........\n"
".2.....1...........\n"
"...................\n"
"...6...............\n"
"....1.......6......\n"
"...................\n"
"...3...6...........\n"
"..........2...5....\n") == 0);
free(board224186134);
board224186134 = NULL;
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 16) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_move(board, 5, 6, 16) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 16, 13) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 18, 2) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_free_fields(board, 5) == 227 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );


char* board803362663 = gamma_board(board);
assert( board803362663 != NULL );
assert( strcmp(board803362663, 
"...........5....2..\n"
"...2.23............\n"
"....4..............\n"
"...3...............\n"
".........2.3...2...\n"
"...1..3...1.22.....\n"
"1....4...152.......\n"
".2.....1..1........\n"
".....13.....44.....\n"
".6.6..2............\n"
"....1.......6......\n"
".6..34....13......4\n"
".5.3...63..........\n"
"..........2...5....\n") == 0);
free(board803362663);
board803362663 = NULL;
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 13, 6) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 214 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 18, 12) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 4, 16, 6) == 1 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 9, 13) == 1 );
assert( gamma_move(board, 6, 16, 0) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_free_fields(board, 4) == 197 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board800593448 = gamma_board(board);
assert( board800593448 != NULL );
assert( strcmp(board800593448, 
".........6.5....2..\n"
"2..2.23.....2.....3\n"
".3.44......5.......\n"
"...3........6......\n"
"4....4...2.3...2...\n"
"...1..3...1.22.....\n"
"15...4...152.......\n"
".2.....1.11..6..4..\n"
"...1.13.....44.....\n"
".6.61.2...3..4.....\n"
"....1.1.2.4.6......\n"
".6.434..2.13......4\n"
".5.3...63..........\n"
"..5.......2...5.6..\n") == 0);
free(board800593448);
board800593448 = NULL;
assert( gamma_move(board, 5, 9, 16) == 0 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 5, 14, 5) == 1 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 12, 11) == 1 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 7, 13) == 1 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 16, 12) == 1 );
assert( gamma_free_fields(board, 1) == 185 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_golden_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_free_fields(board, 6) == 181 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_free_fields(board, 3) == 178 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 13, 12) == 1 );
assert( gamma_move(board, 6, 2, 15) == 0 );
assert( gamma_free_fields(board, 6) == 176 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 1, 17) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 1, 16) == 0 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 16, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 13, 13) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 6, 10, 16) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 161 );
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_golden_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 5, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 10) == 0 );


char* board617524390 = gamma_board(board);
assert( board617524390 != NULL );
assert( strcmp(board617524390, 
"...6...5.6.5.2..2..\n"
"25.2323.22..25..1.3\n"
".3.44......54......\n"
"...3...6...665.....\n"
"42.5.4...2.3...2...\n"
".4.1..3..21422.....\n"
"15.334...152.......\n"
"32.....1.11.36..4..\n"
".211213...1.445....\n"
".64614235.3..4.....\n"
"3.3.1.1.2.4.6...4..\n"
".6.434112213......4\n"
".5.3...631...54....\n"
".25....4..26..5.6..\n") == 0);
free(board617524390);
board617524390 = NULL;


char* board862487444 = gamma_board(board);
assert( board862487444 != NULL );
assert( strcmp(board862487444, 
"...6...5.6.5.2..2..\n"
"25.2323.22..25..1.3\n"
".3.44......54......\n"
"...3...6...665.....\n"
"42.5.4...2.3...2...\n"
".4.1..3..21422.....\n"
"15.334...152.......\n"
"32.....1.11.36..4..\n"
".211213...1.445....\n"
".64614235.3..4.....\n"
"3.3.1.1.2.4.6...4..\n"
".6.434112213......4\n"
".5.3...631...54....\n"
".25....4..26..5.6..\n") == 0);
free(board862487444);
board862487444 = NULL;
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );


char* board452854874 = gamma_board(board);
assert( board452854874 != NULL );
assert( strcmp(board452854874, 
"...6...5.6.5.2..2..\n"
"25.2323.22..25..1.3\n"
".3.44......54......\n"
"...3...6...665.....\n"
"42.5.4...2.3...2...\n"
".4.1..3.121422.....\n"
"15.334...152.......\n"
"32.....1.11.36..4..\n"
".211213...1.445....\n"
".64614235.3..4.....\n"
"3.3.1.1.2.4.6...4..\n"
".6.434112213......4\n"
".5.3...631...54....\n"
".25....4..26..5.6..\n") == 0);
free(board452854874);
board452854874 = NULL;
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_free_fields(board, 3) == 151 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_free_fields(board, 4) == 151 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_golden_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_free_fields(board, 2) == 146 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_golden_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 17, 12) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );


char* board581060065 = gamma_board(board);
assert( board581060065 != NULL );
assert( strcmp(board581060065, 
"...6...5.6.5.24.2..\n"
"2542323.22..25..143\n"
".3.44......54......\n"
".3.3...6...665.....\n"
"42.5.4...2.3...2...\n"
".4.1..3.121422.....\n"
"15.334..6152.......\n"
"323....1311.36..4..\n"
"2211213...1.445....\n"
".64614235.3..4.....\n"
"3.3.1.1.2.4.6...4..\n"
".6.434112213......4\n"
".5.3...631...54....\n"
".25.6..4..26..5.6..\n") == 0);
free(board581060065);
board581060065 = NULL;
assert( gamma_move(board, 1, 17, 0) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_free_fields(board, 2) == 141 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 3, 15, 8) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 14, 9) == 1 );
assert( gamma_free_fields(board, 5) == 135 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_free_fields(board, 6) == 135 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 15, 10) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 16, 9) == 1 );
assert( gamma_free_fields(board, 2) == 133 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 12, 12) == 0 );
assert( gamma_move(board, 5, 15, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board286755652 = gamma_board(board);
assert( board286755652 != NULL );
assert( strcmp(board286755652, 
"...65..5.6.5.24.2..\n"
"2542323.22..25..143\n"
".3.44......54......\n"
".3.3...6...665.1...\n"
"42.5.42..2.3..522..\n"
".4.11432121422.3...\n"
"15.334..6152...5...\n"
"323....1311.36..4..\n"
"2211213...1.445....\n"
".64614235.3..4.....\n"
"3.341.1.2.4.6...4..\n"
".6.434112213......4\n"
".5.3...631...54....\n"
".25.6..4..26..5.61.\n") == 0);
free(board286755652);
board286755652 = NULL;
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_free_fields(board, 3) == 130 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 1, 15, 5) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 18, 5) == 1 );
assert( gamma_move(board, 4, 8, 13) == 1 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 4, 15) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 11, 18) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 18) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 14, 3) == 1 );


char* board381092486 = gamma_board(board);
assert( board381092486 != NULL );
assert( strcmp(board381092486, 
"..665..546.5.24.2..\n"
"2542323.22..25..143\n"
"23.444.....54......\n"
"23.3...6.1.665.1...\n"
"42.5.42..2.3..522..\n"
".4.11432121422.3...\n"
"15.334..6152...5...\n"
"323....1311.36..4..\n"
"2211213...1.4451..3\n"
".64614235.3..4.....\n"
"3.341.1.2.4.6.4.4..\n"
"66.434112213......4\n"
".5.3...631...54....\n"
"325.6..4..26.25.61.\n") == 0);
free(board381092486);
board381092486 = NULL;
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 18) == 0 );
assert( gamma_move(board, 6, 17, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 15, 13) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_free_fields(board, 1) == 117 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );


char* board510379461 = gamma_board(board);
assert( board510379461 != NULL );
assert( strcmp(board510379461, 
"..665..546.5.2412..\n"
"2542323.22..25..143\n"
"23.444.....54......\n"
"23.3...6.1.665.1...\n"
"42.5342..2.3..522..\n"
".4.11432121422.3.6.\n"
"15.334.56152...5...\n"
"323....1311.36..4..\n"
"2211213...1.4451..3\n"
".64614235.3..4.....\n"
"3.341.1.2.4.6.4.4..\n"
"66.434112213......4\n"
".5.3...631...54....\n"
"325.6..4..26.25.61.\n") == 0);
free(board510379461);
board510379461 = NULL;
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 20 );


char* board691891002 = gamma_board(board);
assert( board691891002 != NULL );
assert( strcmp(board691891002, 
"..665..546.5.2412..\n"
"2542323.22..25..143\n"
"23.444.....54......\n"
"23.3...6.1.665.1...\n"
"42.5342..2.3..522..\n"
".4.11432121422.3.6.\n"
"15.334.56152...5...\n"
"323....1311.36..4..\n"
"2211213...1.4451..3\n"
".64614235.3..4.....\n"
"3.341.1.2.4.6.4.4..\n"
"66.434112213......4\n"
".5.3...631...54....\n"
"325.6..45.26.25.61.\n") == 0);
free(board691891002);
board691891002 = NULL;
assert( gamma_move(board, 6, 14, 6) == 1 );
assert( gamma_move(board, 6, 18, 1) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 17, 13) == 1 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 3, 18, 10) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_free_fields(board, 4) == 108 );
assert( gamma_move(board, 5, 12, 15) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 17, 13) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 2, 15, 11) == 1 );
assert( gamma_move(board, 3, 17, 2) == 1 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_free_fields(board, 5) == 106 );


char* board793804970 = gamma_board(board);
assert( board793804970 != NULL );
assert( strcmp(board793804970, 
"..665..546.5.24121.\n"
"2542323.22..25..143\n"
"23.4443....54..2...\n"
"23.3...6.1.665.1..3\n"
"42.5342..2.3..522..\n"
".4.11432121422.3.6.\n"
"15.334.56152...5...\n"
"323....1311.366.4..\n"
"2211213...1.4451..3\n"
".6461423543..4.....\n"
"3.341.1.2.4.6.4.4..\n"
"664434112213.....34\n"
".5.3...631...54...6\n"
"325.6..45.26.25.61.\n") == 0);
free(board793804970);
board793804970 = NULL;
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 1, 17, 2) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 2, 18, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 2, 18, 9) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 12, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 13, 3) == 1 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_free_fields(board, 1) == 99 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 18, 13) == 1 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 3, 15, 2) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 11, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_golden_move(board, 1, 13, 16) == 0 );
assert( gamma_move(board, 2, 15, 6) == 1 );
assert( gamma_free_fields(board, 2) == 94 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 17, 6) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 11, 16) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_free_fields(board, 3) == 89 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_move(board, 6, 15, 8) == 0 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 18, 7) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_free_fields(board, 6) == 85 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 2, 15, 11) == 0 );
assert( gamma_move(board, 3, 16, 1) == 1 );
assert( gamma_free_fields(board, 3) == 83 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_free_fields(board, 5) == 83 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 16, 0) == 0 );


char* board171317565 = gamma_board(board);
assert( board171317565 != NULL );
assert( strcmp(board171317565, 
"..665..546.5.241212\n"
"2542323.22..25..143\n"
"2344443....54..2...\n"
"23.3.2.6112665.1..3\n"
"4515342..2.3..522.2\n"
".4211432121422.3.6.\n"
"15.334.56152.145..2\n"
"323....13112366241.\n"
"2211213.5.1.4451..3\n"
".6461423543..4.....\n"
"3.34141.2.41664.4..\n"
"66443411221344.3.34\n"
".5.3...631.3.54.3.6\n"
"325.6..45.26.25.61.\n") == 0);
free(board171317565);
board171317565 = NULL;
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 10, 16) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 8, 18) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 39 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_move(board, 6, 3, 17) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 10, 13) == 1 );


char* board360845183 = gamma_board(board);
assert( board360845183 != NULL );
assert( strcmp(board360845183, 
"..665..54645.241212\n"
"2542323.22..25..143\n"
"2344443....54..2...\n"
"23.3.2.6112665.1..3\n"
"4515342..2.34.522.2\n"
".4211432121422.3.6.\n"
"15.334.56152.145..2\n"
"323...113112366241.\n"
"2211213.5.1.4451..3\n"
".6461423543..4.....\n"
"3.34141.2.41664.4..\n"
"66443411221344.3.34\n"
".1.3...631.3.54.3.6\n"
"325.6..45.26.25.61.\n") == 0);
free(board360845183);
board360845183 = NULL;
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 10, 16) == 0 );


char* board974524092 = gamma_board(board);
assert( board974524092 != NULL );
assert( strcmp(board974524092, 
"..665..54645.241212\n"
"2542323.22..25..143\n"
"2344443.5..54..2...\n"
"23.3.2.6112665.1..3\n"
"4515342..2.34.522.2\n"
".4211432121422.3.6.\n"
"15.334.56152.145..2\n"
"323...113112366241.\n"
"2211213.5.1.4451..3\n"
".6461423543..4.....\n"
"3.34141.2.41664.4..\n"
"66443411221344.3.34\n"
".1.3...631.3.54.3.6\n"
"325.6..45.26.25.61.\n") == 0);
free(board974524092);
board974524092 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 6) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );


char* board921476246 = gamma_board(board);
assert( board921476246 != NULL );
assert( strcmp(board921476246, 
"..665..54645.241212\n"
"2542323.22..25..143\n"
"2344443.5..54..2...\n"
"23.3.2.6112665.1..3\n"
"4515342..2.34.522.2\n"
".4211432121422.3.6.\n"
"15.334.56152.145..2\n"
"323...113112366241.\n"
"2211213.561.4451..3\n"
".6461423543..4.....\n"
"3.34141.2.41664.4..\n"
"66443411221344.3.34\n"
".1.3...631.3.54.3.6\n"
"325.6..45.26325.61.\n") == 0);
free(board921476246);
board921476246 = NULL;
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_free_fields(board, 5) == 76 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 5, 16, 12) == 0 );
assert( gamma_move(board, 5, 18, 3) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board353874468 = gamma_board(board);
assert( board353874468 != NULL );
assert( strcmp(board353874468, 
"..665..54645.241212\n"
"2542323.22..25..143\n"
"2344443.5.554..2...\n"
"23.3.2.6112665.1..3\n"
"4515342..2.34.522.2\n"
".4211432121422.3.6.\n"
"15.334.56152.145..2\n"
"323...113112366241.\n"
"2211213.561.4451..3\n"
".6461423543..4.....\n"
"3.34141.2.41664.4.5\n"
"6644341122134423.34\n"
".1.3...631.3.54.3.6\n"
"325.6..45.26325.61.\n") == 0);
free(board353874468);
board353874468 = NULL;
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 18) == 0 );
assert( gamma_move(board, 5, 17, 3) == 1 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_free_fields(board, 6) == 72 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 11, 17) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 6, 17, 6) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_free_fields(board, 1) == 71 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 15, 11) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_golden_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 1, 16, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_golden_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 9, 17) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 16, 3) == 0 );
assert( gamma_move(board, 5, 16, 10) == 1 );
assert( gamma_move(board, 6, 11, 18) == 0 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 5, 16, 12) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_golden_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_move(board, 1, 18, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board765697259 = gamma_board(board);
assert( board765697259 != NULL );
assert( strcmp(board765697259, 
"..6652.54645.241212\n"
"2542323.22..25..143\n"
"2344443.5.554..2...\n"
"23.3.256112665.15.3\n"
"4515342..2.34.522.2\n"
"64211432121422.3.6.\n"
"15.334356152.145..2\n"
"323...113312366241.\n"
"2211213.561.4451..3\n"
".6461423543..42....\n"
"3.34141.2.41664.455\n"
"6644341122134423134\n"
"51.3...631.3554.3.6\n"
"325.6..45.26325.61.\n") == 0);
free(board765697259);
board765697259 = NULL;
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );


char* board132150438 = gamma_board(board);
assert( board132150438 != NULL );
assert( strcmp(board132150438, 
"..6652.54645.241212\n"
"2542323.22..25..143\n"
"2344443.5.554..2...\n"
"23.3.256112665.15.3\n"
"4515342..2.34.522.2\n"
"64211432121422.3.6.\n"
"154334356152.145..2\n"
"323...113312366241.\n"
"2211213.561.4451..3\n"
".6461423543..42....\n"
"3.34141.2.41664.455\n"
"6644341122134423134\n"
"51.3...631.3554.3.6\n"
"325.6..45.26325.61.\n") == 0);
free(board132150438);
board132150438 = NULL;
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 18) == 0 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 6, 0, 15) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_golden_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 16, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_golden_move(board, 4, 13, 7) == 1 );
assert( gamma_move(board, 6, 17, 7) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 17, 10) == 1 );


char* board194413483 = gamma_board(board);
assert( board194413483 != NULL );
assert( strcmp(board194413483, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.554..2...\n"
"23.3.256112665.1553\n"
"4515342..24345522.2\n"
"64211432121422.3.6.\n"
"154334356152.445.62\n"
"323...113312366241.\n"
"2211213.561.4451..3\n"
".6461423543..42....\n"
"3.34141.2.41664.455\n"
"6644341122134423134\n"
"51.3...63113554.3.6\n"
"325.6.645.26325.61.\n") == 0);
free(board194413483);
board194413483 = NULL;
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 6, 17, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_golden_move(board, 3, 7, 18) == 0 );


char* board360315721 = gamma_board(board);
assert( board360315721 != NULL );
assert( strcmp(board360315721, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.554..2...\n"
"23.3.256112665.1553\n"
"4515342..24345522.2\n"
"64211432121422.3.6.\n"
"154334356152.445.62\n"
"3232..113312366241.\n"
"2211213.561.4451..3\n"
".6461423543..42....\n"
"3.34141.2.41664.455\n"
"6644341122134423134\n"
"51.3...63113554.3.6\n"
"325.6.645.26325.61.\n") == 0);
free(board360315721);
board360315721 = NULL;
assert( gamma_move(board, 5, 16, 11) == 1 );
assert( gamma_move(board, 5, 13, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 17, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 4, 18) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board758975444 = gamma_board(board);
assert( board758975444 != NULL );
assert( strcmp(board758975444, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.5545.25..\n"
"23.3.256112665.1553\n"
"4515342..24345522.2\n"
"64211432121422.3.6.\n"
"154334356152.445.62\n"
"3232..113312366241.\n"
"2211213.561.4451..3\n"
".6461423543..42....\n"
"3.34141.2641664.455\n"
"6644341122134423134\n"
"51.3...63113554.3.6\n"
"325.6.645.26325.61.\n") == 0);
free(board758975444);
board758975444 = NULL;
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 52 );


char* board780821288 = gamma_board(board);
assert( board780821288 != NULL );
assert( strcmp(board780821288, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.5545.25..\n"
"23.3.256112665.1553\n"
"4515342..24345522.2\n"
"64211432121422.3.6.\n"
"154334356152.445.62\n"
"3232..113312366241.\n"
"2211213.561.4451..3\n"
".6461423543..42....\n"
"3.34141.2641664.455\n"
"6644341122134423134\n"
"51.3...63113554.3.6\n"
"325.6.645.26325.61.\n") == 0);
free(board780821288);
board780821288 = NULL;
assert( gamma_move(board, 2, 15, 4) == 1 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 4, 18) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 0, 15) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 2, 0, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 17) == 0 );
assert( gamma_move(board, 3, 14, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 9, 17) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_golden_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 1, 16, 1) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 3, 12, 15) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 26 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 15, 7) == 0 );
assert( gamma_move(board, 6, 0, 15) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board302161067 = gamma_board(board);
assert( board302161067 != NULL );
assert( strcmp(board302161067, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.5545.25..\n"
"23.3.25611266531553\n"
"4515342.224345522.2\n"
"64211432121422.3.6.\n"
"154334356152.445.62\n"
"3232..113312366241.\n"
"2211213.561.4451..3\n"
".6461423543..422...\n"
"3.34141.2641664.455\n"
"6644341122134423134\n"
"51.3...63113554.3.6\n"
"325.62645.26325.61.\n") == 0);
free(board302161067);
board302161067 = NULL;
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 17, 13) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 3, 9, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 17, 10) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );


char* board975738861 = gamma_board(board);
assert( board975738861 != NULL );
assert( strcmp(board975738861, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.5545.25..\n"
"23.3.25611266531553\n"
"4515342.224345522.2\n"
"64211432121422.3.6.\n"
"154334356152.445.62\n"
"3232..113312366241.\n"
"2211213.561.4451..3\n"
".6461423543..422...\n"
"3.34141.2641664.455\n"
"6644341122134423134\n"
"51.3...63113554.3.6\n"
"325.62645.26325.61.\n") == 0);
free(board975738861);
board975738861 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 9, 17) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 17) == 0 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_golden_move(board, 6, 13, 8) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 18) == 0 );
assert( gamma_move(board, 3, 16, 9) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 1, 11, 17) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 8, 18) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 17, 7) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_golden_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 18) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 6, 17, 10) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );


char* board102070034 = gamma_board(board);
assert( board102070034 != NULL );
assert( strcmp(board102070034, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.5545.25..\n"
"23.3.25611266531553\n"
"4515342.224345522.2\n"
"64211432121426.3.6.\n"
"154334356152.445.62\n"
"3232..113312366241.\n"
"2211223.56114451..3\n"
".6461423543..422...\n"
"3.34141.2641664.455\n"
"6644341122134423134\n"
"51.33..63113554.3.6\n"
"325.62645.26325.61.\n") == 0);
free(board102070034);
board102070034 = NULL;
assert( gamma_move(board, 2, 1, 17) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_move(board, 6, 2, 10) == 1 );


char* board936560763 = gamma_board(board);
assert( board936560763 != NULL );
assert( strcmp(board936560763, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.5545.25..\n"
"2363.25611266531553\n"
"4515342.224345522.2\n"
"64211432121426.3.6.\n"
"154334356152.445.62\n"
"3232..113312366241.\n"
"2211223.56114451..3\n"
".6461423543..422...\n"
"3.34141.2641664.455\n"
"6644341122134423134\n"
"51.33..63113554.3.6\n"
"325.62645.26325.61.\n") == 0);
free(board936560763);
board936560763 = NULL;
assert( gamma_move(board, 1, 18, 1) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_free_fields(board, 2) == 45 );


char* board548000673 = gamma_board(board);
assert( board548000673 != NULL );
assert( strcmp(board548000673, 
"..6652.54645.241212\n"
"2542323222..25..143\n"
"2344443.5.5545.25..\n"
"2363.25611266531553\n"
"4515342.224345522.2\n"
"64211432121426.3.6.\n"
"154334356152.445.62\n"
"3232..113312366241.\n"
"2211223.56114451..3\n"
".6461423543..422...\n"
"3.34141.2641664.455\n"
"6644341122134423134\n"
"51.33..63113554.3.6\n"
"325.62645.26325.61.\n") == 0);
free(board548000673);
board548000673 = NULL;
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 5, 16) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 8, 18) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );


gamma_delete(board);

    return 0;
}
