#include <iostream>
using namespace std;

class NumberList
 {
private:
    int *numbers;
    int count;
    int total = 1;

public:
    NumberList(int n)
    {
        count = n;
        numbers = new int[n];
        total = 1;
    }

    void displayNumbers() {
        for (int i = 0; i < count; i++) {
            total  *= numbers[i];
        }

        cout << total;
    }

    void acceptNumbers()
    {
        cout << "Enter " << count << " numbers:\n";
        for (int i = 0; i < count; i++) {
            cin >> numbers[i];
        }


    }

    ~NumberList()
    {
        delete[] numbers;
    }
};

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    NumberList myList(n);
    myList.acceptNumbers();
    myList.displayNumbers();
    return 0;
}
