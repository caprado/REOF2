void func_001b1090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x4c << 16;                                            // 0x001b1090: lui $a0, 0x4c
    goto label_0x1b10c0;                                        // 0x001b1098: b 0x1b10c0
    a0 = a0 + 0x2e30;                                           // 0x001b109c: addiu $a0, $a0, 0x2e30
label_0x1b10a0:
    a1 = a0 + v1;                                               // 0x001b10a0: addu $a1, $a0, $v1
    v1 = *(uint8_t*)(a1);                                       // 0x001b10a4: lbu $v1, 0($a1)
    if (v1 != 0) goto label_0x1b10b8;                           // 0x001b10a8: bnez $v1, 0x1b10b8
    v1 = 1;                                                     // 0x001b10ac: addiu $v1, $zero, 1
    goto label_0x1b10d4;                                        // 0x001b10b0: b 0x1b10d4
    *(uint8_t*)(a1) = v1;                                       // 0x001b10b4: sb $v1, 0($a1)
label_0x1b10b8:
    v0 = v0 + 1;                                                // 0x001b10b8: addiu $v0, $v0, 1
    v0 = v0 & 0xffff;                                           // 0x001b10bc: andi $v0, $v0, 0xffff
label_0x1b10c0:
    v1 = v0 & 0xffff;                                           // 0x001b10c0: andi $v1, $v0, 0xffff
    v1 = (v1 < 0x258) ? 1 : 0;                                  // 0x001b10c4: slti $v1, $v1, 0x258
    if (v1 != 0) goto label_0x1b10a0;                           // 0x001b10c8: bnez $v1, 0x1b10a0
    v1 = v0 & 0xffff;                                           // 0x001b10cc: andi $v1, $v0, 0xffff
label_0x1b10d4:
    return;                                                     // 0x001b10d4: jr $ra
    /* nop */                                                   // 0x001b10d8: nop 
}