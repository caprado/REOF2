void func_001ca6b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5e;
    
    sp = sp + -0x60;                                            // 0x001ca6b0: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ca6b8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ca6c0: addu.qb $zero, $sp, $s1
    if (a0 < 0) goto label_0x1ca6e0;                            // 0x001ca6c8: bltz $a0, 0x1ca6e0
    local_5e = 0;                                               // 0x001ca6cc: sh $zero, 0x5e($sp)
    v0 = (a0 < 3) ? 1 : 0;                                      // 0x001ca6d0: slti $v0, $a0, 3
    if (v0 != 0) goto label_0x1ca6f8;                           // 0x001ca6d4: bnez $v0, 0x1ca6f8
    /* nop */                                                   // 0x001ca6d8: nop 
    /* nop */                                                   // 0x001ca6dc: nop 
label_0x1ca6e0:
    v0 = 9;                                                     // 0x001ca6e0: addiu $v0, $zero, 9
    at = 0x31 << 16;                                            // 0x001ca6e4: lui $at, 0x31
    g_00317698 = v0;  // Global at 0x00317698                   // 0x001ca6e8: sw $v0, 0x7698($at)
    goto label_0x1ca890;                                        // 0x001ca6ec: b 0x1ca890
    v0 = -1;                                                    // 0x001ca6f0: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001ca6f4: nop 
label_0x1ca6f8:
    v1 = 0x31 << 16;                                            // 0x001ca6f8: lui $v1, 0x31
    s0 = a0 << 2;                                               // 0x001ca6fc: sll $s0, $a0, 2
    v1 = v1 + 0x76a0;                                           // 0x001ca700: addiu $v1, $v1, 0x76a0
    s1 = v1 + s0;                                               // 0x001ca704: addu $s1, $v1, $s0
    v0 = -2;                                                    // 0x001ca708: addiu $v0, $zero, -2
    v1 = *(int32_t*)(s1);                                       // 0x001ca70c: lw $v1, 0($s1)
    if (v1 == v0) goto label_0x1ca728;                          // 0x001ca710: beq $v1, $v0, 0x1ca728
    v1 = 9;                                                     // 0x001ca714: addiu $v1, $zero, 9
    at = 0x31 << 16;                                            // 0x001ca718: lui $at, 0x31
    v0 = -1;                                                    // 0x001ca71c: addiu $v0, $zero, -1
    goto label_0x1ca890;                                        // 0x001ca720: b 0x1ca890
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001ca724: sw $v1, 0x7698($at)
label_0x1ca728:
    a0 = *(int32_t*)((a1) + 4);                                 // 0x001ca728: lw $a0, 4($a1)
    a1 = *(uint16_t*)((a1) + 2);                                // 0x001ca72c: lhu $a1, 2($a1)
    func_001c7ab0();  // 0x1c7a40                                // 0x001ca730: jal 0x1c7a40
    if (s2 >= 0) goto label_0x1ca758;                           // 0x001ca740: bgez $s2, 0x1ca758
    v1 = 0x76;                                                  // 0x001ca744: addiu $v1, $zero, 0x76
    at = 0x31 << 16;                                            // 0x001ca748: lui $at, 0x31
    v0 = -1;                                                    // 0x001ca74c: addiu $v0, $zero, -1
    goto label_0x1ca890;                                        // 0x001ca750: b 0x1ca890
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001ca754: sw $v1, 0x7698($at)
label_0x1ca758:
    func_001ca270();  // 0x1ca260                                // 0x001ca758: jal 0x1ca260
    /* nop */                                                   // 0x001ca75c: nop 
    func_001ca280();  // 0x1ca270                                // 0x001ca760: jal 0x1ca270
    *(uint32_t*)(s1) = s2;                                      // 0x001ca764: sw $s2, 0($s1)
    v0 = s3 + 1;                                                // 0x001ca770: addiu $v0, $s3, 1
    at = (v0 < 0x41a0) ? 1 : 0;                                 // 0x001ca780: slti $at, $v0, 0x41a0
    if (at == 0) goto label_0x1ca868;                           // 0x001ca784: beqz $at, 0x1ca868
    v1 = 0x31 << 16;                                            // 0x001ca78c: lui $v1, 0x31
    v0 = 0x31 << 16;                                            // 0x001ca790: lui $v0, 0x31
    v1 = v1 + 0x7680;                                           // 0x001ca794: addiu $v1, $v1, 0x7680
    v0 = v0 + 0x76a0;                                           // 0x001ca798: addiu $v0, $v0, 0x76a0
    s2 = v1 + s0;                                               // 0x001ca79c: addu $s2, $v1, $s0
    s1 = v0 + s0;                                               // 0x001ca7a0: addu $s1, $v0, $s0
    /* nop */                                                   // 0x001ca7a4: nop 
