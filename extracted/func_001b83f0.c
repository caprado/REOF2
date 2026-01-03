void func_001b83f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b83f0: addiu $sp, $sp, -0x10
    v1 = *(uint8_t*)((a0) + 2);                                 // 0x001b83f8: lbu $v1, 2($a0)
    if (v1 != 0) goto label_0x1b8420;                           // 0x001b83fc: bnez $v1, 0x1b8420
    /* nop */                                                   // 0x001b8400: nop 
    a2 = *(uint8_t*)((a0) + 3);                                 // 0x001b8404: lbu $a2, 3($a0)
    a3 = a0 + 0x38;                                             // 0x001b8408: addiu $a3, $a0, 0x38
    t0 = 1;                                                     // 0x001b840c: addiu $t0, $zero, 1
    func_001b8b40();  // 1b8b40                                // 0x001b8418: jal 0x1b8b40
    a0 = a2 + 4;                                                // 0x001b841c: addiu $a0, $a2, 4
label_0x1b8420:
    return;                                                     // 0x001b8424: jr $ra
    sp = sp + 0x10;                                             // 0x001b8428: addiu $sp, $sp, 0x10
}