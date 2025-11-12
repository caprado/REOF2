void func_0012d2f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012d2f8: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x0012d2fc: addiu $v0, $zero, 2
    v1 = *(int8_t*)((a0) + 1);                                  // 0x0012d304: lb $v1, 1($a0)
    if (v1 != v0) goto label_0x12d320;                          // 0x0012d308: bne $v1, $v0, 0x12d320
    v0 = 1;                                                     // 0x0012d30c: addiu $v0, $zero, 1
    return func_0012d2f8();  // Tail call                        // 0x0012d314: j 0x12d250
    sp = sp + 0x10;                                             // 0x0012d318: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012d31c: nop 
label_0x12d320:
    if (v1 != v0) goto label_0x12d330;                          // 0x0012d320: bne $v1, $v0, 0x12d330
    return func_0012cb78();  // Tail call                        // 0x0012d328: j 0x12c9a0
    sp = sp + 0x10;                                             // 0x0012d32c: addiu $sp, $sp, 0x10
label_0x12d330:
    return;                                                     // 0x0012d330: jr $ra
    sp = sp + 0x10;                                             // 0x0012d334: addiu $sp, $sp, 0x10
}