void func_0011ea70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = (unsigned)a0 >> 0xa;                                   // 0x0011ea70: srl $v0, $a0, 0xa
    if (a0 < 0) goto label_0x11ea8c;                            // 0x0011ea74: bltz $a0, 0x11ea8c
    a1 = v0 << 6;                                               // 0x0011ea78: sll $a1, $v0, 6
    v1 = *(int32_t*)((a1) + 8);                                 // 0x0011ea7c: lw $v1, 8($a1)
    v0 = a0 & 0x3ff;                                            // 0x0011ea80: andi $v0, $a0, 0x3ff
    if (v0 == v1) return;  // Branch to 0x11ea94                // 0x0011ea84: beql $v0, $v1, 0x11ea94
    v0 = *(int32_t*)((a1) + 0xc);                               // 0x0011ea88: lw $v0, 0xc($a1)
label_0x11ea8c:
    return;                                                     // 0x0011ea8c: jr $ra
    v0 = -1;                                                    // 0x0011ea90: addiu $v0, $zero, -1
}