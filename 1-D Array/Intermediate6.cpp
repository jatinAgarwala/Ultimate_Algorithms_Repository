/*
The code is a solution in C++ for the 6th Intermediate Problem in Questions.md

Problem link- https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1

Merge Without Extra Space-
Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order.
Merge the two arrays into one sorted array in non-decreasing order without using any extra space.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void merge(int arr1[],int arr2[],int n, int m)
    {
	    int i=n-1,j=0;
	    while(i>=0 && j<m)
	    {
    		if(arr1[i]>arr2[j])
		    {
    			int temp=arr1[i];
			    arr1[i]=arr2[j];
			    arr2[j]=temp;
		    }
		    i--;
		    j++;
		    if(arr1[i]<=arr2[j])
    			break;
    	}
    	sort(arr1,arr1+n);
    	sort(arr2,arr2+m);
    }
};