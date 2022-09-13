// Q. Operating an array

// Brute force 
bool searchEle(int a[],int x)
{
    // add code here.
    for(int i=0; i<100; i++){
        if(a[i] == x) return true;
        cout << a[i] << " ";
    }
    
    return false;
}
bool insertEle(int a[],int y,int yi)
{
    // add code here.
    a[yi] = y;
}
bool deleteEle(int a[],int z)
{
    // add code here.
    return true;
}