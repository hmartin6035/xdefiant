#include <iostream>
#include <vector>

class AsyncDispatcher {
public:
    explicit AsyncDispatcher(int seed) : state_(seed) {}

    int decode_controller(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 93) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AsyncDispatcher obj(93);
    std::cout << obj.decode_controller(93) << std::endl;
    return 0;
}
