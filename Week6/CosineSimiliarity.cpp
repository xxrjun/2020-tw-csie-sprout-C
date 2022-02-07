#include <iostream>
#include <cmath>
// Returns: the vector length of a
// You might need `sqrt` in `cmath`
double norm(int n, int a[]);

// Returns: the inner-product between a and b
int dot(int n, int a[], int b[]);

// Returns: the cosine similarity between a and b 
double cosineSimilarity(int n, int a[], int b[]);

int main() {
    int n, a[1000], b[1000];
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    for (int i = 0; i < n; i++)
        std::cin >> b[i];
        
    std::cout << cosineSimilarity(n, a, b) << std::endl;
}

int dot(int n, int a[], int b[]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += (a[i] * b[i]);
    }

    return sum;
}

double norm(int n, int a[]){
    double sqrt_Square = 0;
    int Square_Sum = 0;
    for(int i = 0; i < n; i++){
        Square_Sum += a[i]*a[i];
    }
    sqrt_Square = sqrt(Square_Sum);
    
    return sqrt_Square;
}

double cosineSimilarity(int n, int a[], int b[]){
    double result = dot(n, a, b) / (norm(n, a) * norm(n, b));
    return result;
}