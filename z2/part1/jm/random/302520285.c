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
uuid: 302520285
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 7, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );


char* board345205839 = gamma_board(board);
assert( board345205839 != NULL );
assert( strcmp(board345205839, 
".5....5....\n"
"3.4....4...\n"
".....6.42..\n"
".........2.\n"
".6541......\n"
"..4..2...1.\n"
"..612......\n") == 0);
free(board345205839);
board345205839 = NULL;
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 1, 2, 6) == 1 );


char* board218150077 = gamma_board(board);
assert( board218150077 != NULL );
assert( strcmp(board218150077, 
".51...5....\n"
"3.4....4...\n"
".6...6.42.5\n"
".......2.2.\n"
".6541......\n"
".642.2...15\n"
"..6124.....\n") == 0);
free(board218150077);
board218150077 = NULL;
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );


char* board813568340 = gamma_board(board);
assert( board813568340 != NULL );
assert( strcmp(board813568340, 
".51...5....\n"
"3.4.4..4...\n"
".6...6.42.5\n"
".......2.2.\n"
".6541.2....\n"
".642.2...15\n"
"3.6124.....\n") == 0);
free(board813568340);
board813568340 = NULL;
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_golden_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_golden_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );


char* board710461936 = gamma_board(board);
assert( board710461936 != NULL );
assert( strcmp(board710461936, 
".51.11515..\n"
"3.4346.4...\n"
"36..4614265\n"
"3...632212.\n"
"4654115.4..\n"
"664232.6115\n"
"3.61245...6\n") == 0);
free(board710461936);
board710461936 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );


char* board615701711 = gamma_board(board);
assert( board615701711 != NULL );
assert( strcmp(board615701711, 
".51.115153.\n"
"3.4346.4...\n"
"36..4614265\n"
"3...632212.\n"
"4654115.4..\n"
"664232.6115\n"
"3.61245...6\n") == 0);
free(board615701711);
board615701711 = NULL;
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_golden_move(board, 3, 2, 8) == 0 );


char* board919443888 = gamma_board(board);
assert( board919443888 != NULL );
assert( strcmp(board919443888, 
".512115153.\n"
"3.4346.4...\n"
"36..4614265\n"
"3.5.6322125\n"
"4654115.4..\n"
"664232.6115\n"
"3.61245...6\n") == 0);
free(board919443888);
board919443888 = NULL;
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 7 );


char* board842576441 = gamma_board(board);
assert( board842576441 != NULL );
assert( strcmp(board842576441, 
".512115153.\n"
"3.4346.4...\n"
"36..4614265\n"
"3.546322125\n"
"4654115.4..\n"
"664232.6115\n"
"3.61245...6\n") == 0);
free(board842576441);
board842576441 = NULL;
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 0, 0) == 0 );


char* board373992512 = gamma_board(board);
assert( board373992512 != NULL );
assert( strcmp(board373992512, 
".512115153.\n"
"3.4346.4...\n"
"36..4614265\n"
"3.546322125\n"
"4654115.4..\n"
"664232.6115\n"
"3.61245...6\n") == 0);
free(board373992512);
board373992512 = NULL;
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );


char* board791898289 = gamma_board(board);
assert( board791898289 != NULL );
assert( strcmp(board791898289, 
".512115153.\n"
"3.4346.4...\n"
"36..4614265\n"
"3.546322125\n"
"465411524..\n"
"664232.6115\n"
"3.61245...6\n") == 0);
free(board791898289);
board791898289 = NULL;
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board109050133 = gamma_board(board);
assert( board109050133 != NULL );
assert( strcmp(board109050133, 
".512115153.\n"
"3.434654...\n"
"364.4614265\n"
"3.546322125\n"
"465411524..\n"
"664232.6115\n"
"3.61245...6\n") == 0);
free(board109050133);
board109050133 = NULL;
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );


gamma_delete(board);

    return 0;
}
