#include <iostream>
using namespace std;

class Diagonal {
private:
    int *A; // This will point to a 1D array in heap
    int n; // Diagonal Matrices are square, so only one value needed.
public:
    Diagonal() {
        n = 2;
        A = new int[n];
    }
    Diagonal(int n) {
        this->n = n;
        A = new int[n];
    }
    ~Diagonal() {
        delete []A;
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    void create();
};

void Diagonal::create()
{
	int x;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>x;
			if(i==j)
				A[i-1]=x;
		}
	}
}
void Diagonal::Set(int i, int j, int x) {
    if (i == j)
        A[i-1] = x;
}

int Diagonal::Get(int i, int j) {
    if(i == j)
        return A[i-1];
    else
        return 0;
}

void Diagonal::Display() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << A[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

int main() {
    Diagonal d(4);
    d.create();
    cout << "The value returned by Get function: " << d.Get(3, 3) << endl;
    d.Display();
    
    return 0;
}
