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
uuid: 953887955
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 7, 6, 3);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );


char* board739929719 = gamma_board(board);
assert( board739929719 != NULL );
assert( strcmp(board739929719, 
"........\n"
"........\n"
".....3..\n"
"........\n"
"....3...\n"
"........\n"
"........\n") == 0);
free(board739929719);
board739929719 = NULL;
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );


char* board583487927 = gamma_board(board);
assert( board583487927 != NULL );
assert( strcmp(board583487927, 
".....4..\n"
"........\n"
".....3..\n"
"...6....\n"
"...13...\n"
"......1.\n"
"......3.\n") == 0);
free(board583487927);
board583487927 = NULL;
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_free_fields(board, 5) == 5 );


char* board105727727 = gamma_board(board);
assert( board105727727 != NULL );
assert( strcmp(board105727727, 
"....24..\n"
"..5144..\n"
"2411.36.\n"
".1163...\n"
".1.1351.\n"
".1...615\n"
"4222..3.\n") == 0);
free(board105727727);
board105727727 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_move(board, 3, 5, 3) == 0 );


char* board909967611 = gamma_board(board);
assert( board909967611 != NULL );
assert( strcmp(board909967611, 
"....24..\n"
"255144..\n"
"2411136.\n"
".1163...\n"
".1.1351.\n"
".1...615\n"
"4222..3.\n") == 0);
free(board909967611);
board909967611 = NULL;
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );


char* board259165010 = gamma_board(board);
assert( board259165010 != NULL );
assert( strcmp(board259165010, 
"2...24..\n"
"255144..\n"
"2411136.\n"
".1163...\n"
".1.1351.\n"
".1...615\n"
"4222..3.\n") == 0);
free(board259165010);
board259165010 = NULL;
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );


char* board615856337 = gamma_board(board);
assert( board615856337 != NULL );
assert( strcmp(board615856337, 
"2...24..\n"
"255144..\n"
"2411136.\n"
".1163...\n"
".1.1351.\n"
".1..6615\n"
"4222..3.\n") == 0);
free(board615856337);
board615856337 = NULL;
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_golden_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_free_fields(board, 3) == 3 );


char* board533083856 = gamma_board(board);
assert( board533083856 != NULL );
assert( strcmp(board533083856, 
"2...24..\n"
"255144..\n"
"2411136.\n"
".1163...\n"
".1.1351.\n"
".12.6115\n"
"4222.33.\n") == 0);
free(board533083856);
board533083856 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );


char* board404820888 = gamma_board(board);
assert( board404820888 != NULL );
assert( strcmp(board404820888, 
"2..124..\n"
"255144..\n"
"2411136.\n"
".1163...\n"
".1.1351.\n"
".12.6115\n"
"4222.33.\n") == 0);
free(board404820888);
board404820888 = NULL;


gamma_delete(board);

    return 0;
}
