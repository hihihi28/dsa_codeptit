#include<bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    node *left, *right;
    node(char x){
        data = x;
        left = right = nullptr;
    }
};

