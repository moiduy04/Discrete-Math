#include <iostream>
//#include <ctime>

using namespace std;

int main()
{
    //srand(time(NULL));
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
        //a[i] = rand() % 100 + 1;
    for(int i = 1; i < n; i++)
    {
        int left = 0;
        int right = i - 1;
        while(left < right)
        {
            int mid = (left + right) / 2;
            if(a[i] <= a[mid])
                right = mid;
            else
                left = mid + 1;
        }
        int tmp = a[i];
        if(a[i] <= a[left]){
            for(int j = i; j > left; j--)
                swap(a[j], a[j - 1]);
            a[left] = tmp;
        }
        else{
            for(int j = i; j > left + 1; j--)
                swap(a[j], a[j - 1]);
            a[left + 1] = tmp;
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}
