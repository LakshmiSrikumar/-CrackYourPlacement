class solution {
    const int MOD =1e9+7;
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        long long num1=0;
        long long num2 =0;
        while (first!=NULL){
            num1= (num1*10 + first->data) % MOD;
            first=first->next;
        }
        while (second!=NULL){
            num2=(num2*10 + second->data)%MOD;
            second=second->next;
        }
        return (num1 * num2 ) % MOD;
    }
};