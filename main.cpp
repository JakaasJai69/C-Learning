#include <iostream>
#include <main_Functions.h>
#include <Common.h>

int main()
{
  
  plog::init(plog::debug , "Logfile.txt");
  PLOGD << "[debug: main() is called.]\n";

  //selectFunction() returns a code for executeFuntion() to run the respective
  // task
  execFunction(selectFunction());
  return 0;
}
