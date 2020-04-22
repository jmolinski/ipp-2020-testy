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
uuid: 580295277
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 7, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board987032788 = gamma_board(board);
assert( board987032788 != NULL );
assert( strcmp(board987032788, 
"....3......\n"
"..2........\n"
"3..........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n") == 0);
free(board987032788);
board987032788 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );


char* board959242295 = gamma_board(board);
assert( board959242295 != NULL );
assert( strcmp(board959242295, 
"....3......\n"
"..2.563....\n"
"3..........\n"
"...........\n"
"...5......4\n"
"3226...4...\n"
"12.3.6.....\n") == 0);
free(board959242295);
board959242295 = NULL;
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board714698915 = gamma_board(board);
assert( board714698915 != NULL );
assert( strcmp(board714698915, 
"....3......\n"
"..2.563....\n"
"3..........\n"
"...........\n"
"...5......4\n"
"3226...4...\n"
"12.3.6.....\n") == 0);
free(board714698915);
board714698915 = NULL;
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board226406982 = gamma_board(board);
assert( board226406982 != NULL );
assert( strcmp(board226406982, 
"....353....\n"
"..2.563....\n"
"3....2.....\n"
"....1.2....\n"
"4..5..2...4\n"
"3226.5.4...\n"
"1243.6.....\n") == 0);
free(board226406982);
board226406982 = NULL;
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );


char* board636846369 = gamma_board(board);
assert( board636846369 != NULL );
assert( strcmp(board636846369, 
"....3536...\n"
"122.563....\n"
"3....2....5\n"
"....1.2....\n"
"4..55.2...4\n"
"3226.5.41..\n"
"1243.63..2.\n") == 0);
free(board636846369);
board636846369 = NULL;
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board672880749 = gamma_board(board);
assert( board672880749 != NULL );
assert( strcmp(board672880749, 
"..26353625.\n"
"12255633.55\n"
"31..421...5\n"
"...61.2....\n"
"4.45552.1.4\n"
"3226.55412.\n"
"1243663..2.\n") == 0);
free(board672880749);
board672880749 = NULL;
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_golden_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );


char* board242495758 = gamma_board(board);
assert( board242495758 != NULL );
assert( strcmp(board242495758, 
"..26353625.\n"
"12255633.55\n"
"31..421...5\n"
"...61.2....\n"
"4.45552.154\n"
"3226.55412.\n"
"1243663..2.\n") == 0);
free(board242495758);
board242495758 = NULL;
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_free_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 2, 7) == 0 );


char* board787568058 = gamma_board(board);
assert( board787568058 != NULL );
assert( strcmp(board787568058, 
"..26353625.\n"
"12255633.55\n"
"31..421...5\n"
"...61.2....\n"
"4.45552.154\n"
"3226.55412.\n"
"1243663..2.\n") == 0);
free(board787568058);
board787568058 = NULL;
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 0, 5) == 0 );


char* board571349905 = gamma_board(board);
assert( board571349905 != NULL );
assert( strcmp(board571349905, 
"..26353625.\n"
"12255633.55\n"
"31..421...5\n"
"...61.2....\n"
"4.45552.154\n"
"3226.55412.\n"
"1243663..2.\n") == 0);
free(board571349905);
board571349905 = NULL;
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );


gamma_delete(board);

    return 0;
}
