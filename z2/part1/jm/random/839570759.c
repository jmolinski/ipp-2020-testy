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
uuid: 839570759
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );


char* board365769296 = gamma_board(board);
assert( board365769296 != NULL );
assert( strcmp(board365769296, 
".......3..\n"
"..16..1...\n"
"..22....3.\n"
".2.......5\n"
"..........\n"
"2..13..3..\n"
"..........\n"
".4.....5..\n") == 0);
free(board365769296);
board365769296 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );


char* board789367420 = gamma_board(board);
assert( board789367420 != NULL );
assert( strcmp(board789367420, 
".......3..\n"
".416..1...\n"
"..22...13.\n"
".2.6.4...5\n"
"..........\n"
"2..13..3..\n"
"..........\n"
".4.....5..\n") == 0);
free(board789367420);
board789367420 = NULL;
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );


char* board541449787 = gamma_board(board);
assert( board541449787 != NULL );
assert( strcmp(board541449787, 
".......3..\n"
".416111...\n"
"..22...13.\n"
".2.6.4...5\n"
"....3.....\n"
"2..13..3..\n"
"..........\n"
"64....25..\n") == 0);
free(board541449787);
board541449787 = NULL;
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );


char* board831438268 = gamma_board(board);
assert( board831438268 != NULL );
assert( strcmp(board831438268, 
"....5..3..\n"
".416111...\n"
"..22.1.13.\n"
"42.6.4...5\n"
"....3.....\n"
"2..13..3..\n"
"64.5......\n"
"64...625..\n") == 0);
free(board831438268);
board831438268 = NULL;
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );


char* board534110859 = gamma_board(board);
assert( board534110859 != NULL );
assert( strcmp(board534110859, 
"....5..3..\n"
".4161113..\n"
"..22.1.13.\n"
"42.6.4...5\n"
"....3.....\n"
"2..13..3..\n"
"64.5......\n"
"64...625..\n") == 0);
free(board534110859);
board534110859 = NULL;
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );


char* board846731018 = gamma_board(board);
assert( board846731018 != NULL );
assert( strcmp(board846731018, 
"....5..3..\n"
".4161113..\n"
"..22.1.13.\n"
"42.6.4...5\n"
"....3.....\n"
"2..13..3..\n"
"64.5......\n"
"64...625..\n") == 0);
free(board846731018);
board846731018 = NULL;
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );


char* board205792624 = gamma_board(board);
assert( board205792624 != NULL );
assert( strcmp(board205792624, 
"....5..3..\n"
".4161113..\n"
"..2221.13.\n"
"42.624...5\n"
"....3.....\n"
"2.113..3..\n"
"6445......\n"
"64...625..\n") == 0);
free(board205792624);
board205792624 = NULL;
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 8 );


char* board880210840 = gamma_board(board);
assert( board880210840 != NULL );
assert( strcmp(board880210840, 
"....5..3..\n"
".4161113..\n"
"..2221.13.\n"
"42.624...5\n"
"....3.....\n"
"2.113..33.\n"
"6445......\n"
"64...625..\n") == 0);
free(board880210840);
board880210840 = NULL;
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );


char* board457758187 = gamma_board(board);
assert( board457758187 != NULL );
assert( strcmp(board457758187, 
"....5..3..\n"
".4161113..\n"
"..2221.13.\n"
"42.624...5\n"
"....3.....\n"
"2.113..33.\n"
"6445......\n"
"64...625..\n") == 0);
free(board457758187);
board457758187 = NULL;
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 5, 1) == 1 );


char* board987520705 = gamma_board(board);
assert( board987520705 != NULL );
assert( strcmp(board987520705, 
"....5..3..\n"
".4161113..\n"
"..2221.13.\n"
"42.624...5\n"
"....3.....\n"
"21113..33.\n"
"6445.6....\n"
"64...625..\n") == 0);
free(board987520705);
board987520705 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 2) == 0 );


gamma_delete(board);

    return 0;
}
