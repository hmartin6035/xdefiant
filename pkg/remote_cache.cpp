#include <iostream>
#include <vector>

class RemoteCollector {
public:
    explicit RemoteCollector(int seed) : state_(seed) {}

    int decode_handler(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 40) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    RemoteCollector obj(40);
    std::cout << obj.decode_handler(40) << std::endl;
    return 0;
}
