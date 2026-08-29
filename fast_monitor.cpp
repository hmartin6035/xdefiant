#include <iostream>
#include <vector>

class StreamSession {
public:
    explicit StreamSession(int seed) : state_(seed) {}

    int resolve_session(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 47) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    StreamSession obj(47);
    std::cout << obj.resolve_session(47) << std::endl;
    return 0;
}
