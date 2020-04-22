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
uuid: 987172699
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board470985413 = gamma_board(board);
assert( board470985413 != NULL );
assert( strcmp(board470985413, 
"........\n"
"......2.\n"
"........\n"
"........\n"
"4...1...\n"
"........\n"
"........\n"
"........\n"
"......3.\n"
"...2.1..\n"
"4......5\n") == 0);
free(board470985413);
board470985413 = NULL;
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );


char* board289915427 = gamma_board(board);
assert( board289915427 != NULL );
assert( strcmp(board289915427, 
"....3.4.\n"
"......2.\n"
"........\n"
"..5.....\n"
"4..51...\n"
"........\n"
"........\n"
".....326\n"
".44...3.\n"
"...2.1..\n"
"4......5\n") == 0);
free(board289915427);
board289915427 = NULL;
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );


char* board146388252 = gamma_board(board);
assert( board146388252 != NULL );
assert( strcmp(board146388252, 
"41..3.42\n"
"...3.52.\n"
"..26....\n"
"..5.....\n"
"45.51.4.\n"
"5.......\n"
".4.....2\n"
"1..3.326\n"
"4442..3.\n"
"...2.1..\n"
"4...5.35\n") == 0);
free(board146388252);
board146388252 = NULL;
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );


char* board579291437 = gamma_board(board);
assert( board579291437 != NULL );
assert( strcmp(board579291437, 
"41.33.42\n"
"...3.52.\n"
"..26....\n"
"..5.....\n"
"45.51.4.\n"
"56......\n"
".4.....2\n"
"1..3.326\n"
"4442..3.\n"
"...2.1..\n"
"4...5.35\n") == 0);
free(board579291437);
board579291437 = NULL;
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 12 );


char* board360760039 = gamma_board(board);
assert( board360760039 != NULL );
assert( strcmp(board360760039, 
"41.33.42\n"
"...3.52.\n"
"..26....\n"
"..5.....\n"
"45.51.4.\n"
"56......\n"
".4.1.2.2\n"
"1..3.326\n"
"4442..3.\n"
"...2.1..\n"
"4...5.35\n") == 0);
free(board360760039);
board360760039 = NULL;
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );


char* board253803777 = gamma_board(board);
assert( board253803777 != NULL );
assert( strcmp(board253803777, 
"41.33.42\n"
"...3.52.\n"
"..26..3.\n"
"..5.....\n"
"45.51.4.\n"
"56....63\n"
".4.162.2\n"
"1..3.326\n"
"4442..3.\n"
"...2.1..\n"
"4.6.5.35\n") == 0);
free(board253803777);
board253803777 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );


char* board447301249 = gamma_board(board);
assert( board447301249 != NULL );
assert( strcmp(board447301249, 
"41.33.42\n"
"...3.52.\n"
"..26..3.\n"
"..5.....\n"
"45.51.4.\n"
"56....63\n"
".4.162.2\n"
"1..3.326\n"
"4442613.\n"
"..12.1..\n"
"4.6.5.35\n") == 0);
free(board447301249);
board447301249 = NULL;
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );


char* board452677738 = gamma_board(board);
assert( board452677738 != NULL );
assert( strcmp(board452677738, 
"41.33.42\n"
"...3.52.\n"
"..266.3.\n"
"..5....1\n"
"45.51.4.\n"
"56....63\n"
".4.162.2\n"
"1..3.326\n"
"4442613.\n"
"..12.1.5\n"
"4.6.5.35\n") == 0);
free(board452677738);
board452677738 = NULL;
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_free_fields(board, 1) == 17 );


char* board589902268 = gamma_board(board);
assert( board589902268 != NULL );
assert( strcmp(board589902268, 
"41.33442\n"
".113.52.\n"
"..266.3.\n"
"..5....1\n"
"45.51.4.\n"
"56....63\n"
".4.162.2\n"
"1..3.326\n"
"4442613.\n"
"..12.1.5\n"
"4.6.5.35\n") == 0);
free(board589902268);
board589902268 = NULL;
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );


gamma_delete(board);

    return 0;
}
