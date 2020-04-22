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
uuid: 599184580
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 4, 5, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );


char* board668832304 = gamma_board(board);
assert( board668832304 != NULL );
assert( strcmp(board668832304, 
"...............\n"
"...............\n"
"...............\n"
"...1..........2\n") == 0);
free(board668832304);
board668832304 = NULL;
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_free_fields(board, 3) == 40 );


char* board125470596 = gamma_board(board);
assert( board125470596 != NULL );
assert( strcmp(board125470596, 
".322......2.32.\n"
"4..43......1..1\n"
".4.........3...\n"
".451..53...2..2\n") == 0);
free(board125470596);
board125470596 = NULL;
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );


char* board798743141 = gamma_board(board);
assert( board798743141 != NULL );
assert( strcmp(board798743141, 
".322..5..12132.\n"
"43.43......1..1\n"
"14.........3...\n"
"1451..53...2..2\n") == 0);
free(board798743141);
board798743141 = NULL;
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 2, 12) == 0 );


char* board511505685 = gamma_board(board);
assert( board511505685 != NULL );
assert( strcmp(board511505685, 
".3222251112132.\n"
"43443......1..1\n"
"145...5..4131..\n"
"1451..53...2.42\n") == 0);
free(board511505685);
board511505685 = NULL;
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board967059940 = gamma_board(board);
assert( board967059940 != NULL );
assert( strcmp(board967059940, 
".32222511121323\n"
"43443.21...1.31\n"
"145...5..4131..\n"
"1451..53.1.2.42\n") == 0);
free(board967059940);
board967059940 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 9) == 0 );


char* board621999787 = gamma_board(board);
assert( board621999787 != NULL );
assert( strcmp(board621999787, 
".32222511121323\n"
"43443.21...1.31\n"
"1451..5..4131..\n"
"1451..53.1.2.42\n") == 0);
free(board621999787);
board621999787 = NULL;
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_golden_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board209927937 = gamma_board(board);
assert( board209927937 != NULL );
assert( strcmp(board209927937, 
"532222511121323\n"
"43443.2131.1231\n"
"1451.55.34131..\n"
"1451..53.1.2.42\n") == 0);
free(board209927937);
board209927937 = NULL;


gamma_delete(board);

    return 0;
}
