void func_0012fcb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012fcb8: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0012fcbc: addiu $v0, $zero, 1
    v1 = *(int8_t*)((a0) + 1);                                  // 0x0012fcc4: lb $v1, 1($a0)
    if (v1 != v0) goto label_0x12fce0;                          // 0x0012fcc8: bne $v1, $v0, 0x12fce0
    v0 = 2;                                                     // 0x0012fccc: addiu $v0, $zero, 2
    return func_0012fc20();  // Tail call                        // 0x0012fcd4: j 0x12fab0
    sp = sp + 0x10;                                             // 0x0012fcd8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012fcdc: nop 
label_0x12fce0:
    if (v1 != v0) goto label_0x12fcf0;                          // 0x0012fce0: bne $v1, $v0, 0x12fcf0
    return func_0012fcb8();  // Tail call                        // 0x0012fce8: j 0x12fc20
    sp = sp + 0x10;                                             // 0x0012fcec: addiu $sp, $sp, 0x10
label_0x12fcf0:
    return;                                                     // 0x0012fcf0: jr $ra
    sp = sp + 0x10;                                             // 0x0012fcf4: addiu $sp, $sp, 0x10
}