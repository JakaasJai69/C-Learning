#include <main_Functions.h>
#include <Common.h>

int main()
{
  #ifdef DEBUG
  plog::init(plog::debug , "Logfile.txt");
  #endif
  #ifndef DEBUG
  plog::init(plog::none , "Logfile.txt");
  #endif
  
  PLOGD << "[debug: main() is called.]\n";

  //selectFunction() returns a code for executeFuntion() to run the respective
  //task
  execFunction(selectFunction());
    
  return 0;
}
