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
uuid: 926783112
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 9, 6, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 113 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_free_fields(board, 4) == 104 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_free_fields(board, 1) == 101 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );


char* board780678102 = gamma_board(board);
assert( board780678102 != NULL );
assert( strcmp(board780678102, 
"...21....6...\n"
"......3......\n"
"....5.....14.\n"
".3...11......\n"
"...22.4..1.55\n"
"........6...1\n"
"...4.....4...\n"
"..232..6.....\n"
".............\n") == 0);
free(board780678102);
board780678102 = NULL;
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );


char* board816549313 = gamma_board(board);
assert( board816549313 != NULL );
assert( strcmp(board816549313, 
"4..21....615.\n"
"......3......\n"
"....5.....14.\n"
"53...11......\n"
"..12564..1.55\n"
"......1.6...1\n"
"25.4..6..4...\n"
"..232..6.....\n"
".............\n") == 0);
free(board816549313);
board816549313 = NULL;
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 3) == 80 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );


char* board412174064 = gamma_board(board);
assert( board412174064 != NULL );
assert( strcmp(board412174064, 
"4..21....615.\n"
"......3......\n"
"5...5.....14.\n"
"53...112.....\n"
"3212564..1.55\n"
"....3.166...1\n"
"25.4..6..4...\n"
"..2323.6.....\n"
"...2......6..\n") == 0);
free(board412174064);
board412174064 = NULL;
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_golden_move(board, 4, 5, 6) == 0 );


char* board617295338 = gamma_board(board);
assert( board617295338 != NULL );
assert( strcmp(board617295338, 
"46.21....6151\n"
".522.434.....\n"
"53..5.346.14.\n"
"535..112..4..\n"
"32125644.1.55\n"
"....3.166...1\n"
"25.4..6..41.6\n"
"..2323.6.....\n"
"...2..3.3563.\n") == 0);
free(board617295338);
board617295338 = NULL;
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );


char* board406006651 = gamma_board(board);
assert( board406006651 != NULL );
assert( strcmp(board406006651, 
"46.21....6151\n"
".522.4345....\n"
"53..5.346.14.\n"
"535..112..4..\n"
"32125644.1.55\n"
"....3.166...1\n"
"25.4..6..41.6\n"
"..2323.6.....\n"
"...2..3.3563.\n") == 0);
free(board406006651);
board406006651 = NULL;
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );


char* board312951538 = gamma_board(board);
assert( board312951538 != NULL );
assert( strcmp(board312951538, 
"46.21...66151\n"
".522.4345.4..\n"
"533.5.346.14.\n"
"535..1121.4..\n"
"32125644.1.55\n"
"....32166..21\n"
"2534..65.41.6\n"
"3.2323.6.5...\n"
"...2..313563.\n") == 0);
free(board312951538);
board312951538 = NULL;
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );


char* board679471211 = gamma_board(board);
assert( board679471211 != NULL );
assert( strcmp(board679471211, 
"46.21...66151\n"
".522.4345.4..\n"
"533.5.346.14.\n"
"535..1121.4..\n"
"32125644.1.55\n"
"...632166..21\n"
"2534..65441.6\n"
"3.2323.6.5.2.\n"
"...2..313563.\n") == 0);
free(board679471211);
board679471211 = NULL;
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_golden_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_golden_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );


char* board184310030 = gamma_board(board);
assert( board184310030 != NULL );
assert( strcmp(board184310030, 
"46.21...66151\n"
".522.434554.4\n"
"533.5.346.14.\n"
"535..1121.4..\n"
"32125644.1.55\n"
"...632166..21\n"
"2534..65441.6\n"
"352323.6.5.2.\n"
"...2..313563.\n") == 0);
free(board184310030);
board184310030 = NULL;
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board273806572 = gamma_board(board);
assert( board273806572 != NULL );
assert( strcmp(board273806572, 
"46.21...66151\n"
"2522.434554.4\n"
"533.5.346314.\n"
"535..112164..\n"
"32125644.1.55\n"
"..4632166..21\n"
"2564..65441.6\n"
"352323.6.542.\n"
"...2..3135633\n") == 0);
free(board273806572);
board273806572 = NULL;
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_free_fields(board, 1) == 9 );


char* board100077047 = gamma_board(board);
assert( board100077047 != NULL );
assert( strcmp(board100077047, 
"46.21...66151\n"
"2522.434554.4\n"
"533.5.346314.\n"
"535..112164..\n"
"32125644.1.55\n"
"..4632166..21\n"
"2564..65441.6\n"
"352323.6.542.\n"
"...2..3135633\n") == 0);
free(board100077047);
board100077047 = NULL;
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_golden_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );


char* board978684276 = gamma_board(board);
assert( board978684276 != NULL );
assert( strcmp(board978684276, 
"46.211.366151\n"
"2522.434554.4\n"
"533.53346314.\n"
"535..112164..\n"
"32125644.1.55\n"
"..46321665.21\n"
"2564..65441.6\n"
"352323.6.542.\n"
"...2..3135633\n") == 0);
free(board978684276);
board978684276 = NULL;
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );


char* board287619397 = gamma_board(board);
assert( board287619397 != NULL );
assert( strcmp(board287619397, 
"46.211.366151\n"
"2522.434554.4\n"
"533.53346314.\n"
"535..112164..\n"
"32125644.1.55\n"
"..46321665.21\n"
"2564..65441.6\n"
"352323.6.542.\n"
"...2..3135633\n") == 0);
free(board287619397);
board287619397 = NULL;
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 5, 3) == 0 );


gamma_delete(board);

    return 0;
}
