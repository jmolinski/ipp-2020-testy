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
uuid: 817975100
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 7, 0) == 0 );


char* board246545712 = gamma_board(board);
assert( board246545712 != NULL );
assert( strcmp(board246545712, 
"5....3.25\n"
"..2......\n"
".7..41.26\n"
".6.......\n"
"..4....1.\n"
"1.36.267.\n"
".........\n"
"...35.6..\n"
"......34.\n") == 0);
free(board246545712);
board246545712 = NULL;
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 3, 3) == 0 );


char* board979375997 = gamma_board(board);
assert( board979375997 != NULL );
assert( strcmp(board979375997, 
"5....3.25\n"
"..2....1.\n"
".7..41.26\n"
".6.......\n"
"..4....1.\n"
"1.36.267.\n"
".........\n"
"...35.6..\n"
"......34.\n") == 0);
free(board979375997);
board979375997 = NULL;
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );


char* board406122668 = gamma_board(board);
assert( board406122668 != NULL );
assert( strcmp(board406122668, 
"5...53.25\n"
"..2....1.\n"
".7..41.26\n"
".6.......\n"
"..4....1.\n"
"1536.267.\n"
"....7....\n"
"..135.6..\n"
"......34.\n") == 0);
free(board406122668);
board406122668 = NULL;
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_golden_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );


char* board464374285 = gamma_board(board);
assert( board464374285 != NULL );
assert( strcmp(board464374285, 
"547.53.25\n"
"..2..2.1.\n"
".7..41326\n"
"66..7....\n"
"1.44...1.\n"
"1536.267.\n"
"45..7....\n"
"..13556..\n"
"......344\n") == 0);
free(board464374285);
board464374285 = NULL;
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );


char* board588883196 = gamma_board(board);
assert( board588883196 != NULL );
assert( strcmp(board588883196, 
"547.53.25\n"
"..2..2.1.\n"
".7..41326\n"
"66..71...\n"
"1.44...1.\n"
"1536.267.\n"
"45..7....\n"
"..13556..\n"
"......344\n") == 0);
free(board588883196);
board588883196 = NULL;
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );


char* board651131709 = gamma_board(board);
assert( board651131709 != NULL );
assert( strcmp(board651131709, 
"547.53.25\n"
"..2..2.1.\n"
".7..41326\n"
"66..71...\n"
"1.44...1.\n"
"1536.267.\n"
"453.7....\n"
"4.13556..\n"
".....5344\n") == 0);
free(board651131709);
board651131709 = NULL;
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );


char* board267216242 = gamma_board(board);
assert( board267216242 != NULL );
assert( strcmp(board267216242, 
"547.53.25\n"
"..2..2.1.\n"
".7..41326\n"
"66..71...\n"
"1.44...1.\n"
"1536.267.\n"
"453.7.6.6\n"
"4.13556..\n"
".....5344\n") == 0);
free(board267216242);
board267216242 = NULL;
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );


char* board927913288 = gamma_board(board);
assert( board927913288 != NULL );
assert( strcmp(board927913288, 
"547.53.25\n"
"..2..2.1.\n"
".7..41326\n"
"66..71...\n"
"1.44...1.\n"
"1536.267.\n"
"453.7.6.6\n"
"4.13556..\n"
".....5344\n") == 0);
free(board927913288);
board927913288 = NULL;
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );


char* board348548022 = gamma_board(board);
assert( board348548022 != NULL );
assert( strcmp(board348548022, 
"547.53.25\n"
"..2.22.1.\n"
".7..41326\n"
"66..71...\n"
"1.44...1.\n"
"1536.267.\n"
"453.7.6.6\n"
"4.13556..\n"
".....5344\n") == 0);
free(board348548022);
board348548022 = NULL;
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_golden_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );


char* board569070491 = gamma_board(board);
assert( board569070491 != NULL );
assert( strcmp(board569070491, 
"547.53.25\n"
"..2.22.1.\n"
".7..41326\n"
"666471.1.\n"
"1.44...1.\n"
"1536.2677\n"
"453.7.6.6\n"
"4.13556..\n"
".....5344\n") == 0);
free(board569070491);
board569070491 = NULL;
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );


gamma_delete(board);

    return 0;
}
