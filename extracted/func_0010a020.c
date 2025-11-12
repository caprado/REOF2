void func_0010a020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010a020: addiu $sp, $sp, -0x10
    v1 = 9;                                                     // 0x0010a024: addiu $v1, $zero, 9
    v0 = *(uint16_t*)((a0) + 0xc);                              // 0x0010a02c: lhu $v0, 0xc($a0)
    v0 = v0 & 9;                                                // 0x0010a030: andi $v0, $v0, 9
    if (v0 != v1) goto label_0x10a048;                          // 0x0010a034: bne $v0, $v1, 0x10a048
    return func_001051d0();  // Tail call                        // 0x0010a03c: j 0x1050b8
    sp = sp + 0x10;                                             // 0x0010a040: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0010a044: nop 
label_0x10a048:
    return;                                                     // 0x0010a04c: jr $ra
    sp = sp + 0x10;                                             // 0x0010a050: addiu $sp, $sp, 0x10
}