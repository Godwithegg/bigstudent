#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int> > que;  //�����а�����ֵ��С��С��������
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        que.push(k);
    }
    int total=0;
    while(!que.empty())
    {
        int a=que.top();
        que.pop();
        int b=que.top();
        que.pop();
        int sum=a+b;   //�ϲ���С����������
        total+=sum;
        if(!que.empty())  //�����ǰ���й���û�б��ϲ�
        {
            que.push(sum);
        }
    }
    printf("%d",total);   //�ܹ��ϲ��Ĵ���
    return 0;
}
