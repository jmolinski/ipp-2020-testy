#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_many_boards
uuid: 398533669
*/
/*
gamma_move + gamma_board, a few boards at the same time
*/
gamma_t* board1 = gamma_new(4, 4, 4, 16);
assert( board1 != NULL );


gamma_t* board2 = gamma_new(4, 4, 4, 16);
assert( board2 != NULL );


gamma_t* board3 = gamma_new(4, 4, 4, 16);
assert( board3 != NULL );


assert( gamma_move(board1, 1, 1, 0) == 1 );


char* board791140278 = gamma_board(board1);
assert( board791140278 != NULL );
assert( strcmp(board791140278, 
"....\n"
"....\n"
"....\n"
".1..\n") == 0);
free(board791140278);
board791140278 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 1 );


char* board641493945 = gamma_board(board2);
assert( board641493945 != NULL );
assert( strcmp(board641493945, 
"...1\n"
"....\n"
"....\n"
"....\n") == 0);
free(board641493945);
board641493945 = NULL;
assert( gamma_move(board3, 1, 3, 1) == 1 );


char* board267307360 = gamma_board(board3);
assert( board267307360 != NULL );
assert( strcmp(board267307360, 
"....\n"
"....\n"
"...1\n"
"....\n") == 0);
free(board267307360);
board267307360 = NULL;
assert( gamma_move(board1, 2, 2, 2) == 1 );
assert( gamma_move(board2, 2, 0, 0) == 1 );
assert( gamma_move(board3, 2, 2, 3) == 1 );
assert( gamma_move(board1, 3, 1, 1) == 1 );
assert( gamma_move(board2, 3, 1, 2) == 1 );
assert( gamma_move(board3, 3, 3, 2) == 1 );
assert( gamma_move(board1, 4, 3, 2) == 1 );
assert( gamma_move(board2, 4, 3, 0) == 1 );
assert( gamma_move(board3, 4, 0, 1) == 1 );
assert( gamma_move(board1, 1, 0, 0) == 1 );


char* board660967748 = gamma_board(board1);
assert( board660967748 != NULL );
assert( strcmp(board660967748, 
"....\n"
"..24\n"
".3..\n"
"11..\n") == 0);
free(board660967748);
board660967748 = NULL;
assert( gamma_move(board2, 1, 3, 2) == 1 );


char* board929156518 = gamma_board(board2);
assert( board929156518 != NULL );
assert( strcmp(board929156518, 
"...1\n"
".3.1\n"
"....\n"
"2..4\n") == 0);
free(board929156518);
board929156518 = NULL;
assert( gamma_move(board3, 1, 2, 2) == 1 );


char* board363232992 = gamma_board(board3);
assert( board363232992 != NULL );
assert( strcmp(board363232992, 
"..2.\n"
"..13\n"
"4..1\n"
"....\n") == 0);
free(board363232992);
board363232992 = NULL;
assert( gamma_move(board1, 2, 3, 0) == 1 );
assert( gamma_move(board2, 2, 2, 0) == 1 );
assert( gamma_move(board3, 2, 0, 0) == 1 );
assert( gamma_move(board1, 3, 2, 1) == 1 );
assert( gamma_move(board2, 3, 2, 2) == 1 );
assert( gamma_move(board3, 3, 2, 1) == 1 );
assert( gamma_move(board1, 4, 2, 0) == 1 );
assert( gamma_move(board2, 4, 0, 3) == 1 );
assert( gamma_move(board3, 4, 1, 1) == 1 );
assert( gamma_move(board1, 1, 1, 0) == 0 );


char* board229315909 = gamma_board(board1);
assert( board229315909 != NULL );
assert( strcmp(board229315909, 
"....\n"
"..24\n"
".33.\n"
"1142\n") == 0);
free(board229315909);
board229315909 = NULL;
assert( gamma_move(board2, 1, 3, 1) == 1 );


char* board326199949 = gamma_board(board2);
assert( board326199949 != NULL );
assert( strcmp(board326199949, 
"4..1\n"
".331\n"
"...1\n"
"2.24\n") == 0);
free(board326199949);
board326199949 = NULL;
assert( gamma_move(board3, 1, 0, 1) == 0 );


char* board722756531 = gamma_board(board3);
assert( board722756531 != NULL );
assert( strcmp(board722756531, 
"..2.\n"
"..13\n"
"4431\n"
"2...\n") == 0);
free(board722756531);
board722756531 = NULL;
assert( gamma_move(board1, 2, 3, 2) == 0 );
assert( gamma_move(board2, 2, 3, 2) == 0 );
assert( gamma_move(board3, 2, 3, 3) == 1 );
assert( gamma_move(board1, 3, 1, 2) == 1 );
assert( gamma_move(board2, 3, 1, 0) == 1 );
assert( gamma_move(board3, 3, 2, 2) == 0 );
assert( gamma_move(board1, 4, 0, 2) == 1 );
assert( gamma_move(board2, 4, 3, 1) == 0 );
assert( gamma_move(board3, 4, 0, 2) == 1 );
assert( gamma_move(board1, 1, 0, 0) == 0 );


