void func_001c74b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_18, local_2c;
    
    sp = sp + -0x30;                                            // 0x001c74b0: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001c74b4: lui $at, 0x31
    v0 = g_00316610;  // Global at 0x00316610                   // 0x001c74bc: lw $v0, 0x6610($at)
    if (v0 != 0) goto label_0x1c74f0;                           // 0x001c74c0: bnez $v0, 0x1c74f0
    a0 = sp + 0x10;                                             // 0x001c74c4: addiu $a0, $sp, 0x10
    func_00107d30();  // 0x107c70                                // 0x001c74cc: jal 0x107c70
    a2 = 0x18;                                                  // 0x001c74d0: addiu $a2, $zero, 0x18
    v0 = 1;                                                     // 0x001c74d4: addiu $v0, $zero, 1
    a0 = sp + 0x10;                                             // 0x001c74d8: addiu $a0, $sp, 0x10
    local_18 = v0;                                              // 0x001c74dc: sw $v0, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001c74e0: jal 0x1142e0
    local_14 = v0;                                              // 0x001c74e4: sw $v0, 0x14($sp)
    at = 0x31 << 16;                                            // 0x001c74e8: lui $at, 0x31
    g_00316610 = v0;  // Global at 0x00316610                   // 0x001c74ec: sw $v0, 0x6610($at)
label_0x1c74f0:
    at = 0x31 << 16;                                            // 0x001c74f0: lui $at, 0x31
    g_00316620 = 0;  // Global at 0x00316620                    // 0x001c74f4: sh $zero, 0x6620($at)
    at = 0x31 << 16;                                            // 0x001c74f8: lui $at, 0x31
    g_00316618 = 0;  // Global at 0x00316618                    // 0x001c74fc: sh $zero, 0x6618($at)
label_0x1c7500:
    a0 = 0x31 << 16;                                            // 0x001c7500: lui $a0, 0x31
    v0 = 0x127 << 16;                                           // 0x001c7504: lui $v0, 0x127
    a0 = a0 + 0x6630;                                           // 0x001c7508: addiu $a0, $a0, 0x6630
    func_001176a8();  // 0x1174d8                                // 0x001c7510: jal 0x1174d8
    a1 = v0 | 0x30;                                             // 0x001c7514: ori $a1, $v0, 0x30
    if (v0 < 0) goto label_0x1c7530;                            // 0x001c7518: bltz $v0, 0x1c7530
    at = 0x31 << 16;                                            // 0x001c751c: lui $at, 0x31
    v0 = g_00316654;  // Global at 0x00316654                   // 0x001c7520: lw $v0, 0x6654($at)
    if (v0 != 0) goto label_0x1c7570;                           // 0x001c7524: bnez $v0, 0x1c7570
    /* nop */                                                   // 0x001c7528: nop 
    /* nop */                                                   // 0x001c752c: nop 
label_0x1c7530:
    v0 = 1 << 16;                                               // 0x001c7530: lui $v0, 1
    local_2c = v0;                                              // 0x001c7534: sw $v0, 0x2c($sp)
    v0 = local_2c;                                              // 0x001c7538: lw $v0, 0x2c($sp)
    if (v0 == 0) goto label_0x1c7500;                           // 0x001c753c: beqz $v0, 0x1c7500
    /* nop */                                                   // 0x001c7540: nop 
    /* nop */                                                   // 0x001c7544: nop 
label_0x1c7548:
    v0 = local_2c;                                              // 0x001c7548: lw $v0, 0x2c($sp)
    v0 = v0 + -1;                                               // 0x001c754c: addiu $v0, $v0, -1
    local_2c = v0;                                              // 0x001c7550: sw $v0, 0x2c($sp)
    v0 = local_2c;                                              // 0x001c7554: lw $v0, 0x2c($sp)
    /* nop */                                                   // 0x001c7558: nop 
    if (v0 != 0) goto label_0x1c7548;                           // 0x001c755c: bnez $v0, 0x1c7548
    /* nop */                                                   // 0x001c7560: nop 
    goto label_0x1c7500;                                        // 0x001c7564: b 0x1c7500
    /* nop */                                                   // 0x001c7568: nop 
    /* nop */                                                   // 0x001c756c: nop 
label_0x1c7570:
    return;                                                     // 0x001c7578: jr $ra
    sp = sp + 0x30;                                             // 0x001c757c: addiu $sp, $sp, 0x30
}