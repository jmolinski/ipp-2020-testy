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
uuid: 280558117
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 9, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );


char* board119959939 = gamma_board(board);
assert( board119959939 != NULL );
assert( strcmp(board119959939, 
"......\n"
"4...77\n"
"625.12\n"
"97342.\n"
"443.8.\n"
"6..988\n"
"3.191.\n"
"4.2.32\n"
".71.86\n"
"84.99.\n"
"1.3...\n") == 0);
free(board119959939);
board119959939 = NULL;
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 9, 1, 10) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );


char* board501401384 = gamma_board(board);
assert( board501401384 != NULL );
assert( strcmp(board501401384, 
".9....\n"
"4...77\n"
"625.12\n"
"97342.\n"
"443.8.\n"
"6..988\n"
"3.191.\n"
"4.2.32\n"
".71.86\n"
"84899.\n"
"1.3.3.\n") == 0);
free(board501401384);
board501401384 = NULL;
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_golden_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_free_fields(board, 9) == 17 );


char* board578186382 = gamma_board(board);
assert( board578186382 != NULL );
assert( strcmp(board578186382, 
"699...\n"
"47..77\n"
"625.12\n"
"97342.\n"
"44388.\n"
"64.988\n"
"3.198.\n"
"422932\n"
".71.86\n"
"84899.\n"
"1.3.3.\n") == 0);
free(board578186382);
board578186382 = NULL;
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );


char* board232724401 = gamma_board(board);
assert( board232724401 != NULL );
assert( strcmp(board232724401, 
"699...\n"
"475.77\n"
"625.12\n"
"97342.\n"
"44388.\n"
"64.988\n"
"3.198.\n"
"422932\n"
".71.86\n"
"84899.\n"
"113.3.\n") == 0);
free(board232724401);
board232724401 = NULL;
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_golden_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_free_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board888594249 = gamma_board(board);
assert( board888594249 != NULL );
assert( strcmp(board888594249, 
"699.8.\n"
"475.77\n"
"625.12\n"
"97342.\n"
"44388.\n"
"64.988\n"
"3.198.\n"
"422932\n"
".71786\n"
"64899.\n"
"113.3.\n") == 0);
free(board888594249);
board888594249 = NULL;
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );


gamma_delete(board);

    return 0;
}
