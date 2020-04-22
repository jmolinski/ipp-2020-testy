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
uuid: 604459910
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 9, 4) == 0 );


char* board788349022 = gamma_board(board);
assert( board788349022 != NULL );
assert( strcmp(board788349022, 
"5....8.\n"
"...3...\n"
"......3\n"
".....94\n"
"2.6.5..\n"
"4..9...\n"
"...9...\n"
"3..14.7\n"
"452125.\n"
"3......\n") == 0);
free(board788349022);
board788349022 = NULL;
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_golden_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_golden_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 9, 5, 5) == 1 );


char* board398126059 = gamma_board(board);
assert( board398126059 != NULL );
assert( strcmp(board398126059, 
"5....8.\n"
"...3...\n"
"......3\n"
".....94\n"
"2.6.59.\n"
"4.19...\n"
"5.79...\n"
"3.714.7\n"
"452125.\n"
"3..4...\n") == 0);
free(board398126059);
board398126059 = NULL;
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_free_fields(board, 8) == 35 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );


char* board298432833 = gamma_board(board);
assert( board298432833 != NULL );
assert( strcmp(board298432833, 
"5.5.28.\n"
"...3...\n"
"......3\n"
"7....94\n"
"2.61594\n"
"4.19.7.\n"
"5.794.8\n"
"31714.7\n"
"4521251\n"
"36.46..\n") == 0);
free(board298432833);
board298432833 = NULL;
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_golden_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );


char* board468874023 = gamma_board(board);
assert( board468874023 != NULL );
assert( strcmp(board468874023, 
"565.28.\n"
"...3..4\n"
".....63\n"
"7....94\n"
"2.61594\n"
"4119972\n"
"5.794.8\n"
"36714.7\n"
"4521251\n"
"36746..\n") == 0);
free(board468874023);
board468874023 = NULL;
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board673618949 = gamma_board(board);
assert( board673618949 != NULL );
assert( strcmp(board673618949, 
"565.28.\n"
"...3..4\n"
".....63\n"
"73...94\n"
"2.61594\n"
"4119972\n"
"5.794.8\n"
"36714.7\n"
"4521251\n"
"36746..\n") == 0);
free(board673618949);
board673618949 = NULL;
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_free_fields(board, 8) == 17 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_golden_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );


gamma_delete(board);

    return 0;
}
