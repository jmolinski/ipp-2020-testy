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
uuid: 457976483
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_free_fields(board, 8) == 55 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_golden_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );


char* board981238453 = gamma_board(board);
assert( board981238453 != NULL );
assert( strcmp(board981238453, 
"3.24...3\n"
"..168..6\n"
"7.83....\n"
"...5...7\n"
"1..6....\n"
"3..5..8.\n"
".457....\n"
"...8462.\n") == 0);
free(board981238453);
board981238453 = NULL;
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );


char* board733240382 = gamma_board(board);
assert( board733240382 != NULL );
assert( strcmp(board733240382, 
"3.248..3\n"
"..168..6\n"
"7.83.42.\n"
"...51..7\n"
"1..6....\n"
"3..5..8.\n"
".4577.5.\n"
"44.8462.\n") == 0);
free(board733240382);
board733240382 = NULL;
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_golden_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_free_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board577193417 = gamma_board(board);
assert( board577193417 != NULL );
assert( strcmp(board577193417, 
"3.2482.3\n"
"..168.26\n"
"7.83742.\n"
"...51..7\n"
"1..6....\n"
"3..5..8.\n"
".4577.51\n"
"44.8462.\n") == 0);
free(board577193417);
board577193417 = NULL;
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );


char* board729957485 = gamma_board(board);
assert( board729957485 != NULL );
assert( strcmp(board729957485, 
"3.2482.3\n"
"..168.26\n"
"7.83742.\n"
"7..51..7\n"
"1..6....\n"
"3..5..8.\n"
".4577.51\n"
"4458462.\n") == 0);
free(board729957485);
board729957485 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );


char* board815729548 = gamma_board(board);
assert( board815729548 != NULL );
assert( strcmp(board815729548, 
"3.2482.3\n"
"..168.26\n"
"7.83742.\n"
"7..51..7\n"
"1..6....\n"
"3..5..8.\n"
".4577.51\n"
"4458462.\n") == 0);
free(board815729548);
board815729548 = NULL;
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_free_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );


char* board435564818 = gamma_board(board);
assert( board435564818 != NULL );
assert( strcmp(board435564818, 
"3.2482.3\n"
"..168.26\n"
"7.83742.\n"
"7..51..7\n"
"1..6....\n"
"3..5..8.\n"
".4577.51\n"
"4458462.\n") == 0);
free(board435564818);
board435564818 = NULL;
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board998790732 = gamma_board(board);
assert( board998790732 != NULL );
assert( strcmp(board998790732, 
"3.2482.3\n"
"..168.26\n"
"7.837427\n"
"7..51..7\n"
"1..6....\n"
"3..5..8.\n"
".4577.51\n"
"4458462.\n") == 0);
free(board998790732);
board998790732 = NULL;
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_free_fields(board, 6) == 3 );
assert( gamma_move(board, 8, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
