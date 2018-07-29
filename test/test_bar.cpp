#include <cassert>
#include <iostream>
#include <bar/bar.hpp>

int main()
{
  auto const value = bar::bar();

  std::cout<<value<<std::endl;
  assert(value == "bar with foo v0.0");
}
