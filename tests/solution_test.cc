#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MedianTest, HandlesOddsizeInput) {
  Solution solution;
  int arr[]={637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v(arr,arr+n);
  vector<int> v1(v.size());
  v1=solution.Median(v);
  vector<int> actual=v1; 
  int arr1[]={43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99 };
  vector<int> expected(arr1,arr1+n);
  EXPECT_EQ(expected, actual);
}

TEST(MedianTest, HandlesEvensizeInput) {
  Solution solution;
  int arr[]={1,5,6,45,14,104};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v(arr,arr+n);
  vector<int> v1(v.size());
  v1=solution.Median(v);
  vector<int> actual=v1; 
  int arr1[]={ 5,1,6,14,104,45};
  vector<int> expected(arr1,arr1+n);
  EXPECT_EQ(expected, actual);
}

TEST(MedianTest, HandlesEmptyInput) {
  Solution solution;
  int arr[]={};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v(arr,arr+n);
  vector<int> v1(v.size());
  v1=solution.Median(v);
  vector<int> actual=v1; 
  int arr1[]={};
  vector<int> expected(arr1,arr1+n);
  EXPECT_EQ(expected, actual);
}

TEST(MedianTest, HandlesEqualElementsInput) {
  Solution solution;
  int arr[]={1,1,1,1};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v(arr,arr+n);
  vector<int> v1(v.size());
  v1=solution.Median(v);
  vector<int> actual=v1; 
  int arr1[]={1,1,1,1};
  vector<int> expected(arr1,arr1+n);
  EXPECT_EQ(expected, actual);
}