public class selectionsort {
    public static void sort(int[] arr)
    {
        int size=arr.length;
        int i,j,min,temp;
        for(i=0;i<size-1;i++)
        {
            min=i;
            for(j=i+1;j<size;j++)
            {
                if(arr[j]<arr[min])
                    min=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }

    public static void main(String[] args)
    {
        int[] array={9,1,8,2,7,3,6,4,5};
        sort(array);
        for(int i=0;i<array.length;i++)
        {
            System.out.print(array[i]+" ");
        }
    }
    
}
