void func_001caea0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5e;
    
    sp = sp + -0x60;                                            // 0x001caea0: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001caea8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001caeb4: addu.qb $zero, $sp, $s1
    if (a0 < 0) goto label_0x1caed8;                            // 0x001caec0: bltz $a0, 0x1caed8
    local_5e = 0;                                               // 0x001caec4: sh $zero, 0x5e($sp)
    v0 = (a0 < 3) ? 1 : 0;                                      // 0x001caec8: slti $v0, $a0, 3
    if (v0 != 0) goto label_0x1caef0;                           // 0x001caecc: bnez $v0, 0x1caef0
    /* nop */                                                   // 0x001caed0: nop 
    /* nop */                                                   // 0x001caed4: nop 
label_0x1caed8:
    v0 = 9;                                                     // 0x001caed8: addiu $v0, $zero, 9
    at = 0x31 << 16;                                            // 0x001caedc: lui $at, 0x31
    g_00317698 = v0;  // Global at 0x00317698                   // 0x001caee0: sw $v0, 0x7698($at)
    goto label_0x1cb000;                                        // 0x001caee4: b 0x1cb000
    v0 = -1;                                                    // 0x001caee8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001caeec: nop 
label_0x1caef0:
    v0 = 0x31 << 16;                                            // 0x001caef0: lui $v0, 0x31
    v1 = a0 << 2;                                               // 0x001caef4: sll $v1, $a0, 2
    v0 = v0 + 0x76a0;                                           // 0x001caef8: addiu $v0, $v0, 0x76a0
    s0 = v0 + v1;                                               // 0x001caefc: addu $s0, $v0, $v1
    v0 = *(int32_t*)(s0);                                       // 0x001caf00: lw $v0, 0($s0)
    if (v0 >= 0) goto label_0x1caf20;                           // 0x001caf04: bgez $v0, 0x1caf20
    v1 = 9;                                                     // 0x001caf08: addiu $v1, $zero, 9
    at = 0x31 << 16;                                            // 0x001caf0c: lui $at, 0x31
    v0 = -1;                                                    // 0x001caf10: addiu $v0, $zero, -1
    goto label_0x1cb000;                                        // 0x001caf14: b 0x1cb000
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001caf18: sw $v1, 0x7698($at)
    /* nop */                                                   // 0x001caf1c: nop 
label_0x1caf20:
    v0 = s1 + 1;                                                // 0x001caf28: addiu $v0, $s1, 1
    at = (v0 < 0x41a0) ? 1 : 0;                                 // 0x001caf38: slti $at, $v0, 0x41a0
    if (at == 0) goto label_0x1cafc0;                           // 0x001caf3c: beqz $at, 0x1cafc0
    /* nop */                                                   // 0x001caf44: nop 
label_0x1caf48:
    a0 = *(int16_t*)(s0);                                       // 0x001caf48: lh $a0, 0($s0)
    a1 = sp + 0x5e;                                             // 0x001caf4c: addiu $a1, $sp, 0x5e
    a2 = sp + 0x5c;                                             // 0x001caf50: addiu $a2, $sp, 0x5c
    func_001c7b50();  // 1c7b50                                // 0x001caf54: jal 0x1c7b50
    a3 = sp + 0x5a;                                             // 0x001caf58: addiu $a3, $sp, 0x5a
    if (v0 >= 0) goto label_0x1caf80;                           // 0x001caf64: bgez $v0, 0x1caf80
    v1 = 0x68;                                                  // 0x001caf68: addiu $v1, $zero, 0x68
    at = 0x31 << 16;                                            // 0x001caf6c: lui $at, 0x31
    v0 = -1;                                                    // 0x001caf70: addiu $v0, $zero, -1
    goto label_0x1cb000;                                        // 0x001caf74: b 0x1cb000
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001caf78: sw $v1, 0x7698($at)
    /* nop */                                                   // 0x001caf7c: nop 
label_0x1caf80:
    v1 = local_5e;                                              // 0x001caf80: lh $v1, 0x5e($sp)
    v0 = 2;                                                     // 0x001caf84: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1caf98;                          // 0x001caf88: beq $v1, $v0, 0x1caf98
    v0 = 3;                                                     // 0x001caf8c: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x1cafc0;                          // 0x001caf90: bne $v1, $v0, 0x1cafc0
    /* nop */                                                   // 0x001caf94: nop 
label_0x1caf98:
    func_001cb250();  // 1cb250                                // 0x001caf98: jal 0x1cb250
    /* nop */                                                   // 0x001caf9c: nop 
    v0 = s1 + 1;                                                // 0x001cafa4: addiu $v0, $s1, 1
    v0 = (v0 < 0x41a0) ? 1 : 0;                                 // 0x001cafb4: slti $v0, $v0, 0x41a0
    if (v0 != 0) goto label_0x1caf48;                           // 0x001cafb8: bnez $v0, 0x1caf48
label_0x1cafc0:
    a0 = *(int16_t*)(s0);                                       // 0x001cafc0: lh $a0, 0($s0)
    func_001c7c00();  // 1c7c00                                // 0x001cafcc: jal 0x1c7c00
    if (v0 >= 0) goto label_0x1caff8;                           // 0x001cafdc: bgez $v0, 0x1caff8
    v1 = 0x68;                                                  // 0x001cafe0: addiu $v1, $zero, 0x68
    at = 0x31 << 16;                                            // 0x001cafe4: lui $at, 0x31
    v0 = -1;                                                    // 0x001cafe8: addiu $v0, $zero, -1
    goto label_0x1cb000;                                        // 0x001cafec: b 0x1cb000
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001caff0: sw $v1, 0x7698($at)
    /* nop */                                                   // 0x001caff4: nop 
label_0x1caff8:
label_0x1cb000:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cb008: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cb00c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cb010: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cb014: jr $ra
    sp = sp + 0x60;                                             // 0x001cb018: addiu $sp, $sp, 0x60
}