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
uuid: 268887484
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 11, 4, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 2) == 92 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );


char* board722140519 = gamma_board(board);
assert( board722140519 != NULL );
assert( strcmp(board722140519, 
".........\n"
".........\n"
".........\n"
"21.4.....\n"
"1.2......\n"
"...1.....\n"
"........2\n"
"...12...3\n"
"...13..3.\n"
"3.1.4...4\n"
".........\n") == 0);
free(board722140519);
board722140519 = NULL;
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 3) == 54 );


char* board542688686 = gamma_board(board);
assert( board542688686 != NULL );
assert( strcmp(board542688686, 
"....4....\n"
".1.4.....\n"
"1....34..\n"
"21.4..223\n"
"112...2..\n"
".4.1.2432\n"
"....23.22\n"
".1.12...3\n"
"..213.234\n"
"331.4..44\n"
"3.1..1...\n") == 0);
free(board542688686);
board542688686 = NULL;
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );


char* board838303712 = gamma_board(board);
assert( board838303712 != NULL );
assert( strcmp(board838303712, 
"....4....\n"
".1.4.....\n"
"1....34..\n"
"21.4..223\n"
"112...2..\n"
".4.1.2432\n"
"4...23.22\n"
"11.12...3\n"
"..213.234\n"
"331.4..44\n"
"3.1..1...\n") == 0);
free(board838303712);
board838303712 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_move(board, 3, 1, 7) == 0 );


char* board697725009 = gamma_board(board);
assert( board697725009 != NULL );
assert( strcmp(board697725009, 
".1.24....\n"
".1.4...4.\n"
"1....34.1\n"
"21.4..223\n"
"1124..2.4\n"
".4.1.2432\n"
"44.323.22\n"
"11.12.1.3\n"
"..213.234\n"
"331.4..44\n"
"3.1..1.23\n") == 0);
free(board697725009);
board697725009 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_golden_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );


char* board671425024 = gamma_board(board);
assert( board671425024 != NULL );
assert( strcmp(board671425024, 
".1124....\n"
".1.4.3.4.\n"
"1....34.1\n"
"21.4..223\n"
"1124..2.4\n"
".4.112432\n"
"44.323.22\n"
"11211.113\n"
"..213.234\n"
"331.4..44\n"
"3.1..1.23\n") == 0);
free(board671425024);
board671425024 = NULL;
assert( gamma_golden_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_move(board, 2, 7, 3) == 0 );


char* board722094077 = gamma_board(board);
assert( board722094077 != NULL );
assert( strcmp(board722094077, 
".1124....\n"
".1.4.3.4.\n"
"1....34.1\n"
"21.4..223\n"
"1124..2.4\n"
".4.112432\n"
"44.323.22\n"
"11211.113\n"
"..213.234\n"
"331.4..44\n"
"3.1..1.23\n") == 0);
free(board722094077);
board722094077 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


char* board458468963 = gamma_board(board);
assert( board458468963 != NULL );
assert( strcmp(board458468963, 
".1124....\n"
".1.4.3.4.\n"
"1....34.1\n"
"21.4..223\n"
"11244.2.4\n"
"14.112432\n"
"44.323.22\n"
"11211.113\n"
"..213.234\n"
"331.4..44\n"
"3.1..1.23\n") == 0);
free(board458468963);
board458468963 = NULL;
assert( gamma_move(board, 3, 1, 5) == 0 );


char* board894310911 = gamma_board(board);
assert( board894310911 != NULL );
assert( strcmp(board894310911, 
".1124....\n"
".1.4.3.4.\n"
"1....34.1\n"
"21.4..223\n"
"11244.2.4\n"
"14.112432\n"
"44.323.22\n"
"11211.113\n"
"..213.234\n"
"331.4..44\n"
"3.1..1.23\n") == 0);
free(board894310911);
board894310911 = NULL;
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );


char* board572320467 = gamma_board(board);
assert( board572320467 != NULL );
assert( strcmp(board572320467, 
".1124....\n"
".1.4.344.\n"
"1.4..34.1\n"
"2114..223\n"
"11244.2.4\n"
"144112432\n"
"44.323122\n"
"11211.113\n"
"..2132234\n"
"331.4..44\n"
"3.1..1.23\n") == 0);
free(board572320467);
board572320467 = NULL;
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_busy_fields(board, 3) == 13 );


char* board969251101 = gamma_board(board);
assert( board969251101 != NULL );
assert( strcmp(board969251101, 
".1124....\n"
".1.4.344.\n"
"1.4..34.1\n"
"2114..223\n"
"11244.2.4\n"
"144112432\n"
"44.323122\n"
"11211.113\n"
"..2132234\n"
"331.4..44\n"
"3.1..1.23\n") == 0);
free(board969251101);
board969251101 = NULL;
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 9 );


char* board208996936 = gamma_board(board);
assert( board208996936 != NULL );
assert( strcmp(board208996936, 
".1124....\n"
".1.44344.\n"
"1.4..34.1\n"
"2114..223\n"
"11244.2.4\n"
"144142432\n"
"443323122\n"
"11211.113\n"
"4.2132234\n"
"331.4..44\n"
"3.1..1.23\n") == 0);
free(board208996936);
board208996936 = NULL;
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
