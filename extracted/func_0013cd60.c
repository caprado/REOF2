void func_0013cd60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013cd60: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x13cd80;                           // 0x0013cd64: bnez $a0, 0x13cd80
    a0 = 0x22 << 16;                                            // 0x0013cd6c: lui $a0, 0x22
    func_0013d248();  // 0x13d1b8                                // 0x0013cd70: jal 0x13d1b8
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013cd74: addiu $a0, $a0, 0x5be8
    goto label_0x13cd84;                                        // 0x0013cd78: b 0x13cd84
    v0 = -1;                                                    // 0x0013cd7c: addiu $v0, $zero, -1
label_0x13cd80:
    v0 = g_00225be9;  // Global at 0x00225be9                   // 0x0013cd80: lb $v0, 1($a0)
label_0x13cd84:
    return;                                                     // 0x0013cd88: jr $ra
    sp = sp + 0x10;                                             // 0x0013cd8c: addiu $sp, $sp, 0x10
}