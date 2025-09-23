//  #include <bits/stdc++.h>
//  using namespace std;
//  int main(){
//  ios_base::sync_with_stdio(false);
//  cin.tie(nullptr);
//      int array[]={1,2,3,4,5,6};
//      int target=2;
//      for (int start = 0; start < 6; start++)
//      {
//          if (array[start]==target)

//          {
//              cout<<start;
//              break;
// /         }

//      }

//      return 0;
//  }

//  #include <bits/stdc++.h>
//  using namespace std;
//  int main(){
//  ios_base::sync_with_stdio(false);
// // // // // // // cin.tie(nullptr);
//      int decinum;
//      cin>>decinum;
//      vector<int>vc(decinum);
//      for (int start = 0; start < 5; start++)
//      {
//         cin >> vc[start];
//          cout<<endl;
//      }

//      return 0;
//  }

//  use of each loop
//   #include <bits/stdc++.h>
//   using namespace std;
//   int main(){
//   ios_base::sync_with_stdio(false);
//  cin.tie(nullptr);
// // // // // // //      vector<int>each{1,3,4,56};
//       for(int start:each){
//           cout<<start<<endl;
//       }
//       return 0;
//   }

//  binary to decimal!
//   #include <bits/stdc++.h>
//   using namespace std;
//   int binaryTOdecimal(int binary);
//   int binaryTOdecimal(int binary){
//       int ans =0;
//       int pow=1;
//       while (binary>0)
//       {
//           int remainder=binary%10;
//           ans+=remainder*pow;
//           binary/=10;
//           pow//        }
//      return ans;
//  }
//  int main(){
//  ios_base::sync_with_stdio(false);
//  cin.tie(nullptr);
//      int binary;
//      cin>>binary;
//      int theDcemal=binaryTOdecimal(binary);
//     cout<<"so the decimal numbre is = "<<theDcemal<<endl;
//      return 0;
//  }

//  Dcimal to binary!
// #include <bits/stdc++.h>
// using namespace std;
// int decimalTObinary(int decinum);
// int decimalTObinary(int decinum)
// {
//     int pow = 1;
//     int ans = 0;
//     while (decinum > 0)
//     {
//         int remainder = decinum % 2;
//         ans += remainder * pow;

//         decinum /= 2;
//         pow *= 10;
//     }
//     return ans;
// }
// int main()
// {
// //      ios_base::sync_with_stdio(false);
// //      cin.tie(nullptr);
// //      int decinum;
// //      cin >> decinum;
// //      int theBinary=decimalTObinary(decinum);
// //      cout<<theBinary;

// //      return 0;
// //  }

