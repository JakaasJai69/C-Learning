#include <Common.h>
#include <main_functions.h>

int main()
{
#ifdef DEBUG
  plog::init(plog::debug, "Logfile.txt");
#endif
#ifdef NDEBUG
  plog::init(plog::none, "Logfile.txt");
#endif

  PLOGD << "[debug: main() is called.]\n";

  // selectFunction() returns a code for executeFuntion() to run the respective
  // task
  execFunction(selectFunction());


  return 0;
}
