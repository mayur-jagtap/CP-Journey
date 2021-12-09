#include<bits/stdc++.h>
#define ll long long int
#define printn(x) cout<<x<<"\n"
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void testCase();

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;


while(t--)
{
	testCase();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void testCase()
{
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
    	if(!head->next)  return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
        	slow = slow->next;
        	fast = fast->next->next;
        }
        ListNode* mid = slow;
        ListNode* curr = slow->next;
        ListNode* nextptr;
        ListNode* prev = NULL;
        ListNode* first = NULL;
        while(curr != NULL){
        	nextptr = curr->next;
        	curr->next = prev;

        	prev = curr;
        	curr = nextptr;
        }
        slow->next = prev;   // join the linked list.
        first = prev;
        ListNode* start = head; 
        while(first){
        	if(start->val != first->val) return false;
        	start = start->next;
        	first = first->next;
        }
        return true;
    }
};