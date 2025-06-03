int main(){
    int a, x, y = 0, z;
    a = __VERIFIER_nondet_int();
    x = __VERIFIER_nondet_int();
    z = __VERIFIER_nondet_int();
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
