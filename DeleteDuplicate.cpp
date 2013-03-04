#include "StdAfx.h"
#include <stdlib.h>
#include <iostream>

struct ListNode 
{
	int val;
    ListNode *next;
    //ListNode(int x) : val(x), next(NULL) {}
 };

void main()
{
	std::cout<< "hello world";
}


class Solution {

public:
    ListNode *deleteDuplicates(ListNode *head) 
    {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
                
        ListNode *frontPointer;
        ListNode *backPointer;
        
        frontPointer = head;
        backPointer = head;
        
        while (frontPointer != NULL)
        {
            if(frontPointer->val != backPointer->val)
            {
                backPointer = backPointer->next;
                backPointer->val = frontPointer->val;                
            }
            
            frontPointer = frontPointer->next;            
        }
        
        backPointer->next = NULL;
        
        return head;        
    }
};