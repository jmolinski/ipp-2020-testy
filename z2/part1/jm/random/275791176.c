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
uuid: 275791176
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 9, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_golden_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );


char* board546843807 = gamma_board(board);
assert( board546843807 != NULL );
assert( strcmp(board546843807, 
"..8.76...\n"
"..74....2\n"
"..3....23\n"
"...53.8..\n"
"..4.....1\n"
"...8...8.\n"
"...2...9.\n"
"...67...9\n"
".6....12.\n") == 0);
free(board546843807);
board546843807 = NULL;
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_golden_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_golden_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_free_fields(board, 9) == 45 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 9, 8, 7) == 0 );


char* board550019586 = gamma_board(board);
assert( board550019586 != NULL );
assert( strcmp(board550019586, 
"..8.76..7\n"
"99746..82\n"
"2.368..23\n"
"...5338..\n"
"6.431.1.1\n"
".1.8.7.8.\n"
"2962.5.92\n"
".7.675.99\n"
"76.6..123\n") == 0);
free(board550019586);
board550019586 = NULL;
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );


char* board584554451 = gamma_board(board);
assert( board584554451 != NULL );
assert( strcmp(board584554451, 
"7.8.76.47\n"
"99746..82\n"
"2.368.823\n"
"..15338..\n"
"6.433.1.1\n"
".1.8.7.8.\n"
"2962.5292\n"
".73675899\n"
"76.6..123\n") == 0);
free(board584554451);
board584554451 = NULL;
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_golden_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_free_fields(board, 8) == 10 );


char* board686370298 = gamma_board(board);
assert( board686370298 != NULL );
assert( strcmp(board686370298, 
"7.8176.47\n"
"99746..82\n"
"2.368.823\n"
"8.15338..\n"
"6.433.1.1\n"
".1.8.7.8.\n"
"2962.5292\n"
".73675899\n"
"76.6..123\n") == 0);
free(board686370298);
board686370298 = NULL;
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );


char* board253269080 = gamma_board(board);
assert( board253269080 != NULL );
assert( strcmp(board253269080, 
"7.8176.47\n"
"99746.582\n"
"26368.823\n"
"8.1533853\n"
"6.433.1.1\n"
".1.8.7.8.\n"
"2962.5292\n"
".73675899\n"
"76.6..123\n") == 0);
free(board253269080);
board253269080 = NULL;
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_free_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );


char* board488292393 = gamma_board(board);
assert( board488292393 != NULL );
assert( strcmp(board488292393, 
"758176.47\n"
"99746.582\n"
"263684823\n"
"861533853\n"
"6.433.1.1\n"
".1.837.85\n"
"2962.5292\n"
".73675899\n"
"76.69.123\n") == 0);
free(board488292393);
board488292393 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );


char* board883929430 = gamma_board(board);
assert( board883929430 != NULL );
assert( strcmp(board883929430, 
"758176.47\n"
"99746.582\n"
"263684823\n"
"861533853\n"
"6.433.1.1\n"
".1.837.85\n"
"2962.5292\n"
".73675899\n"
"76.69.123\n") == 0);
free(board883929430);
board883929430 = NULL;
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_golden_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_golden_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );


char* board628930415 = gamma_board(board);
assert( board628930415 != NULL );
assert( strcmp(board628930415, 
"758176.47\n"
"99746.582\n"
"263684823\n"
"861533853\n"
"6.433.1.1\n"
".1.837.85\n"
"2962.5292\n"
".73675899\n"
"76.69.123\n") == 0);
free(board628930415);
board628930415 = NULL;
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );


char* board804587271 = gamma_board(board);
assert( board804587271 != NULL );
assert( strcmp(board804587271, 
"758176.47\n"
"99746.582\n"
"263684823\n"
"861533853\n"
"6.433.1.1\n"
".1.837.85\n"
"2962.5292\n"
".73675899\n"
"76.69.123\n") == 0);
free(board804587271);
board804587271 = NULL;
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
