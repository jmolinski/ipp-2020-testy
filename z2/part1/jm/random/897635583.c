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
uuid: 897635583
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 5, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 79 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 6 );


char* board265923034 = gamma_board(board);
assert( board265923034 != NULL );
assert( strcmp(board265923034, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"......3.\n"
"...3.434\n"
"..1.....\n"
"1.2..5.5\n"
"1.......\n"
"...5....\n") == 0);
free(board265923034);
board265923034 = NULL;


char* board782425472 = gamma_board(board);
assert( board782425472 != NULL );
assert( strcmp(board782425472, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"......3.\n"
"...3.434\n"
"..1.....\n"
"1.2..5.5\n"
"1.......\n"
"...5....\n") == 0);
free(board782425472);
board782425472 = NULL;
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );


char* board101388615 = gamma_board(board);
assert( board101388615 != NULL );
assert( strcmp(board101388615, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"......3.\n"
"...3.434\n"
"..1.....\n"
"1.2..5.5\n"
"1.2.....\n"
"...5....\n") == 0);
free(board101388615);
board101388615 = NULL;
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board282065461 = gamma_board(board);
assert( board282065461 != NULL );
assert( strcmp(board282065461, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"......3.\n"
"...3.434\n"
"..1.....\n"
"1.2..5.5\n"
"1.2.....\n"
"...5....\n") == 0);
free(board282065461);
board282065461 = NULL;
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_golden_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );


char* board712839424 = gamma_board(board);
assert( board712839424 != NULL );
assert( strcmp(board712839424, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"..2...3.\n"
"..23.434\n"
"..1..5..\n"
"1.2..5.5\n"
"1.2.....\n"
"..25....\n") == 0);
free(board712839424);
board712839424 = NULL;
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );


char* board451368128 = gamma_board(board);
assert( board451368128 != NULL );
assert( strcmp(board451368128, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"..2...3.\n"
"..23.434\n"
"..1..5..\n"
"1.2..5.5\n"
"1.2.....\n"
"..25....\n") == 0);
free(board451368128);
board451368128 = NULL;
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );


char* board525190470 = gamma_board(board);
assert( board525190470 != NULL );
assert( strcmp(board525190470, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"..2..33.\n"
"..234434\n"
"..1..5..\n"
"1.22.5.5\n"
"122.....\n"
"..25....\n") == 0);
free(board525190470);
board525190470 = NULL;
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );


char* board799998466 = gamma_board(board);
assert( board799998466 != NULL );
assert( strcmp(board799998466, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"..2..33.\n"
"..234434\n"
"..1..5..\n"
"1.22.5.5\n"
"122.....\n"
"..25....\n") == 0);
free(board799998466);
board799998466 = NULL;
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );


char* board117369289 = gamma_board(board);
assert( board117369289 != NULL );
assert( strcmp(board117369289, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"..2..33.\n"
"..234434\n"
"..1..5..\n"
"1.22.5.5\n"
"1225....\n"
"..25....\n") == 0);
free(board117369289);
board117369289 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_free_fields(board, 5) == 9 );


char* board279736113 = gamma_board(board);
assert( board279736113 != NULL );
assert( strcmp(board279736113, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"..2..33.\n"
"..234434\n"
"..13.5..\n"
"1.23.5.5\n"
"1225....\n"
"..25....\n") == 0);
free(board279736113);
board279736113 = NULL;
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 11 );


char* board498834097 = gamma_board(board);
assert( board498834097 != NULL );
assert( strcmp(board498834097, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"..2..33.\n"
"..234434\n"
"..13.5..\n"
"1.23.5.5\n"
"1225....\n"
"..25....\n") == 0);
free(board498834097);
board498834097 = NULL;
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );


char* board631833191 = gamma_board(board);
assert( board631833191 != NULL );
assert( strcmp(board631833191, 
"........\n"
"........\n"
".......1\n"
"...3...2\n"
"..222..4\n"
"..2..33.\n"
"..234434\n"
"..13.5..\n"
"1.23.5.5\n"
"1225....\n"
"..25....\n") == 0);
free(board631833191);
board631833191 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_golden_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );


char* board230967999 = gamma_board(board);
assert( board230967999 != NULL );
assert( strcmp(board230967999, 
"........\n"
".......1\n"
"...4...1\n"
"...3...2\n"
"..222.34\n"
"..22.334\n"
"..234434\n"
"..13.5.5\n"
"1223.5.5\n"
"1225....\n"
"..25....\n") == 0);
free(board230967999);
board230967999 = NULL;
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );


char* board905438164 = gamma_board(board);
assert( board905438164 != NULL );
assert( strcmp(board905438164, 
"........\n"
".......1\n"
"...4...1\n"
"...3...2\n"
"..222.34\n"
"..22.334\n"
"..234434\n"
"..13.5.5\n"
"1223.5.5\n"
"1225....\n"
"..25....\n") == 0);
free(board905438164);
board905438164 = NULL;


gamma_delete(board);

    return 0;
}
