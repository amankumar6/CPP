#include <bits/stdc++.h>
using namespace std;
#define c(a) cin>>a;
#define co(a) cout<<a;
#define ll long long int
#define f0(i,a,n) for(ll i=a;i<n-1;i++)
#define f(i,a,n) for(ll i=a;i<n;i++)
#define f1(i,a,n) for(ll i=a;i<=n;i++)
#define f2(i,a,n) for(ll i=a;i>=n;i--)
#define ci(arr) f(i,0,n) c(arr[i]);
#define T ll t=1; cin>>t; while(t--)
#define nl cout<<endl; 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n,a[51],b[1001],temp;
int main()
{
    fast;
    c(n)
    f1(i,1,n)
    {
        c(a[i])
        if(b[a[i]]==0) ++temp;
        b[a[i]]=i;
    }
    co(temp) nl
    f1(i,1,n)
    {
        if(b[a[i]]==i)
        cout<<a[i]<<" ";
    }
    return 0;
}

/*
 
           .$                                  $.
          /:;                                  :;\
         : $                                    $ ;
         ;:$                                    $;:
        : $:              ________              ;$ ;
        ; $;;     _..gg$$SSP^^^^T$S$$pp.._     ::$ :
       : :$;|  .g$$$$$$SSP"      "TS$$$$$$$p.  |:$; ;
       ; :$;:.d$$$$$$$SSS          SS$$$$$$$$b.;:$; :
      :  :$$$$$$$$$$$$SSS          SS$$$$$$$$$$$$$;  ;
      ;  $$$$$$$$$$$$$$SSb.      .dS$$$$$$$$$$$$$$;  :
     :  :S$$$$$$$$$$$$$$SSSSppggSSS$$$$$$$$$$$$$$$;   ;
     |  :SS$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$;   :
     |  :SS$$$$$$$$$$$$$$$$$^^^^^^^^^$$$$$$$$$$$$$$   :
     ;   SS$$$$$$$$$$P^"                 "^T$$$$$$$   :
    :    :SS$$$$$$$$$                       T$$$$$;   :
    |     SSS$$$$$$$;                        T$$$$    :
    |     :SSS$$$$$$;                        :$$$;    :
    ;      SSS$$$$$$;                        :S$$;    :
    ;      :SS$$P"^P                          S$$;    :
    ;    ..d$$$P    `                         S$$$    :
    ;     T$$$P                          dS   T$$$b.  :
    ;    :$$$$.     .                   dSS;   $$$$$b.:
    ;    :$$$$$b     Tb.   .          .dSS$$b.d$$$$$$$:
    :    $$$$$$$b     TSb   Tb..g._, :$$SS$$$$$$SSS$$$:
    :   :$$$$$$$$b     SSb   T$SS$P   "^TS$$$$$$P"TS$$:
    :   $$$$$$$$$$b._.dS$$b _ T$$P _     TSS$SSP  :SS$:
    :  :$$$$SSS$$$$$$$$$P" d$b. _.d$P     TSSP"    SS$:
    :  :P"TSSP"^T$$$$$$P  :$$$$$$$$P d$$b          $S$;
    :  :b.dS^^-.  ""^^"    $b T d$$$s$$$$b __..--""$ $;
    :  :$$$S    ""^^..ggSS$$$$$$$$$$$$$$P^^""     .$ $;
    :   $$$$$pp..__   `j$$$$$$^$$$$$b. d....ggppTSSS$$;
    :   $$$$SP     """t  :$$$$ $$$$$$$b.  d$b    `TSS$;
    :  \:$$SP   _.gd$$P_d$$$$$ $$$$$$$$$bd$P'    .dSPd;
    :   \"^S     "^T$$$$$$$$$$ $$$$$SS$$$$b.    dSS'd$;
    $    $. "-.__.gd$$$$$$$SP:S$$P  TSS$$$$$bssS^".d$$:
   :$    $$b.   ""^^T$$$$SP' :S$P    TSSSP^^""  .d$$$$:
   :$   :$$$P        "^SP'   :S;     .^"`.     $$$$$$$:
   $;   :$$$            "-.  :S;  .-"     \    :$$$$$$:
  .$ :  $$$;   :           `.:S;.'         ;    $$$$$$:;
 .P :S  $$$    ;             `^'                :$$$$$:;
.P  S;.d$$;   :               -'                 $$$$$:;
$  :SS$$$$    ;     __....----  --...____        :$$$ :S
$  $SSS$$;    :  ; d$$$$$$$pppqqqq$$$$$$L;       :$$$ SS
: :SSSSS$$     ; : \ "^T$$$$$$$$$$$$$P' .':      $PT$ SS;
 $SP^"^TSP\    :  \ "-.  """"""""""" .-"  ;     /   $ SSSb.
 :S     S  \           "--...___..--"    /  :  /    :gSSSSSb.
  T bug T   \       `.      _____       /   ; /
   `         \ :      "==="""""""""===""   : /
              `:                           ;'
                "-.                     .-"
                   ""--..         ..--""
*/