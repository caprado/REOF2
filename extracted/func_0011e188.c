void func_0011e188() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0011e188: lw $v0, 4($a0)
    if (v0 == 0) goto label_0x11e19c;                           // 0x0011e18c: beqz $v0, 0x11e19c
    v1 = *(int32_t*)(a0);                                       // 0x0011e190: lw $v1, 0($a0)
    goto label_0x11e1a4;                                        // 0x0011e194: b 0x11e1a4
    g_001f0000 = v1;  // Global at 0x001f0000                   // 0x0011e198: sw $v1, 0($v0)
label_0x11e19c:
    v0 = 0x1f << 16;                                            // 0x0011e19c: lui $v0, 0x1f
    g_001f1a00 = v1;  // Global at 0x001f1a00                   // 0x0011e1a0: sw $v1, 0x1a00($v0)
label_0x11e1a4:
    /* beqzl $v1, 0x11e1b8 */                                   // 0x0011e1a4: beqzl $v1, 0x11e1b8
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0011e1a8: sw $zero, 4($a0)
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0011e1ac: lw $v0, 4($a0)
    *(uint32_t*)((v1) + 4) = v0;                                // 0x0011e1b0: sw $v0, 4($v1)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0011e1b4: sw $zero, 4($a0)
    return;                                                     // 0x0011e1b8: jr $ra
}