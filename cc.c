#include<stdio.h>

int main(){
	int arr[20], num, i, odd=0, even=0, even1,even2[50], merged[20],multiple_even_add;
    printf("Enter the size of array : ");
    scanf("%d",&num);
    for (i = 0; i < num; i++) {
        printf("number at arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for ( i = 1; i < num; i+=2) {
         odd = odd + arr[i];
    }
    printf("\nThe sum of numbers at odd position are %d\n",odd);

    //even
    for ( i = 0; i < num; i+=2){
        int even_digit=(arr[i]*2);
        if( even_digit>=10)
        {
            
            even1 = even_digit % 10;
            even_digit /= 10;
            multiple_even_add = even1 + even_digit;
        }
        else
        {
            multiple_even_add += even_digit;
        }
        
    }
    
    printf("Sum of even digit place is %d\n",multiple_even_add);
    int checksum = multiple_even_add + odd;
    printf("Checksum %d\n",checksum);
    if(checksum % 2 ==0)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID\n");
    }
    
        
        
    

    //printf("even 1 is %d\n",even1);
    //printf("even 2 is %d\n",even2);

    // calculating length of even1 and even2
    // int l1=sizeof(even1)/sizeof(even1[0]);
    // printf("size of even1 is %d",l1);
    // int l2=sizeof(even2)/sizeof(even2[0]);
    // printf("size of even2 is %d",l2);

    // //merging array even1 and even2
    // for(i=0;i<l1;i++) {
    //     merged[i]=even1[i];
    // }
    // for(i=0;i<l1;i++) {
    //     merged[l1+i]=even2[i];
    // }
    // printf("Merged array is : \n");
    // for(i=0;i<(l1+l2);i++) {
    //     printf("%d",merged[i]);
    // }
        
    return 0;    
        
}