//  //how can start use vector!
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main(){
//  // ios_base::sync_with_stdio(false);
//  // cin.tie(nullptr);
//      vector<int>za(5);
//      //vector input!
//      for (int start = 0; start < 5; start++)
//      {
//          cin>>za[start];
//      }

//      return 0;
//  }

//  find the subarray
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//       ios_base::sync_with_stdio(false     cin.tie(nullptr     int n = 5     int array[n] = {1, 2, 3, 4, 5     // for starting point of the subarray     for (int start = 0; start < n; start              // for the end point of the subarray          for (int end = start; end < n; end                      // for printing the starting to end             for (int start = start; start <= end; start                              cout <<array[start                          cout << "                   cout << endl     }

//      return 0;// }
// find the maximum sum of subarray!
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      ios_base::sync_with_stdio(false);
//      cin.tie(nullptr);
//      int n = 5;
//      int arr[n] = {1, 2, 3, 4, 5};
//      int maxSum = INT_MIN;
//      for (int start = 0; start < n; start++)
//      {
//          int current_sum = 0;
//          for (int end = start; end < n; end++)
//          {
//              current_sum+=arr[end];
//              maxSum = max(current_sum, maxSum);
//          }
//      }
//      cout<<maxSum;
//      return 0;
// // //}

// kadanes algorithom!
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main(){
//  ios_base::sync_with_stdio(false);
//  cin.tie(nullptr);
//      int n = 6;
//      int arry[n] = {-3, -4, -5, -10, -7, -9};
//      int currentSum=0;
//      int maxSum=INT_MIN;
//      for (int i = 0; i < n; i++)
//      {
//          currentSum+=arry[i];
//          maxSum= max(currentSum,maxSum);
//          if (currentSum<0)
//          {
//                  currentSum=0;
//          }

//      }
//      cout<<maxSum;

//      return 0;
//  // }

// pairsum
//     #include <bits/stdc++.h>
//     using namespace std;
//     vector<int> pairsum(vector<int> num, int target) ;
//  vector<int> pairsum(vector<int> num, int target){
//      int n=num.size();
//      vector<int>answer;
//      for (int i = 0; i < n; i++)
//      {
//              for (int j = 0; j < n; j++)
//              {
//                      if (num[i]+num[j]==target)
//                      {
//                              answer.push_back(i);
//                              answer.push_back(j);
//                             return answer;
//                      }

//              }

//      }
//      return answer;
// / }

//    int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);

//      vector<int>theVector={1,2,3,4,5,7};
//     int target=7;
//      vector<int>theasnwer=pairsum(theVector,target);
//      for(int value:theasnwer){
//         cout<<value<<" ";
//      }

// //     return 0;
// //    }

// // pair sum!
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> pairsum(vector<int> num, int targer);
// vector<int> pairsum(vector<int> num, int targer)
// {
//         vector<int> theAns;
//         int n = num.size();
//         int i = 0;
//         int j = n - 1;

//         while (i<j)
//         {

//                 int psum = num[i] + num[j];
//                 if (psum > targer)
//                 {
//                         j--;
//                 }
//                 else if (psum < targer)
//                 {
//                         i++;
//                 }
//                 else
//                 {
//                         theAns.push_back(i);
//                         theAns.push_back(j);
//                         return theAns;
//                 }
//         }

//         return theAns;
// }
// int main()
// {
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         vector<int> numbers = {
//             1,
//             2,
//             3,
//             4,
//             5,
//             12,
//             13,
//         };
//         int target = 5;
//         vector<int> answer = pairsum(numbers, target);
//         for (int valur : answer)
//         {
//                 cout << valur<<" ";
//         }
//         return 0;
// }

// majority element
// #include <bits/stdc++.h>
// using namespace std;

// int majority_elemetn(vector<int> element);
// int majority_elemetn(vector<int> element)
// {
//     int n = element.size();
//     for (int value : element)
//     {
//         int frequence = 0;
//         for (int le : element)
//         {
//             if (le == value)
//             {
//                 frequence++;
//             }
//         }
//         if (frequence > n / 2)
//         {
//             return value;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     vector<int> element = {1, 2, 1, 2, 2, 2};
//     int answer = majority_elemetn(element);
//     cout << answer;

//     return 0;
// }

//Majority element more optimize!
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(nullptr);
//     vector<int>numbers={2,2,2,1,1,2,1};
//     int n=numbers.size();
//     sort(numbers.begin(), numbers.end());
//     int frequence=1;
//     int ans=numbers[0];
//     for (int i = 1; i < n; i++)
//     {
//             if (numbers[i]==numbers[i-1])
//             {
//                     frequence++;
//             }
//             else{
//                 frequence=1;
//                 ans=numbers[i];
//             }
//             if (frequence>n/2)
//             {
//                     cout<<ans;
//                     return 0;
//             }
            
//         }
//         cout<<"No majority element";
    
//     return 0;
// }

//majority element optimize code!
#include<bits\stdc++.h>
using namespace std;
int main(){
     
vector<int> num = {2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2};

    int n = num.size();

    int freq=0;
    int ans=0;
    
    for (int i = 0; i < n; i++)
    {
        if (freq==0)
        {
                ans=num[i];
        }
        if (ans==num[i])
        {
                freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
    
    return 0;
}