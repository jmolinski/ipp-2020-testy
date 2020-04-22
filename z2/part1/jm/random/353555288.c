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
uuid: 353555288
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 6, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_free_fields(board, 5) == 86 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 79 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_free_fields(board, 6) == 66 );


char* board159690240 = gamma_board(board);
assert( board159690240 != NULL );
assert( strcmp(board159690240, 
".......1...\n"
"...42..3..3\n"
"...21.5....\n"
"4....4.216.\n"
"........4..\n"
"..43.6.3...\n"
".56.13..3.3\n"
".16265.1.2.\n"
".5.......5.\n") == 0);
free(board159690240);
board159690240 = NULL;
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 60 );


char* board297175631 = gamma_board(board);
assert( board297175631 != NULL );
assert( strcmp(board297175631, 
"...2...1...\n"
"...42..3..3\n"
"2..21.5.6..\n"
"4....4.216.\n"
"...5....4..\n"
"..43.6.3...\n"
".56.13..3.3\n"
".162653122.\n"
".5.......5.\n") == 0);
free(board297175631);
board297175631 = NULL;
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_golden_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );


char* board360074573 = gamma_board(board);
assert( board360074573 != NULL );
assert( strcmp(board360074573, 
"...2..31...\n"
"...42.63.63\n"
"2..21.5.6..\n"
"4....4.216.\n"
"...5..2.4..\n"
"6.43.6.3...\n"
".56.13413.3\n"
"6162653122.\n"
"65.....5.5.\n") == 0);
free(board360074573);
board360074573 = NULL;
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_golden_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 4) == 1 );


char* board375832019 = gamma_board(board);
assert( board375832019 != NULL );
assert( strcmp(board375832019, 
"...2..311..\n"
"2..42.63.63\n"
"2..21.526..\n"
"43...45216.\n"
"2..52.2.4..\n"
"6.43.6.3.4.\n"
".56.13413.3\n"
"6162653122.\n"
"65.....555.\n") == 0);
free(board375832019);
board375832019 = NULL;
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );


char* board861671706 = gamma_board(board);
assert( board861671706 != NULL );
assert( strcmp(board861671706, 
"...2..311..\n"
"2..42.63.63\n"
"2..21.526..\n"
"43...45216.\n"
"2..52.2.45.\n"
"6.43.6.3.4.\n"
".56.13413.3\n"
"6662653122.\n"
"65..4..555.\n") == 0);
free(board861671706);
board861671706 = NULL;
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );


char* board925382130 = gamma_board(board);
assert( board925382130 != NULL );
assert( strcmp(board925382130, 
"...2..311..\n"
"2..42.63.63\n"
"25.21.526..\n"
"43...45216.\n"
"2..52.2.45.\n"
"6.43.6.3.4.\n"
".56.13413.3\n"
"6662653122.\n"
"65..4..555.\n") == 0);
free(board925382130);
board925382130 = NULL;
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );


char* board264055578 = gamma_board(board);
assert( board264055578 != NULL );
assert( strcmp(board264055578, 
"...2..311..\n"
"2..42.63.63\n"
"25.21.526..\n"
"43...45216.\n"
"2..52.2.45.\n"
"6.43.6.3.4.\n"
".56.13413.3\n"
"6662653122.\n"
"65..4..555.\n") == 0);
free(board264055578);
board264055578 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );


char* board388430781 = gamma_board(board);
assert( board388430781 != NULL );
assert( strcmp(board388430781, 
"...2..311..\n"
"2..42.63.63\n"
"25.21.526..\n"
"43...45216.\n"
"2..52.2.45.\n"
"6.43.6.3.4.\n"
".56.13413.3\n"
"6662653122.\n"
"65..4..555.\n") == 0);
free(board388430781);
board388430781 = NULL;
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );


char* board803253571 = gamma_board(board);
assert( board803253571 != NULL );
assert( strcmp(board803253571, 
"...2..311..\n"
"2..42.63.63\n"
"25.21.526..\n"
"43...45216.\n"
"2..52.2.45.\n"
"6.43.643.41\n"
".56.13413.3\n"
"66626531223\n"
"65..4..555.\n") == 0);
free(board803253571);
board803253571 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );


char* board368393914 = gamma_board(board);
assert( board368393914 != NULL );
assert( strcmp(board368393914, 
".1.2..311..\n"
"2..42463663\n"
"25.21.526.2\n"
"43..245216.\n"
"22.52.2345.\n"
"6.43.643.41\n"
".56.13413.3\n"
"66626531223\n"
"656.4.1555.\n") == 0);
free(board368393914);
board368393914 = NULL;
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );


char* board514528214 = gamma_board(board);
assert( board514528214 != NULL );
assert( strcmp(board514528214, 
".1.2..311..\n"
"2..42463663\n"
"25.21.526.2\n"
"43..245216.\n"
"22.52.2345.\n"
"6.43.643.41\n"
".56.13413.3\n"
"66626531223\n"
"656.4.1555.\n") == 0);
free(board514528214);
board514528214 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );


char* board962275813 = gamma_board(board);
assert( board962275813 != NULL );
assert( strcmp(board962275813, 
".1.2..311..\n"
"2..42463663\n"
"25.21.526.2\n"
"43..245216.\n"
"22.52.2345.\n"
"6.43.643.41\n"
".56.13413.3\n"
"66626531223\n"
"656.4.1555.\n") == 0);
free(board962275813);
board962275813 = NULL;
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );


char* board553729855 = gamma_board(board);
assert( board553729855 != NULL );
assert( strcmp(board553729855, 
".1.2.1311.3\n"
"2..42463663\n"
"25.21.526.2\n"
"43..245216.\n"
"22.5232345.\n"
"6.43.643.41\n"
".56413413.3\n"
"66626531223\n"
"656.4.1555.\n") == 0);
free(board553729855);
board553729855 = NULL;
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board764205369 = gamma_board(board);
assert( board764205369 != NULL );
assert( strcmp(board764205369, 
".1.2.1311.3\n"
"2..42463663\n"
"25.212526.2\n"
"43..245216.\n"
"22.5232345.\n"
"6.43.643.41\n"
".56413413.3\n"
"66626531223\n"
"656.441555.\n") == 0);
free(board764205369);
board764205369 = NULL;
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_golden_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 9, 3) == 0 );


gamma_delete(board);

    return 0;
}
