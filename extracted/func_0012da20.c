void func_0012da20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a2 + 0x1f;                                             // 0x0012da20: addiu $v1, $a2, 0x1f
    a2 = a2 + 0x3e;                                             // 0x0012da24: addiu $a2, $a2, 0x3e
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x0012da28: slti $v0, $v1, 0
    if (v0 != 0) v1 = a2;                                       // 0x0012da2c: movn $v1, $a2, $v0
    v1 = v1 >> 5;                                               // 0x0012da30: sra $v1, $v1, 5
    /* multiply: v1 * a0 -> hi:lo */                            // 0x0012da34: mult $ac3, $v1, $a0
    v0 = v1 << 3;                                               // 0x0012da38: sll $v0, $v1, 3
    v0 = v0 + v1;                                               // 0x0012da3c: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x0012da40: sll $v0, $v0, 1
    v0 = v0 + a1;                                               // 0x0012da44: addu $v0, $v0, $a1
    return;                                                     // 0x0012da48: jr $ra
    v0 = v0 + 4;                                                // 0x0012da4c: addiu $v0, $v0, 4
}