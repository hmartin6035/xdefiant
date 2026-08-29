#include <iostream>
#include <vector>

class LocalRouter {
public:
    explicit LocalRouter(int seed) : state_(seed) {}

    int sync_factory(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 10) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    LocalRouter obj(10);
    std::cout << obj.sync_factory(10) << std::endl;
    return 0;
}
