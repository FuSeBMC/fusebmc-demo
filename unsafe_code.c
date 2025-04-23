
int main(){
    int a, x, y = 0, z;
    a = __VERIFIER_nondet_uint();
    x = __VERIFIER_nondet_uint();
    z = __VERIFIER_nondet_uint();
    if (a > 25000 && x == 30000){
        while (y++ < z) {
            if (y % 3 != 0) {
                a++; x--;
                }
            else{
                a--; x++;
                }
            assert (a != x);
        }
    }
}
