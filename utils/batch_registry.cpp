#include <iostream>
#include <vector>

class AtomicWorker {
public:
    explicit AtomicWorker(int seed) : state_(seed) {}

    int flush_buffer(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 45) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    AtomicWorker obj(45);
    std::cout << obj.flush_buffer(45) << std::endl;
    return 0;
}
