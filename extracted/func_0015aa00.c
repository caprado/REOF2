void func_0015aa00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015aa00: addiu $sp, $sp, -0x30
    a2 = -1;                                                    // 0x0015aa24: addiu $a2, $zero, -1
    a0 = *(int32_t*)(s2);                                       // 0x0015aa28: lw $a0, 0($s2)
    func_00158410();  // 158410                                // 0x0015aa2c: jal 0x158410
    a1 = *(int32_t*)(s1);                                       // 0x0015aa30: lw $a1, 0($s1)
    if (s0 != 0) goto label_0x15aa58;                           // 0x0015aa3c: bnez $s0, 0x15aa58
    a1 = *(int32_t*)(s1);                                       // 0x0015aa44: lw $a1, 0($s1)
    a0 = *(int32_t*)(s2);                                       // 0x0015aa48: lw $a0, 0($s2)
    goto label_0x15aa6c;                                        // 0x0015aa4c: b 0x15aa6c
    /* nop */                                                   // 0x0015aa54: nop 
label_0x15aa58:
    func_00158278();  // 158278                                // 0x0015aa58: jal 0x158278
    /* nop */                                                   // 0x0015aa5c: nop 
    a0 = *(int32_t*)(s2);                                       // 0x0015aa60: lw $a0, 0($s2)
    v1 = *(int32_t*)(s1);                                       // 0x0015aa64: lw $v1, 0($s1)
    a1 = s0 - a0;                                               // 0x0015aa68: subu $a1, $s0, $a0
label_0x15aa6c:
    v1 = v1 - a1;                                               // 0x0015aa6c: subu $v1, $v1, $a1
    a0 = a0 + a1;                                               // 0x0015aa70: addu $a0, $a0, $a1
    *(uint32_t*)(s1) = v1;                                      // 0x0015aa74: sw $v1, 0($s1)
    *(uint32_t*)(s2) = a0;                                      // 0x0015aa78: sw $a0, 0($s2)
    v1 = *(int32_t*)(s3);                                       // 0x0015aa7c: lw $v1, 0($s3)
    v1 = v1 + a1;                                               // 0x0015aa84: addu $v1, $v1, $a1
    *(uint32_t*)(s3) = v1;                                      // 0x0015aa8c: sw $v1, 0($s3)
    return;                                                     // 0x0015aa9c: jr $ra
    sp = sp + 0x30;                                             // 0x0015aaa0: addiu $sp, $sp, 0x30
}