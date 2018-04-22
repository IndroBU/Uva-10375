
#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;


int main() {

 LL P,Q,R,S,M=100000000;

 vector<LL>v1;
 vector<LL>v2;


   while(cin>>P>>Q>>R>>S){

        if(R < P)
        {

            for(LL I=R+1; I <= P; I = I + 1 )
            {

               v1.push_back(I);

            }
        }
       if(P < R)
        {

            for(LL I=P+1; I <= R; I++)
            {

                v2.push_back(I);


            }
        }
        if((P-Q) < (R-S))
        {
           // E2=1;
            for(LL I=(P-Q)+1; I<=(R-S); I++)
            {

                     v1.push_back(I);

            }
        }
        if((R-S) < (P-Q))
        {

            for(LL I=(R-S)+1; I<=(P-Q); I++)
            {

                  v2.push_back(I);
            }
        }
        if(Q < S)
        {

            for(LL I=Q+1; I<=S; I++)
            {

                 v1.push_back(I);


            }
        }
         if(S < Q)
        {

            for(LL I=S+1; I<=Q; I++)
            {

                 v2.push_back(I);

            }
        }

        if(v1.size()>v2.size())
        {
            for(LL I=1; I<=v1.size()-v2.size(); I++)
            {
                v2.push_back(1);
            }
        }
        else if(v2.size()>v1.size())
        {
            for(LL I=1; I<=v2.size()-v1.size(); I++)
            {
                v1.push_back(1);
            }
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());

        long  double ans=1;
        for(LL I=0; I<v1.size(); I++)
        {
           ans*=((double)v1[I]/(double)v2[I]) ;
        }

        printf("%.5Lf\n",ans);

        v1.clear();
        v2.clear();


}
return 0;
}

