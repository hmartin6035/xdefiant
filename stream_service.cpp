#include <iostream>
#include <vector>

class BatchController {
public:
    explicit BatchController(int seed) : state_(seed) {}

    int decode_context(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 14) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    BatchController obj(14);
    std::cout << obj.decode_context(14) << std::endl;
    return 0;
}