char* board565985856 = gamma_board(board1);
assert( board565985856 != NULL );
assert( strcmp(board565985856, 
"....\n"
"4324\n"
".33.\n"
"1142\n") == 0);
free(board565985856);
board565985856 = NULL;
assert( gamma_move(board2, 1, 1, 2) == 0 );


char* board730241195 = gamma_board(board2);
assert( board730241195 != NULL );
assert( strcmp(board730241195, 
"4..1\n"
".331\n"
"...1\n"
"2324\n") == 0);
free(board730241195);
board730241195 = NULL;
assert( gamma_move(board3, 1, 0, 2) == 0 );


char* board565342265 = gamma_board(board3);
assert( board565342265 != NULL );
assert( strcmp(board565342265, 
"..22\n"
"4.13\n"
"4431\n"
"2...\n") == 0);
free(board565342265);
board565342265 = NULL;
assert( gamma_move(board1, 2, 3, 1) == 1 );
assert( gamma_move(board2, 2, 0, 3) == 0 );
assert( gamma_move(board3, 2, 0, 0) == 0 );
assert( gamma_move(board1, 3, 1, 3) == 1 );
assert( gamma_move(board2, 3, 3, 3) == 0 );
assert( gamma_move(board3, 3, 2, 2) == 0 );
assert( gamma_move(board1, 4, 2, 0) == 0 );
assert( gamma_move(board2, 4, 0, 3) == 0 );
assert( gamma_move(board3, 4, 3, 2) == 0 );
assert( gamma_move(board1, 1, 0, 2) == 0 );


char* board294913672 = gamma_board(board1);
assert( board294913672 != NULL );
assert( strcmp(board294913672, 
".3..\n"
"4324\n"
".332\n"
"1142\n") == 0);
free(board294913672);
board294913672 = NULL;
assert( gamma_move(board2, 1, 1, 3) == 1 );


char* board846654592 = gamma_board(board2);
assert( board846654592 != NULL );
assert( strcmp(board846654592, 
"41.1\n"
".331\n"
"...1\n"
"2324\n") == 0);
free(board846654592);
board846654592 = NULL;
assert( gamma_move(board3, 1, 3, 1) == 0 );


char* board950350046 = gamma_board(board3);
assert( board950350046 != NULL );
assert( strcmp(board950350046, 
"..22\n"
"4.13\n"
"4431\n"
"2...\n") == 0);
free(board950350046);
board950350046 = NULL;
assert( gamma_move(board1, 2, 1, 2) == 0 );
assert( gamma_move(board2, 2, 0, 2) == 1 );
assert( gamma_move(board3, 2, 2, 2) == 0 );
assert( gamma_move(board1, 3, 0, 1) == 1 );
assert( gamma_move(board2, 3, 0, 3) == 0 );
assert( gamma_move(board3, 3, 1, 2) == 1 );
assert( gamma_move(board1, 4, 3, 2) == 0 );
assert( gamma_move(board2, 4, 1, 1) == 1 );
assert( gamma_move(board3, 4, 2, 1) == 0 );
assert( gamma_move(board1, 1, 1, 3) == 0 );


char* board738981460 = gamma_board(board1);
assert( board738981460 != NULL );
assert( strcmp(board738981460, 
".3..\n"
"4324\n"
"3332\n"
"1142\n") == 0);
free(board738981460);
board738981460 = NULL;
assert( gamma_move(board2, 1, 3, 2) == 0 );


char* board123160841 = gamma_board(board2);
assert( board123160841 != NULL );
assert( strcmp(board123160841, 
"41.1\n"
"2331\n"
".4.1\n"
"2324\n") == 0);
free(board123160841);
board123160841 = NULL;
assert( gamma_move(board3, 1, 0, 2) == 0 );


char* board695727627 = gamma_board(board3);
assert( board695727627 != NULL );
assert( strcmp(board695727627, 
"..22\n"
"4313\n"
"4431\n"
"2...\n") == 0);
free(board695727627);
board695727627 = NULL;
assert( gamma_move(board1, 2, 0, 1) == 0 );
assert( gamma_move(board2, 2, 2, 1) == 1 );
assert( gamma_move(board3, 2, 3, 1) == 0 );
assert( gamma_move(board1, 3, 3, 1) == 0 );
assert( gamma_move(board2, 3, 0, 0) == 0 );
assert( gamma_move(board3, 3, 3, 3) == 0 );
assert( gamma_move(board1, 4, 1, 1) == 0 );
assert( gamma_move(board2, 4, 3, 2) == 0 );
assert( gamma_move(board3, 4, 1, 3) == 1 );
assert( gamma_move(board1, 1, 2, 2) == 0 );


