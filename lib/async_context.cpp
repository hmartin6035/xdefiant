#include <iostream>
#include <vector>

class RemoteParser {
public:
    explicit RemoteParser(int seed) : state_(seed) {}

    int resolve_provider(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 5) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    RemoteParser obj(5);
    std::cout << obj.resolve_provider(5) << std::endl;
    return 0;
}
