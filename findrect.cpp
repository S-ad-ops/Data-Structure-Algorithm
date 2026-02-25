#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int maxArea = 0;
    for (int r1 = 0; r1 < n; r1++) {
        for (int c1 = 0; c1 < m; c1++) {
            for (int r2 = r1; r2 < n; r2++) {
                for (int c2 = c1; c2 < m; c2++) {
                    bool isAll1 = true;
                    for (int i = r1; i <= r2; i++) {
                        for (int j = c1; j <= c2; j++) {
                            if (arr[i][j] == 0) {
                                isAll1 = false;
                                break;
                            }
                        }
                        if (!isAll1) {
                            break;
                        }
                    }
                    if (isAll1) {
                        int area = (r2 - r1 + 1) * (c2 - c1 + 1);
                        maxArea = max(maxArea, area);
                    }
                }
            }
        }
    }
    cout << maxArea << endl;
    return 0;
}