bool lock = false;
void some_func() {
retry:
  if (!test_and_set(&lock)) {
    // critical section
  } else {
      go to retry;
  }
  tas_release(&lock);
}
