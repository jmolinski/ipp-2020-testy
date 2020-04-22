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
uuid: 110373514
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 6, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board810098213 = gamma_board(board);
assert( board810098213 != NULL );
assert( strcmp(board810098213, 
"............\n"
"273..7.12...\n"
"......4...58\n"
"6..53.22.5..\n"
"...2.....7..\n"
"8..2..4..3..\n") == 0);
free(board810098213);
board810098213 = NULL;
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_golden_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );


char* board957169886 = gamma_board(board);
assert( board957169886 != NULL );
assert( strcmp(board957169886, 
"5...1.48....\n"
"2735.7.12...\n"
"...7.44.2.58\n"
"6..53422.5..\n"
"7432.8.157..\n"
"8.22..4.33..\n") == 0);
free(board957169886);
board957169886 = NULL;
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board713889582 = gamma_board(board);
assert( board713889582 != NULL );
assert( strcmp(board713889582, 
"5...1.48....\n"
"2735.7.12...\n"
"...7.44.2.58\n"
"6..53422.5..\n"
"7432.8.157..\n"
"8.22..4.33..\n") == 0);
free(board713889582);
board713889582 = NULL;
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );


char* board584141126 = gamma_board(board);
assert( board584141126 != NULL );
assert( strcmp(board584141126, 
"5.8.1.48....\n"
"273587.123.7\n"
"...7.44.2.58\n"
"6..5342215..\n"
"7432.8.157..\n"
"8.22..4.33..\n") == 0);
free(board584141126);
board584141126 = NULL;
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );


char* board309183198 = gamma_board(board);
assert( board309183198 != NULL );
assert( strcmp(board309183198, 
"5.8.1.48....\n"
"273587.123.7\n"
"...7.44.2458\n"
"6..5342215..\n"
"7432.8.157..\n"
"8.223.4433..\n") == 0);
free(board309183198);
board309183198 = NULL;
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );


char* board522695762 = gamma_board(board);
assert( board522695762 != NULL );
assert( strcmp(board522695762, 
"5.8.1.48....\n"
"273587.123.7\n"
"...7.44.2458\n"
"6..5342215..\n"
"7432.8.157..\n"
"8.223.4433..\n") == 0);
free(board522695762);
board522695762 = NULL;
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 11, 1) == 1 );


char* board179134325 = gamma_board(board);
assert( board179134325 != NULL );
assert( strcmp(board179134325, 
"5.8.1548....\n"
"273587.123.7\n"
"...7.44.2458\n"
"6.253422152.\n"
"743288.157.5\n"
"8.225.4433..\n") == 0);
free(board179134325);
board179134325 = NULL;
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );


char* board898620233 = gamma_board(board);
assert( board898620233 != NULL );
assert( strcmp(board898620233, 
"5.8.1548....\n"
"273587.12357\n"
"..87.44.2458\n"
"8.253422152.\n"
"743288.157.5\n"
"8.225.4433..\n") == 0);
free(board898620233);
board898620233 = NULL;
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );


char* board772057356 = gamma_board(board);
assert( board772057356 != NULL );
assert( strcmp(board772057356, 
"5.871548....\n"
"273587.12357\n"
"..87.44.2458\n"
"8.253422152.\n"
"743288.15735\n"
"8.225.443342\n") == 0);
free(board772057356);
board772057356 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );


char* board982351081 = gamma_board(board);
assert( board982351081 != NULL );
assert( strcmp(board982351081, 
"5.871548.3..\n"
"273587.12357\n"
".787.4422458\n"
"88253422152.\n"
"743288.15735\n"
"8.225.443342\n") == 0);
free(board982351081);
board982351081 = NULL;
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );


gamma_delete(board);

    return 0;
}
