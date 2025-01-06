// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<j ;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1 ;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int i=1;
// int count=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<count<<" " ;
//         j++;
//         count++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column<=row){
//         cout<<"*" ;
//         column++;
//     }
//     cout<<endl;
//     row++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column<=row){
//         cout<<row ;
//         column++;
//     }
//     cout<<endl;
//     row++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int row=1;
// int count=1;
// while(row<=n){
//     int column=1;
//     while(column<=row){
//         cout<<count<<" " ;
//         column++;
//         count++;
//     }
//     cout<<endl;
    
//     row++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     int count=row;
//     while(column<=row){
//         cout<<count<<" " ;
//         column++;
//         count++;
//     }
//     cout<<endl;
    
//     row++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column<=row){
//         cout<<row+column-1<<" " ;
//         column++;
//     }
//     cout<<endl;
//     row++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column<=row){
//         cout<<row-column+1<<" " ;
//         column++;
//     }
//     cout<<endl;
//     row++;
// }
// return 0; 
// }
// #include<iostream>
// using namespace std;
// int main()
// { int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column<=n){
//         char c='A' + row - 1 ;
//         cout<< c <<" " ;
//         column++;
//     }
//     cout<<endl;
//     row++;
// }
// return 0; 
// }
#include<iostream>
using namespace std;
int main()
{ int n;
cin>>n;
char c='A' ;
int row=1;
while(row<=n){
    int column=1;
    while(column<=n){  
        cout<< c <<" " ;
       c++;
        column++;
    }
    cout<<endl;
    row++;
}
return 0;
} 