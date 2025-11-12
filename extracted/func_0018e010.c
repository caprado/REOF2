void func_0018e010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x18e070;                                        // 0x0018e014: b 0x18e070
    a3 = 0xff;                                                  // 0x0018e018: addiu $a3, $zero, 0xff
label_0x18e01c:
    goto label_0x18e060;                                        // 0x0018e01c: b 0x18e060
label_0x18e024:
    v1 = *(uint8_t*)((a0) + 3);                                 // 0x0018e024: lbu $v1, 3($a0)
    if (v1 != a3) goto label_0x18e038;                          // 0x0018e028: bne $v1, $a3, 0x18e038
    /* nop */                                                   // 0x0018e02c: nop 
    goto label_0x18e054;                                        // 0x0018e030: b 0x18e054
label_0x18e038:
    if (v1 == 0) goto label_0x18e054;                           // 0x0018e038: beqz $v1, 0x18e054
    /* nop */                                                   // 0x0018e03c: nop 
    v1 = (unsigned)v1 >> 1;                                     // 0x0018e040: srl $v1, $v1, 1
    v1 = v1 & 0xff;                                             // 0x0018e044: andi $v1, $v1, 0xff
    if (v1 != 0) goto label_0x18e054;                           // 0x0018e048: bnez $v1, 0x18e054
    /* nop */                                                   // 0x0018e04c: nop 
label_0x18e054:
    *(uint8_t*)((a0) + 3) = v1;                                 // 0x0018e054: sb $v1, 3($a0)
    t1 = t1 + 1;                                                // 0x0018e058: addiu $t1, $t1, 1
    a0 = a0 + 4;                                                // 0x0018e05c: addiu $a0, $a0, 4
label_0x18e060:
    v1 = (t1 < a1) ? 1 : 0;                                     // 0x0018e060: slt $v1, $t1, $a1
    if (v1 != 0) goto label_0x18e024;                           // 0x0018e064: bnez $v1, 0x18e024
    /* nop */                                                   // 0x0018e068: nop 
    t0 = t0 + 1;                                                // 0x0018e06c: addiu $t0, $t0, 1
label_0x18e070:
    v1 = (t0 < a2) ? 1 : 0;                                     // 0x0018e070: slt $v1, $t0, $a2
    if (v1 != 0) goto label_0x18e01c;                           // 0x0018e074: bnez $v1, 0x18e01c
    /* nop */                                                   // 0x0018e078: nop 
    return;                                                     // 0x0018e07c: jr $ra
    /* nop */                                                   // 0x0018e080: nop 
}