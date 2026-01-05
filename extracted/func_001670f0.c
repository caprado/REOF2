void func_001670f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x001670f0: sll $v0, $a1, 3
    sp = sp + -0x30;                                            // 0x001670f4: addiu $sp, $sp, -0x30
    v0 = v0 - a1;                                               // 0x001670f8: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167100: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00167108: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167110: sll $v0, $v0, 2
    s0 = a0 + v0;                                               // 0x00167118: addu $s0, $a0, $v0
    s0 = s0 + 0x1168;                                           // 0x00167120: addiu $s0, $s0, 0x1168
    func_00169b88();  // 169b88                                // 0x00167128: jal 0x169b88
    v1 = *(int32_t*)(s0);                                       // 0x00167130: lw $v1, 0($s0)
    *(uint32_t*)(s1) = v1;                                      // 0x00167138: sw $v1, 0($s1)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0016713c: lw $v0, 4($s0)
    func_00169ba0();  // 169ba0                                // 0x00167140: jal 0x169ba0
    *(uint32_t*)(s2) = v0;                                      // 0x00167144: sw $v0, 0($s2)
    return;                                                     // 0x00167158: jr $ra
    sp = sp + 0x30;                                             // 0x0016715c: addiu $sp, $sp, 0x30
}