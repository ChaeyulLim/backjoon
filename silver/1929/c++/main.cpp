 #include <iostream>

 int main()
 {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int m, n;
    std::cin >> m >> n;
    bool array[n +1] = {true};
    for (int i = 0; i <= n; i++) {
        array[i] = true;
    }

    array[0] = array[1] = false;
    for (int i = 2; i <= n; i++) {
        if (array[i]) {
            for (int j = i; j <= n; j+=i) {
                array[j] = false;
            }
            array[i] = true;
            if (i >= m) {
                std::cout << i << '\n';
            }
        }
    }

    return 0;
 }