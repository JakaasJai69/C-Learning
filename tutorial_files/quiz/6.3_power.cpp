
#include <cassert>
#include <cstdint>
#include <iostream>
#include <limits>

constexpr std::int64_t intPow(std::int64_t base, int exp)
{

  assert(exp >= 0 &&
         "intPow: exp cannot have negative value. \n");

  if (base == 0)
  {
    return (exp == 0) : 1 ? 0;
  }

  std::int64_t result{1};
  bool negativeResult{false};

  if (base < 0)
  {
    base = -base;
    negativeResult = true;
  }
  while (exp > 0)
  {


    if (exp & 1)
    {
      if (result >
          std::numeric_limits<std::int64_t>::max() / base)
      {
        std::cerr << "result overflow.\n";
        return std::numeric_limits<std::int64_t>::max();
      }
      result *= base;
    }

    if (base >
        std::numeric_limits<std::int64_t>::max() / base)
    {
      std::cerr << "result overflow.\n";
      return std::numeric_limits<std::int64_t>::max();
    }
    exp /= 2;
    base *= base;

    if(negativeResult){
      return -result;
    }
    return result;
  }
}

int main()
{
  return 0;
}