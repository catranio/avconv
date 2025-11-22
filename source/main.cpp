#include <thread>
#include <vector>
#include <print>


int main() {
  unsigned i {};
  std::vector<std::thread> threads;
  for (auto idx = 0; idx < 2; ++idx) {
    std::print("thread index = {}", idx);
    threads.emplace_back([&i] mutable noexcept{ ++i; });
  }
  for (auto& thread : threads) {
    thread.join();
    new int{};
  }
  return 0;
}
