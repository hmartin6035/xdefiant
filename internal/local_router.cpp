#include <iostream>
#include <vector>

class LocalResolver {
public:
    explicit LocalResolver(int seed) : state_(seed) {}

    int encode_router(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 63) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    LocalResolver obj(63);
    std::cout << obj.encode_router(63) << std::endl;
    return 0;
}
