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
uuid: 337198137
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 5, 7, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );


char* board222413481 = gamma_board(board);
assert( board222413481 != NULL );
assert( strcmp(board222413481, 
"2..3......5..\n"
"...2.........\n"
"1..3.....6...\n"
"......4......\n"
"...6.........\n") == 0);
free(board222413481);
board222413481 = NULL;
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );


char* board916546791 = gamma_board(board);
assert( board916546791 != NULL );
assert( strcmp(board916546791, 
"2..3......5..\n"
"..72...1.....\n"
"1..3.....6...\n"
"......4......\n"
"...6.........\n") == 0);
free(board916546791);
board916546791 = NULL;
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );


char* board952065934 = gamma_board(board);
assert( board952065934 != NULL );
assert( strcmp(board952065934, 
"2..3......5..\n"
"..72...1...4.\n"
"1..3....36...\n"
"....4.4......\n"
"...6.........\n") == 0);
free(board952065934);
board952065934 = NULL;
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_golden_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_golden_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_move(board, 2, 3, 3) == 0 );


char* board595074026 = gamma_board(board);
assert( board595074026 != NULL );
assert( strcmp(board595074026, 
"2.23...3..51.\n"
"7.7272.1...4.\n"
"1.33.1..36..1\n"
"..744.4....76\n"
".1.66726....7\n") == 0);
free(board595074026);
board595074026 = NULL;
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );


char* board108251657 = gamma_board(board);
assert( board108251657 != NULL );
assert( strcmp(board108251657, 
"2.23...3..51.\n"
"7.7272.1...4.\n"
"1.33.1..36..1\n"
"..744.4....76\n"
".1.66726....7\n") == 0);
free(board108251657);
board108251657 = NULL;
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board259272607 = gamma_board(board);
assert( board259272607 != NULL );
assert( strcmp(board259272607, 
"2.23...3..51.\n"
"7.7272.14..4.\n"
"1.33.1..36..1\n"
"..744.4...276\n"
".1.66726....7\n") == 0);
free(board259272607);
board259272607 = NULL;
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );


char* board904743097 = gamma_board(board);
assert( board904743097 != NULL );
assert( strcmp(board904743097, 
"2.237..3..51.\n"
"7.7272.14..42\n"
"1.3321..36..1\n"
"..744.4..2276\n"
".1.66726..557\n") == 0);
free(board904743097);
board904743097 = NULL;
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_golden_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_free_fields(board, 5) == 23 );


char* board524608901 = gamma_board(board);
assert( board524608901 != NULL );
assert( strcmp(board524608901, 
"2.237.73..51.\n"
"7.7272.14..42\n"
"1.3321..36..1\n"
"..744.4..2276\n"
".1.66726..557\n") == 0);
free(board524608901);
board524608901 = NULL;
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_golden_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_free_fields(board, 2) == 12 );


char* board532901854 = gamma_board(board);
assert( board532901854 != NULL );
assert( strcmp(board532901854, 
"2.237273..513\n"
"7.7272.14.642\n"
"163361..36711\n"
"3174474..2276\n"
"41766726..557\n") == 0);
free(board532901854);
board532901854 = NULL;
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_golden_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );


gamma_delete(board);

    return 0;
}
