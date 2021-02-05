##Algorithm

#sort

*bubble_sort

```c++
    for(int i;i<=10-1;i++){
        for(int j; j<= 10-1;j++){
            if (array[j]>array[j+1]){
                change = array[i];
                array[j] = array[j+1];
                array[j+1] = change;
```

*selection_sort

```

```

#search

*binary_search

```c++
    while( (find == 0) && (d <= u) ){
        int m = (int)((d+u)/2);
        if(array[m] == ans){
            cout<<"find "<<ans<<" in array["<<m<<"]";
            find += 1;
            break; 
        }
        else{
            if(array[m] > ans){
                u = m-1;
            }
            else{
                d = m+1;
            }
        }
    }
```

*sequential_search

```c++
	for(int ans=0; ans<10; ans++){
		if (array[ans] == input){
			cout<<input<< "in"<< ans;
			return 0; 
		}
	}
```

