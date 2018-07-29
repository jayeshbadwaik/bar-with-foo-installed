#include <bar/bar.hpp>
#include <foo/build/build.hpp>
#include <iostream>

namespace bar {
std::string bar()
{
  auto const buildinfo = foo::BuildInfo();
  std::string output = "bar with foo v"
                       + std::to_string(buildinfo.major_version) + "."
                       + std::to_string(buildinfo.minor_version);

  return output;
}
} // namespace bar