char* board669232475 = gamma_board(board1);
assert( board669232475 != NULL );
assert( strcmp(board669232475, 
".3..\n"
"4324\n"
"3332\n"
"1142\n") == 0);
free(board669232475);
board669232475 = NULL;
assert( gamma_move(board2, 1, 2, 0) == 0 );


char* board745882880 = gamma_board(board2);
assert( board745882880 != NULL );
assert( strcmp(board745882880, 
"41.1\n"
"2331\n"
".421\n"
"2324\n") == 0);
free(board745882880);
board745882880 = NULL;
assert( gamma_move(board3, 1, 0, 2) == 0 );


char* board871600785 = gamma_board(board3);
assert( board871600785 != NULL );
assert( strcmp(board871600785, 
".422\n"
"4313\n"
"4431\n"
"2...\n") == 0);
free(board871600785);
board871600785 = NULL;
assert( gamma_move(board1, 2, 0, 0) == 0 );
assert( gamma_move(board2, 2, 2, 3) == 1 );
assert( gamma_move(board3, 2, 0, 0) == 0 );
assert( gamma_move(board1, 3, 2, 2) == 0 );
assert( gamma_move(board2, 3, 2, 2) == 0 );
assert( gamma_move(board3, 3, 1, 2) == 0 );
assert( gamma_move(board1, 4, 0, 2) == 0 );
assert( gamma_move(board2, 4, 0, 1) == 1 );
assert( gamma_move(board3, 4, 1, 3) == 0 );
assert( gamma_move(board1, 1, 3, 2) == 0 );


char* board789940705 = gamma_board(board1);
assert( board789940705 != NULL );
assert( strcmp(board789940705, 
".3..\n"
"4324\n"
"3332\n"
"1142\n") == 0);
free(board789940705);
board789940705 = NULL;
assert( gamma_move(board2, 1, 2, 2) == 0 );


char* board443432524 = gamma_board(board2);
assert( board443432524 != NULL );
assert( strcmp(board443432524, 
"4121\n"
"2331\n"
"4421\n"
"2324\n") == 0);
free(board443432524);
board443432524 = NULL;
assert( gamma_move(board3, 1, 2, 1) == 0 );


char* board492890253 = gamma_board(board3);
assert( board492890253 != NULL );
assert( strcmp(board492890253, 
".422\n"
"4313\n"
"4431\n"
"2...\n") == 0);
free(board492890253);
board492890253 = NULL;
assert( gamma_move(board1, 2, 2, 2) == 0 );
assert( gamma_move(board2, 2, 0, 3) == 0 );
assert( gamma_move(board3, 2, 2, 1) == 0 );
assert( gamma_move(board1, 3, 0, 0) == 0 );
assert( gamma_move(board2, 3, 3, 0) == 0 );
assert( gamma_move(board3, 3, 2, 2) == 0 );
assert( gamma_move(board1, 4, 0, 1) == 0 );
assert( gamma_move(board2, 4, 3, 0) == 0 );
assert( gamma_move(board3, 4, 2, 0) == 1 );
assert( gamma_move(board1, 1, 2, 2) == 0 );


char* board788007728 = gamma_board(board1);
assert( board788007728 != NULL );
assert( strcmp(board788007728, 
".3..\n"
"4324\n"
"3332\n"
"1142\n") == 0);
free(board788007728);
board788007728 = NULL;
assert( gamma_move(board2, 1, 1, 0) == 0 );


char* board848567182 = gamma_board(board2);
assert( board848567182 != NULL );
assert( strcmp(board848567182, 
"4121\n"
"2331\n"
"4421\n"
"2324\n") == 0);
free(board848567182);
board848567182 = NULL;
assert( gamma_move(board3, 1, 1, 2) == 0 );


char* board795436018 = gamma_board(board3);
assert( board795436018 != NULL );
assert( strcmp(board795436018, 
".422\n"
"4313\n"
"4431\n"
"2.4.\n") == 0);
free(board795436018);
board795436018 = NULL;
assert( gamma_move(board1, 2, 1, 1) == 0 );
assert( gamma_move(board2, 2, 2, 3) == 0 );
assert( gamma_move(board3, 2, 2, 2) == 0 );
assert( gamma_move(board1, 3, 0, 2) == 0 );
assert( gamma_move(board2, 3, 1, 2) == 0 );
assert( gamma_move(board3, 3, 0, 1) == 0 );
assert( gamma_move(board1, 4, 0, 0) == 0 );
assert( gamma_move(board2, 4, 0, 2) == 0 );
assert( gamma_move(board3, 4, 3, 3) == 0 );
assert( gamma_move(board1, 1, 0, 3) == 1 );


