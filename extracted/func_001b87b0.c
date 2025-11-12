void func_001b87b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(uint16_t*)((a0) + 0xbc8);                            // 0x001b87b0: lhu $v0, 0xbc8($a0)
    if (v0 == 0) goto label_0x1b87d8;                           // 0x001b87b4: beqz $v0, 0x1b87d8
    v1 = v0 & 0xffff;                                           // 0x001b87b8: andi $v1, $v0, 0xffff
    v0 = 0x74 << 16;                                            // 0x001b87bc: lui $v0, 0x74
    v1 = v1 + -1;                                               // 0x001b87c0: addiu $v1, $v1, -1
    v0 = v0 + -0x212f;                                          // 0x001b87c4: addiu $v0, $v0, -0x212f
    v1 = v1 << 1;                                               // 0x001b87c8: sll $v1, $v1, 1
    v0 = v0 + v1;                                               // 0x001b87cc: addu $v0, $v0, $v1
    goto label_0x1b87fc;                                        // 0x001b87d0: b 0x1b87fc
    v0 = g_0073ded1;  // Global at 0x0073ded1                   // 0x001b87d4: lb $v0, 0($v0)
label_0x1b87d8:
    a1 = *(uint8_t*)((a0) + 0xbd0);                             // 0x001b87d8: lbu $a1, 0xbd0($a0)
    v0 = 0x74 << 16;                                            // 0x001b87dc: lui $v0, 0x74
    v1 = *(uint8_t*)((a0) + 0xbb0);                             // 0x001b87e0: lbu $v1, 0xbb0($a0)
    v0 = v0 + -0x2000;                                          // 0x001b87e4: addiu $v0, $v0, -0x2000
    a0 = v0 + a1;                                               // 0x001b87e8: addu $a0, $v0, $a1
    v0 = v1 << 2;                                               // 0x001b87ec: sll $v0, $v1, 2
    v0 = v0 + v1;                                               // 0x001b87f0: addu $v0, $v0, $v1
    v0 = v0 + a0;                                               // 0x001b87f4: addu $v0, $v0, $a0
    v0 = g_0073e000;  // Global at 0x0073e000                   // 0x001b87f8: lb $v0, 0($v0)
label_0x1b87fc:
    return;                                                     // 0x001b87fc: jr $ra
    /* nop */                                                   // 0x001b8800: nop 
}