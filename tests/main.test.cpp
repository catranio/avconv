#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest/doctest.h>

int main(int argc, char** argv) {
  doctest::Context context{argc, argv};
  context.setOption("no-intro", true);
  context.setOption("no-version", true);
  const auto testResult = context.run();
  return testResult;
}