char* board753316387 = gamma_board(board1);
assert( board753316387 != NULL );
assert( strcmp(board753316387, 
"13..\n"
"4324\n"
"3332\n"
"1142\n") == 0);
free(board753316387);
board753316387 = NULL;
assert( gamma_move(board2, 1, 0, 0) == 0 );


char* board582787763 = gamma_board(board2);
assert( board582787763 != NULL );
assert( strcmp(board582787763, 
"4121\n"
"2331\n"
"4421\n"
"2324\n") == 0);
free(board582787763);
board582787763 = NULL;
assert( gamma_move(board3, 1, 1, 2) == 0 );


char* board724116828 = gamma_board(board3);
assert( board724116828 != NULL );
assert( strcmp(board724116828, 
".422\n"
"4313\n"
"4431\n"
"2.4.\n") == 0);
free(board724116828);
board724116828 = NULL;
assert( gamma_move(board1, 2, 0, 0) == 0 );
assert( gamma_move(board2, 2, 0, 3) == 0 );
assert( gamma_move(board3, 2, 1, 0) == 1 );
assert( gamma_move(board1, 3, 1, 3) == 0 );
assert( gamma_move(board2, 3, 0, 1) == 0 );
assert( gamma_move(board3, 3, 3, 0) == 1 );
assert( gamma_move(board1, 4, 0, 3) == 0 );
assert( gamma_move(board2, 4, 2, 3) == 0 );
assert( gamma_move(board3, 4, 3, 1) == 0 );
assert( gamma_move(board1, 1, 1, 2) == 0 );


char* board782339702 = gamma_board(board1);
assert( board782339702 != NULL );
assert( strcmp(board782339702, 
"13..\n"
"4324\n"
"3332\n"
"1142\n") == 0);
free(board782339702);
board782339702 = NULL;
assert( gamma_move(board2, 1, 1, 0) == 0 );


char* board192775383 = gamma_board(board2);
assert( board192775383 != NULL );
assert( strcmp(board192775383, 
"4121\n"
"2331\n"
"4421\n"
"2324\n") == 0);
free(board192775383);
board192775383 = NULL;
assert( gamma_move(board3, 1, 0, 0) == 0 );


char* board726623301 = gamma_board(board3);
assert( board726623301 != NULL );
assert( strcmp(board726623301, 
".422\n"
"4313\n"
"4431\n"
"2243\n") == 0);
free(board726623301);
board726623301 = NULL;
assert( gamma_move(board1, 2, 0, 2) == 0 );
assert( gamma_move(board2, 2, 3, 1) == 0 );
assert( gamma_move(board3, 2, 2, 2) == 0 );
assert( gamma_move(board1, 3, 1, 3) == 0 );
assert( gamma_move(board2, 3, 2, 0) == 0 );
assert( gamma_move(board3, 3, 2, 1) == 0 );
assert( gamma_move(board1, 4, 2, 3) == 1 );
assert( gamma_move(board2, 4, 2, 3) == 0 );
assert( gamma_move(board3, 4, 1, 1) == 0 );
assert( gamma_move(board1, 1, 2, 1) == 0 );


char* board903177516 = gamma_board(board1);
assert( board903177516 != NULL );
assert( strcmp(board903177516, 
"134.\n"
"4324\n"
"3332\n"
"1142\n") == 0);
free(board903177516);
board903177516 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 0 );


char* board510522407 = gamma_board(board2);
assert( board510522407 != NULL );
assert( strcmp(board510522407, 
"4121\n"
"2331\n"
"4421\n"
"2324\n") == 0);
free(board510522407);
board510522407 = NULL;
assert( gamma_move(board3, 1, 2, 1) == 0 );


char* board476168592 = gamma_board(board3);
assert( board476168592 != NULL );
assert( strcmp(board476168592, 
".422\n"
"4313\n"
"4431\n"
"2243\n") == 0);
free(board476168592);
board476168592 = NULL;
assert( gamma_move(board1, 2, 3, 0) == 0 );
assert( gamma_move(board2, 2, 2, 2) == 0 );
assert( gamma_move(board3, 2, 0, 0) == 0 );
assert( gamma_move(board1, 3, 2, 0) == 0 );
assert( gamma_move(board2, 3, 3, 3) == 0 );
assert( gamma_move(board3, 3, 1, 1) == 0 );
assert( gamma_move(board1, 4, 1, 0) == 0 );
assert( gamma_move(board2, 4, 3, 3) == 0 );
assert( gamma_move(board3, 4, 3, 0) == 0 );


gamma_delete(board1);


gamma_delete(board3);


gamma_delete(board2);

    return 0;
}

