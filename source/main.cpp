#include <format>
#include <iostream>

extern "C"
{
#include <libavformat/avformat.h>
#include <libavformat/version.h>
}

int main() {
  std::cout << std::format("avformat version: {}", LIBAVFORMAT_IDENT) << '\n';
  auto* ctx = avformat_alloc_context();
  constexpr auto kFilename = std::string_view{"some.mp3"};
  if (const auto res = avformat_open_input(&ctx, kFilename.data(), nullptr, nullptr); res != 0) {
    std::cerr << std::format("filed open file with filename: {}", kFilename) << '\n';
    avformat_free_context(ctx);
    return -1;
  }

  avformat_close_input(&ctx);
  avformat_free_context(ctx);
  return 0;
}
