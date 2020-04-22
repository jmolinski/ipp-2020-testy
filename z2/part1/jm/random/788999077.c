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
uuid: 788999077
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 8, 7, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );


char* board656250990 = gamma_board(board);
assert( board656250990 != NULL );
assert( strcmp(board656250990, 
"...........\n"
"...........\n"
"...3.......\n"
"...........\n"
"..........3\n"
".......1...\n"
"...........\n"
"...1.......\n") == 0);
free(board656250990);
board656250990 = NULL;
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_free_fields(board, 4) == 78 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );


char* board630037604 = gamma_board(board);
assert( board630037604 != NULL );
assert( strcmp(board630037604, 
"...........\n"
".4.....2...\n"
"...3...4.5.\n"
".........7.\n"
"....5.....3\n"
"......61...\n"
"....6......\n"
"...1.......\n") == 0);
free(board630037604);
board630037604 = NULL;
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board229124779 = gamma_board(board);
assert( board229124779 != NULL );
assert( strcmp(board229124779, 
"....2...4..\n"
".4.....2...\n"
"...3...4.5.\n"
".........7.\n"
"....5.....3\n"
"2.....61...\n"
"....61.....\n"
"3..16......\n") == 0);
free(board229124779);
board229124779 = NULL;
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );


char* board250771260 = gamma_board(board);
assert( board250771260 != NULL );
assert( strcmp(board250771260, 
".4..2...4..\n"
".4.....2...\n"
"...3..74.5.\n"
".........7.\n"
"....5.....3\n"
"2...7.61...\n"
"3.5.61.....\n"
"3..16...6..\n") == 0);
free(board250771260);
board250771260 = NULL;
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_free_fields(board, 7) == 10 );


char* board742646870 = gamma_board(board);
assert( board742646870 != NULL );
assert( strcmp(board742646870, 
".4..2...4..\n"
".4.....2...\n"
"...3..74.5.\n"
"......7..7.\n"
"....5.....3\n"
"2...7.61...\n"
"3.5.61.....\n"
"3..16...6..\n") == 0);
free(board742646870);
board742646870 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );


char* board581409261 = gamma_board(board);
assert( board581409261 != NULL );
assert( strcmp(board581409261, 
".4..2...4..\n"
".4.....2...\n"
"...3..74.5.\n"
"......7..7.\n"
"....5.....3\n"
"2...7.61...\n"
"3.5.61.....\n"
"3..16...6..\n") == 0);
free(board581409261);
board581409261 = NULL;
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board144260272 = gamma_board(board);
assert( board144260272 != NULL );
assert( strcmp(board144260272, 
".4..2...4..\n"
".4.....2...\n"
"...3.774.5.\n"
"......7..7.\n"
"....5....73\n"
"2...7.61...\n"
"3.5.61.....\n"
"3..16...6..\n") == 0);
free(board144260272);
board144260272 = NULL;
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );


char* board551462731 = gamma_board(board);
assert( board551462731 != NULL );
assert( strcmp(board551462731, 
".4..2...4..\n"
".4....72...\n"
"...3.774.5.\n"
"......7..7.\n"
"....5....73\n"
"2...7661...\n"
"3.5.61.....\n"
"3..16...6..\n") == 0);
free(board551462731);
board551462731 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );


char* board168878651 = gamma_board(board);
assert( board168878651 != NULL );
assert( strcmp(board168878651, 
".4..2...4..\n"
".4....72...\n"
"...3.774.5.\n"
"......7..7.\n"
"....5....73\n"
"2...7661...\n"
"3.5.61.....\n"
"3..16...6..\n") == 0);
free(board168878651);
board168878651 = NULL;
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );


char* board160215579 = gamma_board(board);
assert( board160215579 != NULL );
assert( strcmp(board160215579, 
".4..2...4..\n"
".4....72...\n"
"...3.774.5.\n"
"......7..7.\n"
"....5....73\n"
"22..7661...\n"
"335.61..6..\n"
"3..16...6..\n") == 0);
free(board160215579);
board160215579 = NULL;
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 8 );


char* board774847273 = gamma_board(board);
assert( board774847273 != NULL );
assert( strcmp(board774847273, 
".4..2...4..\n"
".4....72...\n"
"...3.774.5.\n"
"......7..7.\n"
"....5....73\n"
"22..7661...\n"
"335.61..6..\n"
"3..16...6..\n") == 0);
free(board774847273);
board774847273 = NULL;
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );


char* board364626080 = gamma_board(board);
assert( board364626080 != NULL );
assert( strcmp(board364626080, 
".4..2...4..\n"
".4....72...\n"
"...3.774.5.\n"
"......7..7.\n"
"....5..1.73\n"
"22..7661...\n"
"335.61..6..\n"
"3..16...6..\n") == 0);
free(board364626080);
board364626080 = NULL;
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );


gamma_delete(board);

    return 0;
}
