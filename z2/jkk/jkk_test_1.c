#ifdef NDEBUG
#undef NDEBUG
#endif

#include "gamma.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shuffle(uint64_t *array, size_t n){
    if (n > 1) {
        size_t i;
        for (i = 0; i < n - 1; i++) {
            size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
            uint64_t t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}

//gamma_move performance test
int main() {
  gamma_t *g;

  g = gamma_new(5000, 5000, -1, -1);
  assert(g != NULL);

  srand(7331);
  static uint64_t arr[1000*1000];
  for(int i = 0; i < 1000000; ++i){
      arr[i] = ((uint64_t)i/1000 << 32) + i % 1000;
  }
  shuffle(arr,1000*1000);

  for(int i = 0; i < 1000000; ++i){
      assert(gamma_move(g, 1, arr[i] >> 32, (uint32_t)arr[i]));
  }

  gamma_delete(g);
  return 0;
}
