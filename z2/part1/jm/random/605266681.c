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
uuid: 605266681
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 7, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_golden_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 89 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_free_fields(board, 6) == 84 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_golden_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_golden_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_free_fields(board, 7) == 50 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );


char* board738475134 = gamma_board(board);
assert( board738475134 != NULL );
assert( strcmp(board738475134, 
"3......13.\n"
".6.567...1\n"
"2.1..54626\n"
".13..3.2..\n"
".36...52.3\n"
".331.55134\n"
"4.1.54527.\n"
".6.7.615..\n"
"2..37.3..2\n"
".47.52.276\n"
"..71.4.1..\n") == 0);
free(board738475134);
board738475134 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_golden_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );


char* board552718370 = gamma_board(board);
assert( board552718370 != NULL );
assert( strcmp(board552718370, 
"3......13.\n"
".6.567...1\n"
"2.1.754626\n"
".13..352.3\n"
"7361..52.3\n"
".331.55134\n"
"4.1.54527.\n"
"5627.6157.\n"
"2..37.3.32\n"
".47.52.276\n"
"2.71.4.1.7\n") == 0);
free(board552718370);
board552718370 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );


char* board917880919 = gamma_board(board);
assert( board917880919 != NULL );
assert( strcmp(board917880919, 
"3..5...13.\n"
".6.567...1\n"
"2.1.754626\n"
".13..352.3\n"
"7361..52.3\n"
".331.55134\n"
"4.1654527.\n"
"5627.6157.\n"
"2..37.3.32\n"
".47.52.276\n"
"2.71.4.1.7\n") == 0);
free(board917880919);
board917880919 = NULL;
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );


char* board577853668 = gamma_board(board);
assert( board577853668 != NULL );
assert( strcmp(board577853668, 
"3..5...13.\n"
".6.567...1\n"
"2.1.754626\n"
".13..352.3\n"
"7361..52.3\n"
".331.55134\n"
"4.1654527.\n"
"5627.6157.\n"
"2.237.3.32\n"
".47.52.276\n"
"2.71.4.1.7\n") == 0);
free(board577853668);
board577853668 = NULL;
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_golden_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );


char* board292845352 = gamma_board(board);
assert( board292845352 != NULL );
assert( strcmp(board292845352, 
"3..5...13.\n"
".6.567...1\n"
"2.1.754626\n"
".13..352.3\n"
"7361..52.3\n"
".331.55134\n"
"471654527.\n"
"5627.6157.\n"
"2.237.3.32\n"
".47.52.276\n"
"2.71.4.1.7\n") == 0);
free(board292845352);
board292845352 = NULL;
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );


char* board304429865 = gamma_board(board);
assert( board304429865 != NULL );
assert( strcmp(board304429865, 
"3..5...13.\n"
".6.567...1\n"
"2.1.754626\n"
".13..352.3\n"
"73616.52.3\n"
".331.55134\n"
"471654527.\n"
"5627.6157.\n"
"2.237.3.32\n"
".47.52.276\n"
"2.71.4.1.7\n") == 0);
free(board304429865);
board304429865 = NULL;
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 10, 4) == 0 );


char* board298862421 = gamma_board(board);
assert( board298862421 != NULL );
assert( strcmp(board298862421, 
"3..5...13.\n"
".6.567...1\n"
"2.1.754626\n"
".13..352.3\n"
"73616.52.3\n"
".331.55134\n"
"471654527.\n"
"5627.6157.\n"
"2.23763.32\n"
".47.52.276\n"
"2471.4.1.7\n") == 0);
free(board298862421);
board298862421 = NULL;
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 5) == 1 );


char* board714543875 = gamma_board(board);
assert( board714543875 != NULL );
assert( strcmp(board714543875, 
"3..5...13.\n"
".6.567...1\n"
"2.1.754626\n"
".13..352.3\n"
"73616.52.3\n"
"3331.55134\n"
"471654527.\n"
"5627.6157.\n"
"2.23763.32\n"
".47.52.276\n"
"2471.4.1.7\n") == 0);
free(board714543875);
board714543875 = NULL;
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );


char* board595046866 = gamma_board(board);
assert( board595046866 != NULL );
assert( strcmp(board595046866, 
"3..5...134\n"
".6.567...1\n"
"2.1.754626\n"
".13..352.3\n"
"73616.52.3\n"
"3331.55134\n"
"471654527.\n"
"5627.6157.\n"
"2.23763.32\n"
".47.52.276\n"
"2471.4.1.7\n") == 0);
free(board595046866);
board595046866 = NULL;
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );


char* board873535905 = gamma_board(board);
assert( board873535905 != NULL );
assert( strcmp(board873535905, 
"3..5...134\n"
".6.567..31\n"
"2.1.754626\n"
".13..352.3\n"
"73616.52.3\n"
"3331.55134\n"
"471654527.\n"
"5627.6157.\n"
"2.23763.32\n"
".47.52.276\n"
"2471.4.1.7\n") == 0);
free(board873535905);
board873535905 = NULL;
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );


char* board129246845 = gamma_board(board);
assert( board129246845 != NULL );
assert( strcmp(board129246845, 
"3.456..134\n"
".6.567..31\n"
"2.1.754626\n"
".13..352.3\n"
"73616.52.3\n"
"3331.55134\n"
"471654527.\n"
"5627.6157.\n"
"2.23763.32\n"
".47.52.276\n"
"2471.4.1.7\n") == 0);
free(board129246845);
board129246845 = NULL;
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );


char* board603872431 = gamma_board(board);
assert( board603872431 != NULL );
assert( strcmp(board603872431, 
"3.456..134\n"
".6.567..31\n"
"2.1.754626\n"
".13..35253\n"
"73616.52.3\n"
"3331.55134\n"
"471654527.\n"
"562766157.\n"
"2.23763.32\n"
".47.523276\n"
"2471.4.1.7\n") == 0);
free(board603872431);
board603872431 = NULL;
assert( gamma_move(board, 3, 5, 4) == 0 );


gamma_delete(board);

    return 0;
}