label_0x1ca7a8:
    func_001ca270();  // 0x1ca260                                // 0x001ca7a8: jal 0x1ca260
    /* nop */                                                   // 0x001ca7ac: nop 
    v1 = *(int32_t*)(s2);                                       // 0x001ca7b0: lw $v1, 0($s2)
    v0 = 1;                                                     // 0x001ca7b4: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1ca7e8;                          // 0x001ca7b8: bne $v1, $v0, 0x1ca7e8
    v0 = 0x31 << 16;                                            // 0x001ca7bc: lui $v0, 0x31
    a0 = -1;                                                    // 0x001ca7c0: addiu $a0, $zero, -1
    v0 = v0 + 0x7680;                                           // 0x001ca7c4: addiu $v0, $v0, 0x7680
    at = 0x31 << 16;                                            // 0x001ca7c8: lui $at, 0x31
    v1 = v0 + s0;                                               // 0x001ca7cc: addu $v1, $v0, $s0
    v0 = 0x71;                                                  // 0x001ca7d0: addiu $v0, $zero, 0x71
    g_00317680 = a0;  // Global at 0x00317680                   // 0x001ca7d4: sw $a0, 0($v1)
    func_001ca280();  // 0x1ca270                                // 0x001ca7d8: jal 0x1ca270
    g_00317698 = v0;  // Global at 0x00317698                   // 0x001ca7dc: sw $v0, 0x7698($at)
    goto label_0x1ca890;                                        // 0x001ca7e0: b 0x1ca890
    v0 = -1;                                                    // 0x001ca7e4: addiu $v0, $zero, -1
label_0x1ca7e8:
    func_001ca280();  // 0x1ca270                                // 0x001ca7e8: jal 0x1ca270
    /* nop */                                                   // 0x001ca7ec: nop 
    a0 = *(int16_t*)(s1);                                       // 0x001ca7f0: lh $a0, 0($s1)
    a1 = sp + 0x5e;                                             // 0x001ca7f4: addiu $a1, $sp, 0x5e
    a2 = sp + 0x5c;                                             // 0x001ca7f8: addiu $a2, $sp, 0x5c
    func_001c7c00();  // 0x1c7b50                                // 0x001ca7fc: jal 0x1c7b50
    a3 = sp + 0x5a;                                             // 0x001ca800: addiu $a3, $sp, 0x5a
    if (v0 >= 0) goto label_0x1ca828;                           // 0x001ca80c: bgez $v0, 0x1ca828
    v1 = 0x68;                                                  // 0x001ca810: addiu $v1, $zero, 0x68
    at = 0x31 << 16;                                            // 0x001ca814: lui $at, 0x31
    v0 = -1;                                                    // 0x001ca818: addiu $v0, $zero, -1
    goto label_0x1ca890;                                        // 0x001ca81c: b 0x1ca890
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001ca820: sw $v1, 0x7698($at)
    /* nop */                                                   // 0x001ca824: nop 
label_0x1ca828:
    v1 = local_5e;                                              // 0x001ca828: lh $v1, 0x5e($sp)
    v0 = 2;                                                     // 0x001ca82c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1ca840;                          // 0x001ca830: beq $v1, $v0, 0x1ca840
    v0 = 3;                                                     // 0x001ca834: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x1ca868;                          // 0x001ca838: bne $v1, $v0, 0x1ca868
    /* nop */                                                   // 0x001ca83c: nop 
label_0x1ca840:
    func_001cb2a0();  // 0x1cb250                                // 0x001ca840: jal 0x1cb250
    /* nop */                                                   // 0x001ca844: nop 
    v0 = s3 + 1;                                                // 0x001ca84c: addiu $v0, $s3, 1
    v0 = (v0 < 0x41a0) ? 1 : 0;                                 // 0x001ca85c: slti $v0, $v0, 0x41a0
    if (v0 != 0) goto label_0x1ca7a8;                           // 0x001ca860: bnez $v0, 0x1ca7a8
label_0x1ca868:
    v1 = local_5e;                                              // 0x001ca868: lh $v1, 0x5e($sp)
    v0 = 4;                                                     // 0x001ca86c: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1ca888;                          // 0x001ca870: beq $v1, $v0, 0x1ca888
    v1 = 0x68;                                                  // 0x001ca874: addiu $v1, $zero, 0x68
    at = 0x31 << 16;                                            // 0x001ca878: lui $at, 0x31
    v0 = -1;                                                    // 0x001ca87c: addiu $v0, $zero, -1
    goto label_0x1ca890;                                        // 0x001ca880: b 0x1ca890
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001ca884: sw $v1, 0x7698($at)
label_0x1ca888:
    /* nop */                                                   // 0x001ca88c: nop 
label_0x1ca890:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ca898: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ca89c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ca8a0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ca8a4: jr $ra
    sp = sp + 0x60;                                             // 0x001ca8a8: addiu $sp, $sp, 0x60
}