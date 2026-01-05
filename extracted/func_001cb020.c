void func_001cb020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001cb020: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cb028: addu.qb $zero, $sp, $s1
    if (s0 < 0) goto label_0x1cb048;                            // 0x001cb034: bltz $s0, 0x1cb048
    v0 = (s0 < 3) ? 1 : 0;                                      // 0x001cb038: slti $v0, $s0, 3
    if (v0 != 0) goto label_0x1cb060;                           // 0x001cb03c: bnez $v0, 0x1cb060
    /* nop */                                                   // 0x001cb040: nop 
    /* nop */                                                   // 0x001cb044: nop 
label_0x1cb048:
    v0 = 9;                                                     // 0x001cb048: addiu $v0, $zero, 9
    at = 0x31 << 16;                                            // 0x001cb04c: lui $at, 0x31
    g_00317698 = v0;  // Global at 0x00317698                   // 0x001cb050: sw $v0, 0x7698($at)
    goto label_0x1cb118;                                        // 0x001cb054: b 0x1cb118
    v0 = -1;                                                    // 0x001cb058: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001cb05c: nop 
label_0x1cb060:
    func_001ca260();  // 1ca260                                // 0x001cb060: jal 0x1ca260
    /* nop */                                                   // 0x001cb064: nop 
    v0 = 0x31 << 16;                                            // 0x001cb068: lui $v0, 0x31
    s0 = s0 << 2;                                               // 0x001cb06c: sll $s0, $s0, 2
    v0 = v0 + 0x76a0;                                           // 0x001cb070: addiu $v0, $v0, 0x76a0
    s1 = v0 + s0;                                               // 0x001cb074: addu $s1, $v0, $s0
    v1 = *(int32_t*)(s1);                                       // 0x001cb078: lw $v1, 0($s1)
    v0 = -2;                                                    // 0x001cb07c: addiu $v0, $zero, -2
    if (v1 != v0) goto label_0x1cb0a8;                          // 0x001cb080: bne $v1, $v0, 0x1cb0a8
    v0 = 0x31 << 16;                                            // 0x001cb084: lui $v0, 0x31
    v1 = -1;                                                    // 0x001cb088: addiu $v1, $zero, -1
    v0 = v0 + 0x7680;                                           // 0x001cb08c: addiu $v0, $v0, 0x7680
    *(uint32_t*)(s1) = v1;                                      // 0x001cb090: sw $v1, 0($s1)
    v0 = v0 + s0;                                               // 0x001cb094: addu $v0, $v0, $s0
    func_001ca270();  // 1ca270                                // 0x001cb098: jal 0x1ca270
    g_00317680 = v1;  // Global at 0x00317680                   // 0x001cb09c: sw $v1, 0($v0)
    goto label_0x1cb118;                                        // 0x001cb0a0: b 0x1cb118
label_0x1cb0a8:
    func_001ca270();  // 1ca270                                // 0x001cb0a8: jal 0x1ca270
    /* nop */                                                   // 0x001cb0ac: nop 
    v0 = *(int32_t*)(s1);                                       // 0x001cb0b0: lw $v0, 0($s1)
    if (v0 >= 0) goto label_0x1cb0d0;                           // 0x001cb0b4: bgez $v0, 0x1cb0d0
    v1 = 9;                                                     // 0x001cb0b8: addiu $v1, $zero, 9
    at = 0x31 << 16;                                            // 0x001cb0bc: lui $at, 0x31
    v0 = -1;                                                    // 0x001cb0c0: addiu $v0, $zero, -1
    goto label_0x1cb118;                                        // 0x001cb0c4: b 0x1cb118
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001cb0c8: sw $v1, 0x7698($at)
    /* nop */                                                   // 0x001cb0cc: nop 
label_0x1cb0d0:
    func_001ca260();  // 1ca260                                // 0x001cb0d0: jal 0x1ca260
    /* nop */                                                   // 0x001cb0d4: nop 
    v0 = 0x31 << 16;                                            // 0x001cb0d8: lui $v0, 0x31
    v0 = v0 + 0x76a0;                                           // 0x001cb0dc: addiu $v0, $v0, 0x76a0
    s1 = v0 + s0;                                               // 0x001cb0e0: addu $s1, $v0, $s0
    func_001c7b00();  // 1c7b00                                // 0x001cb0e4: jal 0x1c7b00
    a0 = *(int16_t*)(s1);                                       // 0x001cb0e8: lh $a0, 0($s1)
    func_001c7e90();  // 1c7e90                                // 0x001cb0ec: jal 0x1c7e90
    a0 = *(int16_t*)(s1);                                       // 0x001cb0f0: lh $a0, 0($s1)
    v0 = 0x31 << 16;                                            // 0x001cb0f4: lui $v0, 0x31
    v1 = -1;                                                    // 0x001cb0f8: addiu $v1, $zero, -1
    v0 = v0 + 0x7680;                                           // 0x001cb0fc: addiu $v0, $v0, 0x7680
    *(uint32_t*)(s1) = v1;                                      // 0x001cb100: sw $v1, 0($s1)
    v0 = v0 + s0;                                               // 0x001cb104: addu $v0, $v0, $s0
    func_001ca270();  // 1ca270                                // 0x001cb108: jal 0x1ca270
    g_00317680 = v1;  // Global at 0x00317680                   // 0x001cb10c: sw $v1, 0($v0)
    /* nop */                                                   // 0x001cb114: nop 
label_0x1cb118:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cb11c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cb120: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cb124: jr $ra
    sp = sp + 0x30;                                             // 0x001cb128: addiu $sp, $sp, 0x30
}