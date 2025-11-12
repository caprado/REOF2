void func_001b0ce0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = *(int32_t*)((gp) + -0x6430);                           // 0x001b0ce0: lw $a0, -0x6430($gp)
    v0 = 1;                                                     // 0x001b0ce4: addiu $v0, $zero, 1
    v1 = *(uint16_t*)((a0) + 2);                                // 0x001b0ce8: lhu $v1, 2($a0)
    if (v1 != v0) goto label_0x1b0d0c;                          // 0x001b0cec: bne $v1, $v0, 0x1b0d0c
    /* nop */                                                   // 0x001b0cf0: nop 
    a0 = *(uint8_t*)((a0) + 1);                                 // 0x001b0cf4: lbu $a0, 1($a0)
    v1 = 0x73;                                                  // 0x001b0cf8: addiu $v1, $zero, 0x73
    if (a0 != v1) goto label_0x1b0d0c;                          // 0x001b0cfc: bne $a0, $v1, 0x1b0d0c
    /* nop */                                                   // 0x001b0d00: nop 
    goto label_0x1b0d10;                                        // 0x001b0d04: b 0x1b0d10
    /* nop */                                                   // 0x001b0d08: nop 
label_0x1b0d0c:
label_0x1b0d10:
    return;                                                     // 0x001b0d10: jr $ra
    /* nop */                                                   // 0x001b0d14: nop 
}