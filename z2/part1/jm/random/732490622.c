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
uuid: 732490622
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_free_fields(board, 8) == 37 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_free_fields(board, 8) == 30 );


char* board913283698 = gamma_board(board);
assert( board913283698 != NULL );
assert( strcmp(board913283698, 
"62.275...\n"
"6.1...8..\n"
"77.354.66\n"
"2.3747..6\n"
"1.8.336..\n"
"6.6.33...\n"
"..5.2.1..\n") == 0);
free(board913283698);
board913283698 = NULL;
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_free_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_golden_move(board, 6, 0, 2) == 1 );


char* board677205078 = gamma_board(board);
assert( board677205078 != NULL );
assert( strcmp(board677205078, 
"62.275.17\n"
"6.1..18..\n"
"77.354.66\n"
"273747.86\n"
"618.336..\n"
"626.33...\n"
"3.5.2.1..\n") == 0);
free(board677205078);
board677205078 = NULL;
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board872820246 = gamma_board(board);
assert( board872820246 != NULL );
assert( strcmp(board872820246, 
"628275.17\n"
"611..18..\n"
"77.354.66\n"
"273747.86\n"
"6187336..\n"
"626.33...\n"
"3.5.2.1..\n") == 0);
free(board872820246);
board872820246 = NULL;
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_free_fields(board, 7) == 5 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_free_fields(board, 8) == 17 );
assert( gamma_golden_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );


char* board413577942 = gamma_board(board);
assert( board413577942 != NULL );
assert( strcmp(board413577942, 
"628275.17\n"
"6114.18.7\n"
"77.354.66\n"
"273747786\n"
"6187336..\n"
"626.33...\n"
"3.5.2.1..\n") == 0);
free(board413577942);
board413577942 = NULL;
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_golden_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );


gamma_delete(board);

    return 0;
}
