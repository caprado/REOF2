void func_001005b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_4, local_8;
    
    sp = sp + -0x60;                                            // 0x001005b0: addiu $sp, $sp, -0x60
    v1 = -1;                                                    // 0x001005b4: addiu $v1, $zero, -1
    s1 = 0x1f << 16;                                            // 0x001005bc: lui $s1, 0x1f
    v0 = g_001edf28;  // Global at 0x001edf28                   // 0x001005c4: lw $v0, -0x20d8($s1)
    if (v0 == v1) goto label_0x1005f8;                          // 0x001005cc: beq $v0, $v1, 0x1005f8
    s0 = 0x1f << 16;                                            // 0x001005d4: lui $s0, 0x1f
    v0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x001005d8: lw $v0, -0x20d4($s0)
    if (v0 == v1) goto label_0x1005fc;                          // 0x001005dc: beq $v0, $v1, 0x1005fc
    s2 = 0x1f << 16;                                            // 0x001005e0: lui $s2, 0x1f
    v0 = g_001edf30;  // Global at 0x001edf30                   // 0x001005e4: lw $v0, -0x20d0($s2)
    if (v0 != v1) goto label_0x100654;                          // 0x001005e8: bne $v0, $v1, 0x100654
    goto label_0x100604;                                        // 0x001005f0: b 0x100604
    v0 = 1;                                                     // 0x001005f4: addiu $v0, $zero, 1
label_0x1005f8:
    s0 = 0x1f << 16;                                            // 0x001005f8: lui $s0, 0x1f
label_0x1005fc:
    s2 = 0x1f << 16;                                            // 0x001005fc: lui $s2, 0x1f
    v0 = 1;                                                     // 0x00100600: addiu $v0, $zero, 1
label_0x100604:
    local_14 = 0;                                               // 0x00100604: sw $zero, 0x14($sp)
    local_4 = v0;                                               // 0x00100608: sw $v0, 4($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00100610: jal 0x1142e0
    local_8 = v0;                                               // 0x00100614: sw $v0, 8($sp)
    DeleteSema();  // 0x1142e0                                  // 0x0010061c: jal 0x1142e0
    g_001edf28 = v0;  // Global at 0x001edf28                   // 0x00100620: sw $v0, -0x20d8($s1)
    DeleteSema();  // 0x1142e0                                  // 0x00100628: jal 0x1142e0
    g_001edf2c = v0;  // Global at 0x001edf2c                   // 0x0010062c: sw $v0, -0x20d4($s0)
    g_001edf30 = v0;  // Global at 0x001edf30                   // 0x00100630: sw $v0, -0x20d0($s2)
    DeleteSema();  // 0x1142e0                                  // 0x00100638: jal 0x1142e0
    local_8 = 0;                                                // 0x0010063c: sw $zero, 8($sp)
    v1 = 0x1f << 16;                                            // 0x00100640: lui $v1, 0x1f
    g_001edf20 = v0;  // Global at 0x001edf20                   // 0x00100644: sw $v0, -0x20e0($v1)
    v0 = 0x1f << 16;                                            // 0x00100648: lui $v0, 0x1f
    g_001edf34 = 0;  // Global at 0x001edf34                    // 0x0010064c: sw $zero, -0x20cc($v0)
label_0x100654:
    return;                                                     // 0x00100660: jr $ra
    sp = sp + 0x60;                                             // 0x00100664: addiu $sp, $sp, 0x60
}