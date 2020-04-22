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
uuid: 223794625
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 6, 6, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_free_fields(board, 6) == 83 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_free_fields(board, 6) == 80 );


char* board737012277 = gamma_board(board);
assert( board737012277 != NULL );
assert( strcmp(board737012277, 
"..5............\n"
"...1.34........\n"
"6....2........4\n"
"...............\n"
"...6...........\n"
"..3.....2......\n") == 0);
free(board737012277);
board737012277 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_golden_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_golden_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 13, 3) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board270546939 = gamma_board(board);
assert( board270546939 != NULL );
assert( strcmp(board270546939, 
"2251.16636..6..\n"
"36.153446....32\n"
"6..4.23..3.5.64\n"
"5..61.25....4.5\n"
"4466..1.......3\n"
"..3.6.5.24.22..\n") == 0);
free(board270546939);
board270546939 = NULL;
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board563547548 = gamma_board(board);
assert( board563547548 != NULL );
assert( strcmp(board563547548, 
"2251.16636.46..\n"
"36.153446....32\n"
"6.44.23..3.5.64\n"
"56561.25....425\n"
"4466..1.6..5.23\n"
"1.3.6.5.24.22..\n") == 0);
free(board563547548);
board563547548 = NULL;
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );


char* board316219710 = gamma_board(board);
assert( board316219710 != NULL );
assert( strcmp(board316219710, 
"2251.16636.46..\n"
"36.153446....32\n"
"6.44.23..3.5.64\n"
"56561.25....425\n"
"4466..1.6..5.23\n"
"1.3.6.5.24.22..\n") == 0);
free(board316219710);
board316219710 = NULL;
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );


char* board619244498 = gamma_board(board);
assert( board619244498 != NULL );
assert( strcmp(board619244498, 
"2251.16636.46..\n"
"36.1534463...32\n"
"6.44.23..3.5.64\n"
"565615252...425\n"
"4466..1.6.45.23\n"
"1.3.625.24.22.1\n") == 0);
free(board619244498);
board619244498 = NULL;
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );


char* board549512757 = gamma_board(board);
assert( board549512757 != NULL );
assert( strcmp(board549512757, 
"2241.16636.46..\n"
"36.15344631..32\n"
"6.44.23..3.5.64\n"
"565615252...425\n"
"4466..1.6.45.23\n"
"1.3.625.24.22.1\n") == 0);
free(board549512757);
board549512757 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 10) == 0 );


char* board679979867 = gamma_board(board);
assert( board679979867 != NULL );
assert( strcmp(board679979867, 
"2241.16636.46..\n"
"36.15344631..32\n"
"6.44.23..3.5.64\n"
"565615252...425\n"
"4466..1.6.45.23\n"
"1.3.625.24.22.1\n") == 0);
free(board679979867);
board679979867 = NULL;
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 1, 14, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
