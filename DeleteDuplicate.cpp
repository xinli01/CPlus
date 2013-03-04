#include "StdAfx.h"
#include <stdlib.h>
#include <iostream>



struct ListNode 
{
	int val;
    ListNode *next;
    //ListNode(int x) : val(x), next(NULL) {}
 };



void printLinkedList(ListNode* start)
{
	ListNode* point = start;

	while(point!= NULL)
	{
		std::cout << point->val << std::endl;
		point = point->next;
	}
}

ListNode* createLinkedList()
{
	// create a linkedList   2,1,1,4
	const int count = 4;
	int valueArray[count] = {2,1,1,4};

	ListNode* a = new ListNode();
	a->val = valueArray[0];

	ListNode* b = new ListNode();
	b->val = valueArray[1];

	ListNode* c = new ListNode();
	c->val = valueArray[2];

	ListNode* d = new ListNode();
	d->val = valueArray[3];

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	return a;
}


class Solution {

public:
    static ListNode *deleteDuplicates(ListNode *head) 
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

void main()
{
	//std::cout<< "hello world";
	ListNode* start = createLinkedList();
	ListNode* result = Solution::deleteDuplicates(start);
	printLinkedList(result);
	std::cin;
}