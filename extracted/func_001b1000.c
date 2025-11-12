void func_001b1000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x4c << 16;                                            // 0x001b1000: lui $a1, 0x4c
    goto label_0x1b102c;                                        // 0x001b1008: b 0x1b102c
    a1 = a1 + 0x3090;                                           // 0x001b100c: addiu $a1, $a1, 0x3090
label_0x1b1010:
    v0 = g_004c3090;  // Global at 0x004c3090                   // 0x001b1010: lw $v0, 0($a1)
    if (v0 != a0) goto label_0x1b1024;                          // 0x001b1014: bne $v0, $a0, 0x1b1024
    v0 = 1;                                                     // 0x001b1018: addiu $v0, $zero, 1
    goto label_0x1b1038;                                        // 0x001b101c: b 0x1b1038
    /* nop */                                                   // 0x001b1020: nop 
label_0x1b1024:
    v1 = v1 + 1;                                                // 0x001b1024: addiu $v1, $v1, 1
    a1 = a1 + 4;                                                // 0x001b1028: addiu $a1, $a1, 4
label_0x1b102c:
    v0 = (v1 < 0x480) ? 1 : 0;                                  // 0x001b102c: slti $v0, $v1, 0x480
    if (v0 != 0) goto label_0x1b1010;                           // 0x001b1030: bnez $v0, 0x1b1010
label_0x1b1038:
    return;                                                     // 0x001b1038: jr $ra
    /* nop */                                                   // 0x001b103c: nop 
}