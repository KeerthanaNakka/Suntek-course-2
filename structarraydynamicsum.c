/*Given a structure with array and size, when a element passed to a function, find all the indexes of the numbers in an array whose sum of two
elements results is the element which is passed. print array if such indexes are present else print No Output*/
#include<stdio.h>
#include<stdlib.h>
struct Ans{
int size;
int *array;
};
struct Ans getIndexes(int n,int *arr,int ele);
int main()
{
    int i,n,*arr,ele;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&ele);
    struct Ans ans=getIndexes(n,arr,ele);
    if(ans.size>0)
    {
       for(i=0;i<ans.size;i++)
            printf("%d ",ans.array[i]);

    }
    else if(ans.size==0){
        printf("No output");
    }
    return 0;
}
struct Ans getIndexes(int n,int *arr,int ele)
{
    int k=0,l=1,i,j,size=0;
   struct Ans ans;
   ans.array=(int *)malloc(sizeof(int)*size);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]+arr[j]==ele)
           {
            ans.array[k]=i;
            k++;
           ans.array[k]=j;
           k++;
           }
       }
   }
   ans.size=k;
    return ans;

};
