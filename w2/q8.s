int main(void) {
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


main:

outer_loop_init:
outer_loop_cond:
outer_loop_body:

inner_loop_init:
inner_loop_cond:
inner_loop_body:
inner_loop_incr:
inner_loop_end:

outer_loop_incr:
outer_loop_end: