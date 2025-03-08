#include "thread_utils.hpp"
#include "lf_queue.hpp"

struct MyStruct
{
    int d_[3];
};

using namespace Common;

auto consumeFunction(LFQueue<MyStruct> *lfq)
{
    using namespace std::literals::chrono_literals;
    std::this_thread::sleep_for(5s);

    while (lfq->size())
    {
        const auto d = lfq->getNextToRead();
        lfq->updateReadIndex();

        std::cout << "consumeFunction read elem: " << d->d_[0] << "," << d->d_[1] << "," << d->d_[2] << " lfq-size: " << lfq->size() << "\n";

        std::this_thread::sleep_for(1s);
    }

    std::cout << "consumeFunction done\n";
}

int main(int, char **)
{
    LFQueue<MyStruct> lfq(50);

    auto ct = createAndStartThread(-1, "", consumeFunction, &lfq);
    for (auto i = 0; i < 50; ++i)
    {
        const MyStruct d{i, i * 10, i * 100};
        *(lfq.getNextToWriteTo()) = d;

        lfq.updateWriteIndex();
        std::cout << "main constructed elem: " << d.d_[0] << "," << d.d_[1] << "," << d.d_[2] << " lfq-size:" << lfq.size() << "\n";

        using namespace std::literals::chrono_literals;
        std::this_thread::sleep_for(1s);
    }

    ct->join();
    std::cout << "main exiting.\n";

    return 0;
}