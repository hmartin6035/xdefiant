#include <iostream>
#include <vector>

class DynamicCollector {
public:
    explicit DynamicCollector(int seed) : state_(seed) {}

    int render_cache(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 20) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    DynamicCollector obj(20);
    std::cout << obj.render_cache(20) << std::endl;
    return 0;
}
