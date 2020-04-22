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
uuid: 942280666
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 4, 6, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_golden_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board613298940 = gamma_board(board);
assert( board613298940 != NULL );
assert( strcmp(board613298940, 
"..1...6....3.\n"
"2.6..11..3.5.\n"
"...1..1...25.\n"
".52664....2.2\n") == 0);
free(board613298940);
board613298940 = NULL;
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );


char* board245533707 = gamma_board(board);
assert( board245533707 != NULL );
assert( strcmp(board245533707, 
"4.16.56.44.3.\n"
"266..11.33.51\n"
"...1..1..525.\n"
".52664....2.2\n") == 0);
free(board245533707);
board245533707 = NULL;
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board390044424 = gamma_board(board);
assert( board390044424 != NULL );
assert( strcmp(board390044424, 
"4316.56.44.33\n"
"266..11.33.51\n"
"...1..1..525.\n"
".52664....2.2\n") == 0);
free(board390044424);
board390044424 = NULL;
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board536196854 = gamma_board(board);
assert( board536196854 != NULL );
assert( strcmp(board536196854, 
"4316.56.44.33\n"
"266..11.33.51\n"
"..51..1..525.\n"
".52664....2.2\n") == 0);
free(board536196854);
board536196854 = NULL;
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_golden_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_golden_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );


gamma_delete(board);

    return 0;
}
