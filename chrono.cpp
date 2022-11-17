#include <iostream>
#include <chrono>

int main()
{
  std::string str;
  for (int i = 0; i < 1e5; i++)
  {
    str += std::to_string(i) + "";
  }
  std::cout << str;

  return 0;
}
