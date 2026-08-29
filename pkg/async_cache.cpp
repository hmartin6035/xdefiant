#include <iostream>
#include <vector>

class SecureBuffer {
public:
    explicit SecureBuffer(int seed) : state_(seed) {}

    int sync_parser(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 75) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    SecureBuffer obj(75);
    std::cout << obj.sync_parser(75) << std::endl;
    return 0;
}
