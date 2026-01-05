void func_0015bc68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_8, local_c;
    
    sp = sp + -0x30;                                            // 0x0015bc68: addiu $sp, $sp, -0x30
    a2 = g_00227118;  // Global at 0x00227118                   // 0x0015bc70: lw $a2, 0x128($a0)
    if (a2 == 0) goto label_0x15bd2c;                           // 0x0015bc74: beqz $a2, 0x15bd2c
    a3 = g_00227030;  // Global at 0x00227030                   // 0x0015bc78: lw $a3, 0x40($a0)
    v0 = g_0022713c;  // Global at 0x0022713c                   // 0x0015bc7c: lw $v0, 0x14c($a0)
    if (a2 != v0) goto label_0x15bcb0;                          // 0x0015bc80: bnel $a2, $v0, 0x15bcb0
    v0 = g_0022711c;  // Global at 0x0022711c                   // 0x0015bc84: lw $v0, 0x12c($a0)
    v0 = g_00227144;  // Global at 0x00227144                   // 0x0015bc88: lw $v0, 0x154($a0)
    v1 = 1;                                                     // 0x0015bc8c: addiu $v1, $zero, 1
    a0 = str_00227140;  // "E0203261: MWSFCRE_ResetSfdHn: SFD_Stop() failed." // 0x0015bc90: lw $a0, 0x150($a0)
    local_4 = a2;                                               // 0x0015bc94: sw $a2, 4($sp)
    local_0 = v1;                                               // 0x0015bc98: sw $v1, 0($sp)
    local_8 = a0;                                               // 0x0015bc9c: sw $a0, 8($sp)
    local_c = v0;                                               // 0x0015bca0: sw $v0, 0xc($sp)
    goto label_0x15bd00;                                        // 0x0015bca4: b 0x15bd00
    local_10 = 0;                                               // 0x0015bca8: sw $zero, 0x10($sp)
    /* nop */                                                   // 0x0015bcac: nop 
label_0x15bcb0:
    if (a2 != v0) goto label_0x15bce0;                          // 0x0015bcb0: bnel $a2, $v0, 0x15bce0
    v0 = g_0022712c;  // Global at 0x0022712c                   // 0x0015bcb4: lw $v0, 0x13c($a0)
    v0 = g_00227128;  // Global at 0x00227128                   // 0x0015bcb8: lw $v0, 0x138($a0)
    v1 = g_00227120;  // Global at 0x00227120                   // 0x0015bcbc: lw $v1, 0x130($a0)
    a0 = g_00227124;  // Global at 0x00227124                   // 0x0015bcc0: lw $a0, 0x134($a0)
    local_4 = a2;                                               // 0x0015bcc4: sw $a2, 4($sp)
    local_8 = v1;                                               // 0x0015bcc8: sw $v1, 8($sp)
    local_c = a0;                                               // 0x0015bccc: sw $a0, 0xc($sp)
    local_10 = v0;                                              // 0x0015bcd0: sw $v0, 0x10($sp)
    goto label_0x15bd00;                                        // 0x0015bcd4: b 0x15bd00
    local_0 = 0;                                                // 0x0015bcd8: sw $zero, 0($sp)
    /* nop */                                                   // 0x0015bcdc: nop 
label_0x15bce0:
    a1 = g_00227138;  // Global at 0x00227138                   // 0x0015bce0: lw $a1, 0x148($a0)
    v1 = g_00227130;  // Global at 0x00227130                   // 0x0015bce4: lw $v1, 0x140($a0)
    a0 = g_00227134;  // Global at 0x00227134                   // 0x0015bce8: lw $a0, 0x144($a0)
    local_0 = v0;                                               // 0x0015bcec: sw $v0, 0($sp)
    local_4 = a2;                                               // 0x0015bcf0: sw $a2, 4($sp)
    local_8 = v1;                                               // 0x0015bcf4: sw $v1, 8($sp)
    local_c = a0;                                               // 0x0015bcf8: sw $a0, 0xc($sp)
    local_10 = a1;                                              // 0x0015bcfc: sw $a1, 0x10($sp)
label_0x15bd00:
    local_14 = 0;                                               // 0x0015bd00: sw $zero, 0x14($sp)
    func_00173d60();  // 173d60                                // 0x0015bd08: jal 0x173d60
    if (v0 == 0) goto label_0x15bd2c;                           // 0x0015bd10: beqz $v0, 0x15bd2c
    a0 = -0x138;                                                // 0x0015bd14: addiu $a0, $zero, -0x138
    func_0015e7b0();  // 15e7b0                                // 0x0015bd18: jal 0x15e7b0
    /* nop */                                                   // 0x0015bd1c: nop 
    a0 = 0x22 << 16;                                            // 0x0015bd20: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015bd24: jal 0x163410
    a0 = &str_00226ff0;  // "E2053002: not enough work"         // 0x0015bd28: addiu $a0, $a0, 0x6ff0
label_0x15bd2c:
    return;                                                     // 0x0015bd30: jr $ra
    sp = sp + 0x30;                                             // 0x0015bd34: addiu $sp, $sp, 0x30
}