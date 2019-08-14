#include <iostream>
using namespace std;

// int main()
// {
//   long n;
//   cin >> n;
//   long arr[n - 1];
//   bool found = false;

//   for (long i = 0; i < n - 1; i++)
//   {
//     cin >> arr[i];
//   }
//   size_t arr_size = sizeof(arr) / sizeof(*arr);
//   for (long i = 0; i < n; i++)
//   {
//     long current_no = i + 1;

//     for (long j = 0; j < arr_size; j++)
//     {
//       if (arr[j] == current_no)
//       {
//         break;
//       }
//       else if (arr[j] != current_no && j + 1 == arr_size)
//       {
//         cout << current_no;
//         found = true;
//         break;
//       }
//     }
//     if (found)
//     {
//       break;
//     }
//   }
// }

int main(){
  long long n, x, nsum, sum=0;
  cin>>n;
  nsum = n*(n+1)/2;
  for (size_t i = 0; i < n-1; i++)
  {
    cin>>x;
    sum = sum+x;
  }
  cout<<nsum-sum;  
}