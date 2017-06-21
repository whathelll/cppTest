#include <stdio.h>
#include "Counter.h"

int Counter::Increment() {
      return ++mCounter;
}

int Counter::getCount() {
  return mCounter;
}
