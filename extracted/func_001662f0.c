void func_001662f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001662f0: addiu $sp, $sp, -0x20
    a1 = 6;                                                     // 0x001662fc: addiu $a1, $zero, 6
    func_001752f8();  // 0x1752e8                                // 0x00166308: jal 0x1752e8
    a1 = 3;                                                     // 0x00166318: addiu $a1, $zero, 3
    a2 = 8;                                                     // 0x0016631c: addiu $a2, $zero, 8
    if (v0 == 0) goto label_0x166330;                           // 0x00166320: beqz $v0, 0x166330
    func_00177908();  // 0x1778a0                                // 0x00166328: jal 0x1778a0
    /* nop */                                                   // 0x0016632c: nop 
label_0x166330:
    return;                                                     // 0x0016633c: jr $ra
    sp = sp + 0x20;                                             // 0x00166340: addiu $sp, $sp, 0x20
}