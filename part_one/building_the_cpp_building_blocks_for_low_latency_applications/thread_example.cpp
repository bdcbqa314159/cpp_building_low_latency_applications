#include "thread_utils.hpp"

auto dummyFunction(int a, int b, bool sleep)
{
    std::cout << "dummyFunction(" << a << ", " << b << ")\n";
    std::cout << "dummyFunction output=" << a + b << "\n";

    if (sleep)
    {
        std::cout << "dummyFunction sleeping...\n";

        using namespace std::literals::chrono_literals;
        std::this_thread::sleep_for(5s);
    }

    std::cout << "dummyFunction done\n";
}

int main(int, char **)
{
    using namespace Common;

    auto t1 = createAndStartThread(-1, "dummyFunction", dummyFunction, 12, 21, false);
    auto t2 = createAndStartThread(1, "dummyFunction2", dummyFunction, 15, 51, true);

    std::cout << "main thread waiting for threads to be done.\n";
    t1->join();
    t2->join();
    std::cout << "main exiting.\n";

    return 0;
}