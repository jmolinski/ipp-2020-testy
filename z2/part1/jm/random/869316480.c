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
uuid: 869316480
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 5, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );


char* board439530617 = gamma_board(board);
assert( board439530617 != NULL );
assert( strcmp(board439530617, 
".3....1..\n"
".......3.\n"
"....4....\n"
".......14\n"
".......3.\n"
".2.2.....\n"
"........4\n"
".........\n"
".....4...\n"
"..15.2...\n") == 0);
free(board439530617);
board439530617 = NULL;
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_free_fields(board, 5) == 75 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );


char* board649899130 = gamma_board(board);
assert( board649899130 != NULL );
assert( strcmp(board649899130, 
".3....1..\n"
"....21.3.\n"
"..4.4....\n"
"3.4..1.14\n"
".......3.\n"
".2.2.....\n"
".3.1...54\n"
".2.2.5..2\n"
".5...4..2\n"
"5.15.2.45\n") == 0);
free(board649899130);
board649899130 = NULL;
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_free_fields(board, 1) == 44 );


char* board942313458 = gamma_board(board);
assert( board942313458 != NULL );
assert( strcmp(board942313458, 
".3...11..\n"
"44..21.32\n"
".54.4.1..\n"
"3.4..1.14\n"
".......3.\n"
"32.24.544\n"
".3.1.1.54\n"
".21235..2\n"
".5...4..2\n"
"5.15.2.45\n") == 0);
free(board942313458);
board942313458 = NULL;
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 42 );


char* board298157938 = gamma_board(board);
assert( board298157938 != NULL );
assert( strcmp(board298157938, 
".3...11..\n"
"44..21.32\n"
".54.4.1..\n"
"3.4..1.14\n"
"....3..3.\n"
"32.24.544\n"
".3.1.1.54\n"
".21235..2\n"
".5...4..2\n"
"5.15.2245\n") == 0);
free(board298157938);
board298157938 = NULL;
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );


char* board611665734 = gamma_board(board);
assert( board611665734 != NULL );
assert( strcmp(board611665734, 
".3...11..\n"
"44..21.32\n"
"554.4.1..\n"
"3.4..1.14\n"
"....3..3.\n"
"32.24.544\n"
".3.1.1.54\n"
".21235..2\n"
".5...44.2\n"
"5.15.2245\n") == 0);
free(board611665734);
board611665734 = NULL;
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );


char* board349961087 = gamma_board(board);
assert( board349961087 != NULL );
assert( strcmp(board349961087, 
".3...11..\n"
"44..21332\n"
"55424.1..\n"
"3.4..1.14\n"
"....3..3.\n"
"32.24.544\n"
".3.1.1.54\n"
".21235..2\n"
".5...44.2\n"
"5.15.2245\n") == 0);
free(board349961087);
board349961087 = NULL;
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );


char* board740262394 = gamma_board(board);
assert( board740262394 != NULL );
assert( strcmp(board740262394, 
".32..11.3\n"
"44..21332\n"
"55444.13.\n"
"3.4..1314\n"
"3...3.23.\n"
"32.24.544\n"
".3.1.1154\n"
".21235..2\n"
"55..444.2\n"
"5.15.2245\n") == 0);
free(board740262394);
board740262394 = NULL;
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_free_fields(board, 3) == 29 );


char* board236079698 = gamma_board(board);
assert( board236079698 != NULL );
assert( strcmp(board236079698, 
".32..11.3\n"
"44..21332\n"
"55444.13.\n"
"3.4..1314\n"
"3...3.23.\n"
"32.24.544\n"
".3.1.1154\n"
".21235..2\n"
"55..444.2\n"
"5.15.2245\n") == 0);
free(board236079698);
board236079698 = NULL;
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board759828107 = gamma_board(board);
assert( board759828107 != NULL );
assert( strcmp(board759828107, 
".32..1143\n"
"445.21332\n"
"55444113.\n"
"314..1314\n"
"3.1.3123.\n"
"32.243544\n"
".34131154\n"
".21235..2\n"
"55..444.2\n"
"5.1522245\n") == 0);
free(board759828107);
board759828107 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );


gamma_delete(board);

    return 0;
}
