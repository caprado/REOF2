void func_0012ed50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_12, local_14, local_16, local_18, local_4;
    
    sp = sp + -0x70;                                            // 0x0012ed50: addiu $sp, $sp, -0x70
    v0 = 0x20 << 16;                                            // 0x0012ed54: lui $v0, 0x20
    a0 = g_001fed5c;  // Global at 0x001fed5c                   // 0x0012ed60: lw $a0, -0x12a4($v0)
    func_0010af38();  // 0x10ae00                                // 0x0012ed88: jal 0x10ae00
    v0 = *(int32_t*)(s3);                                       // 0x0012ed94: lw $v0, 0($s3)
    a2 = 0x7fff << 16;                                          // 0x0012ed98: lui $a2, 0x7fff
    v1 = g_00200018;  // Global at 0x00200018                   // 0x0012eda0: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x0012edac: jalr $v1
    a2 = a2 | 0xffff;                                           // 0x0012edb0: ori $a2, $a2, 0xffff
    v0 = *(int32_t*)(s3);                                       // 0x0012edb4: lw $v0, 0($s3)
    a3 = g_0020001c;  // Global at 0x0020001c                   // 0x0012edc0: lw $a3, 0x1c($v0)
    /* call function at address in a3 */                        // 0x0012edc8: jalr $a3
    s0 = local_4;                                               // 0x0012edcc: lw $s0, 4($sp)
    v1 = *(int32_t*)((s4) + 0x48);                              // 0x0012edd0: lw $v1, 0x48($s4)
    v1 = v1 + 4;                                                // 0x0012edd4: addiu $v1, $v1, 4
    s0 = (s0 < v1) ? 1 : 0;                                     // 0x0012edd8: slt $s0, $s0, $v1
    if (s0 != 0) goto label_0x12f3ac;                           // 0x0012eddc: bnez $s0, 0x12f3ac
    v0 = 0 | 0x8000;                                            // 0x0012ede4: ori $v0, $zero, 0x8000
    a0 = sp + 0x10;                                             // 0x0012ede8: addiu $a0, $sp, 0x10
    a1 = 2;                                                     // 0x0012edec: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012edf0: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012edf8: jal 0x12dc10
    local_10 = v0;                                              // 0x0012edfc: sh $v0, 0x10($sp)
    v0 = 1;                                                     // 0x0012ee04: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x12f3ac;                          // 0x0012ee08: bne $s1, $v0, 0x12f3ac
    v0 = *(int16_t*)((s4) + 0x48);                              // 0x0012ee10: lh $v0, 0x48($s4)
    a0 = sp + 0x12;                                             // 0x0012ee14: addiu $a0, $sp, 0x12
    a1 = 2;                                                     // 0x0012ee18: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012ee1c: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012ee24: jal 0x12dc10
    local_12 = v0;                                              // 0x0012ee28: sh $v0, 0x12($sp)
    if (s0 != s1) goto label_0x12f3ac;                          // 0x0012ee30: bne $s0, $s1, 0x12f3ac
    v0 = *(int8_t*)((s4) + 0x4c);                               // 0x0012ee38: lb $v0, 0x4c($s4)
    s7 = sp + 0x14;                                             // 0x0012ee3c: addiu $s7, $sp, 0x14
    a1 = 1;                                                     // 0x0012ee44: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012ee48: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012ee50: jal 0x12dc10
    local_14 = v0;                                              // 0x0012ee54: sb $v0, 0x14($sp)
    if (v0 != s0) goto label_0x12f3ac;                          // 0x0012ee58: bne $v0, $s0, 0x12f3ac
    v0 = *(uint8_t*)((s4) + 0x50);                              // 0x0012ee60: lbu $v0, 0x50($s4)
    a1 = 1;                                                     // 0x0012ee68: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012ee6c: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012ee74: jal 0x12dc10
    local_14 = v0;                                              // 0x0012ee78: sb $v0, 0x14($sp)
    s2 = 1;                                                     // 0x0012ee7c: addiu $s2, $zero, 1
    if (s1 != s2) goto label_0x12f3ac;                          // 0x0012ee84: bne $s1, $s2, 0x12f3ac
    v0 = *(uint8_t*)((s4) + 0x54);                              // 0x0012ee8c: lbu $v0, 0x54($s4)
    a1 = 1;                                                     // 0x0012ee94: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012ee98: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012eea0: jal 0x12dc10
    local_14 = v0;                                              // 0x0012eea4: sb $v0, 0x14($sp)
    if (s0 != s1) goto label_0x12f3ac;                          // 0x0012eeac: bne $s0, $s1, 0x12f3ac
    v0 = *(uint8_t*)((s4) + 0x58);                              // 0x0012eeb4: lbu $v0, 0x58($s4)
    a1 = 1;                                                     // 0x0012eebc: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012eec0: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012eec8: jal 0x12dc10
    local_14 = v0;                                              // 0x0012eecc: sb $v0, 0x14($sp)
    if (s1 != s0) goto label_0x12f3ac;                          // 0x0012eed4: bne $s1, $s0, 0x12f3ac
    v0 = *(int32_t*)((s4) + 0x5c);                              // 0x0012eedc: lw $v0, 0x5c($s4)
    a0 = sp + 0x18;                                             // 0x0012eee0: addiu $a0, $sp, 0x18
    a1 = 4;                                                     // 0x0012eee4: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012eee8: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012eef0: jal 0x12dc10
    local_18 = v0;                                              // 0x0012eef4: sw $v0, 0x18($sp)
    if (s0 != s1) goto label_0x12f3ac;                          // 0x0012eefc: bne $s0, $s1, 0x12f3ac
    v0 = *(int32_t*)((s4) + 0x60);                              // 0x0012ef04: lw $v0, 0x60($s4)
    a0 = sp + 0x18;                                             // 0x0012ef08: addiu $a0, $sp, 0x18
    a1 = 4;                                                     // 0x0012ef0c: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012ef10: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012ef18: jal 0x12dc10
    local_18 = v0;                                              // 0x0012ef1c: sw $v0, 0x18($sp)
    if (s1 != s0) goto label_0x12f3ac;                          // 0x0012ef24: bne $s1, $s0, 0x12f3ac
    v0 = *(int16_t*)((s4) + 0x64);                              // 0x0012ef2c: lh $v0, 0x64($s4)
    s6 = sp + 0x16;                                             // 0x0012ef30: addiu $s6, $sp, 0x16
    a1 = 2;                                                     // 0x0012ef38: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012ef3c: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012ef44: jal 0x12dc10
    local_16 = v0;                                              // 0x0012ef48: sh $v0, 0x16($sp)
    if (s0 != s1) goto label_0x12f3ac;                          // 0x0012ef50: bne $s0, $s1, 0x12f3ac
    v0 = 4;                                                     // 0x0012ef58: addiu $v0, $zero, 4
    a1 = 1;                                                     // 0x0012ef60: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012ef64: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012ef6c: jal 0x12dc10
    local_14 = v0;                                              // 0x0012ef70: sb $v0, 0x14($sp)
    if (v0 != s0) goto label_0x12f3ac;                          // 0x0012ef74: bne $v0, $s0, 0x12f3ac
    v0 = *(int16_t*)((s4) + 0x2d0);                             // 0x0012ef7c: lh $v0, 0x2d0($s4)
    if (v0 != 0) goto label_0x12ef90;                           // 0x0012ef80: bnez $v0, 0x12ef90
    v0 = 8;                                                     // 0x0012ef84: addiu $v0, $zero, 8
    goto label_0x12ef94;                                        // 0x0012ef88: b 0x12ef94
    local_14 = 0;                                               // 0x0012ef8c: sb $zero, 0x14($sp)
label_0x12ef90:
    local_14 = v0;                                              // 0x0012ef90: sb $v0, 0x14($sp)
label_0x12ef94:
    a1 = 1;                                                     // 0x0012ef98: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012ef9c: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012efa0: jal 0x12dc10
    v0 = 1;                                                     // 0x0012efac: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x12f3ac;                          // 0x0012efb0: bne $s0, $v0, 0x12f3ac
    a0 = sp + 0x18;                                             // 0x0012efb8: addiu $a0, $sp, 0x18
    a1 = 4;                                                     // 0x0012efbc: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012efc0: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012efc8: jal 0x12dc10
    local_18 = 0;                                               // 0x0012efcc: sw $zero, 0x18($sp)
    if (s1 != s0) goto label_0x12f3ac;                          // 0x0012efd4: bne $s1, $s0, 0x12f3ac
    v0 = *(uint16_t*)((s4) + 0x2c8);                            // 0x0012efdc: lhu $v0, 0x2c8($s4)
    a1 = 2;                                                     // 0x0012efe4: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012efe8: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012eff0: jal 0x12dc10
    local_16 = v0;                                              // 0x0012eff4: sh $v0, 0x16($sp)
    if (s0 != s1) goto label_0x12f3ac;                          // 0x0012effc: bne $s0, $s1, 0x12f3ac
    v0 = *(uint16_t*)((s4) + 0x2cc);                            // 0x0012f004: lhu $v0, 0x2cc($s4)
    a1 = 2;                                                     // 0x0012f00c: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f010: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f018: jal 0x12dc10
    local_16 = v0;                                              // 0x0012f01c: sh $v0, 0x16($sp)
    if (s1 != s0) goto label_0x12f3ac;                          // 0x0012f024: bne $s1, $s0, 0x12f3ac
    v0 = *(uint16_t*)((s4) + 0x2ca);                            // 0x0012f02c: lhu $v0, 0x2ca($s4)
    a1 = 2;                                                     // 0x0012f034: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f038: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f040: jal 0x12dc10
    local_16 = v0;                                              // 0x0012f044: sh $v0, 0x16($sp)
    if (s0 != s1) goto label_0x12f3ac;                          // 0x0012f04c: bne $s0, $s1, 0x12f3ac
    v0 = *(uint16_t*)((s4) + 0x2ce);                            // 0x0012f054: lhu $v0, 0x2ce($s4)
    a1 = 2;                                                     // 0x0012f05c: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f060: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f068: jal 0x12dc10
    local_16 = v0;                                              // 0x0012f06c: sh $v0, 0x16($sp)
    if (s1 != s0) goto label_0x12f3ac;                          // 0x0012f074: bne $s1, $s0, 0x12f3ac
    v1 = *(int32_t*)((s4) + 0x6c);                              // 0x0012f07c: lw $v1, 0x6c($s4)
    if (v1 <= 0) goto label_0x12f1e0;                           // 0x0012f080: blez $v1, 0x12f1e0
    s2 = 0x1c;                                                  // 0x0012f084: addiu $s2, $zero, 0x1c
    v0 = *(uint16_t*)((s4) + 0x68);                             // 0x0012f088: lhu $v0, 0x68($s4)
    a1 = 2;                                                     // 0x0012f090: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f094: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f09c: jal 0x12dc10
    local_16 = v0;                                              // 0x0012f0a0: sh $v0, 0x16($sp)
    if (s0 != s1) goto label_0x12f3ac;                          // 0x0012f0a8: bne $s0, $s1, 0x12f3ac
    v0 = *(uint16_t*)((s4) + 0x6c);                             // 0x0012f0b0: lhu $v0, 0x6c($s4)
    a1 = 2;                                                     // 0x0012f0b8: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f0bc: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f0c4: jal 0x12dc10
    local_16 = v0;                                              // 0x0012f0c8: sh $v0, 0x16($sp)
    if (v0 != s0) goto label_0x12f3ac;                          // 0x0012f0cc: bne $v0, $s0, 0x12f3ac
    v1 = *(int32_t*)((s4) + 0x6c);                              // 0x0012f0d4: lw $v1, 0x6c($s4)
    s2 = 0x20;                                                  // 0x0012f0d8: addiu $s2, $zero, 0x20
    if (v1 <= 0) goto label_0x12f1e0;                           // 0x0012f0dc: blez $v1, 0x12f1e0
label_0x12f0e8:
    a1 = 2;                                                     // 0x0012f0e8: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f0ec: addiu $a2, $zero, 1
    local_16 = s5;                                              // 0x0012f0f4: sh $s5, 0x16($sp)
    func_0012ddd0();  // 0x12dc10                                // 0x0012f0f8: jal 0x12dc10
    s5 = s5 + 1;                                                // 0x0012f0fc: addiu $s5, $s5, 1
    a2 = 1;                                                     // 0x0012f108: addiu $a2, $zero, 1
    a1 = 2;                                                     // 0x0012f10c: addiu $a1, $zero, 2
    if (s0 != a2) goto label_0x12f3a8;                          // 0x0012f110: bne $s0, $a2, 0x12f3a8
    s2 = s2 + 2;                                                // 0x0012f118: addiu $s2, $s2, 2
    local_16 = s0;                                              // 0x0012f11c: sh $s0, 0x16($sp)
    func_0012ddd0();  // 0x12dc10                                // 0x0012f120: jal 0x12dc10
    s2 = s2 + 2;                                                // 0x0012f124: addiu $s2, $s2, 2
    s2 = s2 + 4;                                                // 0x0012f128: addiu $s2, $s2, 4
    s2 = s2 + 4;                                                // 0x0012f130: addiu $s2, $s2, 4
    a1 = 4;                                                     // 0x0012f134: addiu $a1, $zero, 4
    s2 = s2 + 4;                                                // 0x0012f138: addiu $s2, $s2, 4
    a0 = sp + 0x18;                                             // 0x0012f13c: addiu $a0, $sp, 0x18
    s2 = s2 + 4;                                                // 0x0012f140: addiu $s2, $s2, 4
    a2 = 1;                                                     // 0x0012f144: addiu $a2, $zero, 1
    if (s1 != s0) goto label_0x12f3a8;                          // 0x0012f148: bne $s1, $s0, 0x12f3a8
    v0 = *(int32_t*)((s4) + 0x70);                              // 0x0012f150: lw $v0, 0x70($s4)
    func_0012ddd0();  // 0x12dc10                                // 0x0012f154: jal 0x12dc10
    local_18 = v0;                                              // 0x0012f158: sw $v0, 0x18($sp)
    a0 = sp + 0x18;                                             // 0x0012f160: addiu $a0, $sp, 0x18
    a1 = 4;                                                     // 0x0012f164: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012f168: addiu $a2, $zero, 1
    if (s0 != s1) goto label_0x12f3a8;                          // 0x0012f16c: bne $s0, $s1, 0x12f3a8
    v0 = *(int32_t*)((s4) + 0x74);                              // 0x0012f174: lw $v0, 0x74($s4)
    func_0012ddd0();  // 0x12dc10                                // 0x0012f178: jal 0x12dc10
    local_18 = v0;                                              // 0x0012f17c: sw $v0, 0x18($sp)
    a0 = sp + 0x18;                                             // 0x0012f184: addiu $a0, $sp, 0x18
    a1 = 4;                                                     // 0x0012f188: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012f18c: addiu $a2, $zero, 1
    if (s1 != s0) goto label_0x12f3a8;                          // 0x0012f190: bne $s1, $s0, 0x12f3a8
    v0 = *(int32_t*)((s4) + 0x78);                              // 0x0012f198: lw $v0, 0x78($s4)
    func_0012ddd0();  // 0x12dc10                                // 0x0012f19c: jal 0x12dc10
    local_18 = v0;                                              // 0x0012f1a0: sw $v0, 0x18($sp)
    a0 = sp + 0x18;                                             // 0x0012f1a8: addiu $a0, $sp, 0x18
    a1 = 4;                                                     // 0x0012f1ac: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012f1b0: addiu $a2, $zero, 1
    if (s0 != s1) goto label_0x12f3a8;                          // 0x0012f1b4: bne $s0, $s1, 0x12f3a8
    v0 = *(int32_t*)((s4) + 0x7c);                              // 0x0012f1bc: lw $v0, 0x7c($s4)
    func_0012ddd0();  // 0x12dc10                                // 0x0012f1c0: jal 0x12dc10
    local_18 = v0;                                              // 0x0012f1c4: sw $v0, 0x18($sp)
    if (v0 != s0) goto label_0x12f3ac;                          // 0x0012f1c8: bne $v0, $s0, 0x12f3ac
    v1 = *(int32_t*)((s4) + 0x6c);                              // 0x0012f1d0: lw $v1, 0x6c($s4)
    v0 = (s5 < v1) ? 1 : 0;                                     // 0x0012f1d4: slt $v0, $s5, $v1
    if (v0 != 0) goto label_0x12f0e8;                           // 0x0012f1d8: bnez $v0, 0x12f0e8
label_0x12f1e0:
    s0 = *(int8_t*)((s4) + 0x2d6);                              // 0x0012f1e0: lb $s0, 0x2d6($s4)
    v0 = 1;                                                     // 0x0012f1e4: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x12f334;                          // 0x0012f1e8: bnel $s0, $v0, 0x12f334
    v1 = *(int32_t*)((s4) + 0x48);                              // 0x0012f1ec: lw $v1, 0x48($s4)
    if (v1 != 0) goto label_0x12f220;                           // 0x0012f1f0: bnez $v1, 0x12f220
    v0 = 0x4149 << 16;                                          // 0x0012f1f4: lui $v0, 0x4149
    a0 = sp + 0x18;                                             // 0x0012f1f8: addiu $a0, $sp, 0x18
    a1 = 4;                                                     // 0x0012f1fc: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012f200: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f208: jal 0x12dc10
    local_18 = 0;                                               // 0x0012f20c: sw $zero, 0x18($sp)
    if (v0 != s0) goto label_0x12f3ac;                          // 0x0012f210: bne $v0, $s0, 0x12f3ac
    s2 = s2 + 4;                                                // 0x0012f218: addiu $s2, $s2, 4
    v0 = 0x4149 << 16;                                          // 0x0012f21c: lui $v0, 0x4149
label_0x12f220:
    a0 = sp + 0x18;                                             // 0x0012f220: addiu $a0, $sp, 0x18
    v0 = v0 | 0x4e46;                                           // 0x0012f224: ori $v0, $v0, 0x4e46
    a1 = 4;                                                     // 0x0012f228: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012f22c: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f234: jal 0x12dc10
    local_18 = v0;                                              // 0x0012f238: sw $v0, 0x18($sp)
    if (s1 != s0) goto label_0x12f3ac;                          // 0x0012f240: bne $s1, $s0, 0x12f3ac
    v0 = 0x18;                                                  // 0x0012f248: addiu $v0, $zero, 0x18
    a0 = sp + 0x18;                                             // 0x0012f24c: addiu $a0, $sp, 0x18
    a1 = 4;                                                     // 0x0012f250: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x0012f254: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f25c: jal 0x12dc10
    local_18 = v0;                                              // 0x0012f260: sw $v0, 0x18($sp)
    if (s5 != s1) goto label_0x12f3a8;                          // 0x0012f268: bne $s5, $s1, 0x12f3a8
    s2 = s2 + 4;                                                // 0x0012f26c: addiu $s2, $s2, 4
    a0 = s4 + 0x2d7;                                            // 0x0012f270: addiu $a0, $s4, 0x2d7
    a1 = 1;                                                     // 0x0012f274: addiu $a1, $zero, 1
    a2 = 0x10;                                                  // 0x0012f278: addiu $a2, $zero, 0x10
    func_0012ddd0();  // 0x12dc10                                // 0x0012f27c: jal 0x12dc10
    v1 = 0x10;                                                  // 0x0012f284: addiu $v1, $zero, 0x10
    if (v0 != v1) goto label_0x12f3a8;                          // 0x0012f288: bne $v0, $v1, 0x12f3a8
    s2 = s2 + 4;                                                // 0x0012f28c: addiu $s2, $s2, 4
    v0 = *(uint16_t*)((s4) + 0x2e8);                            // 0x0012f290: lhu $v0, 0x2e8($s4)
    a1 = 2;                                                     // 0x0012f298: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f29c: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f2a4: jal 0x12dc10
    local_16 = v0;                                              // 0x0012f2a8: sh $v0, 0x16($sp)
    if (s0 != s5) goto label_0x12f3a8;                          // 0x0012f2b0: bne $s0, $s5, 0x12f3a8
    s2 = s2 + 0x10;                                             // 0x0012f2b4: addiu $s2, $s2, 0x10
    a1 = 2;                                                     // 0x0012f2bc: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f2c0: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f2c8: jal 0x12dc10
    local_16 = 0;                                               // 0x0012f2cc: sh $zero, 0x16($sp)
    if (s1 != s0) goto label_0x12f3a8;                          // 0x0012f2d4: bne $s1, $s0, 0x12f3a8
    s2 = s2 + 2;                                                // 0x0012f2d8: addiu $s2, $s2, 2
    v0 = *(uint16_t*)((s4) + 0x2ea);                            // 0x0012f2dc: lhu $v0, 0x2ea($s4)
    a1 = 2;                                                     // 0x0012f2e4: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f2e8: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f2f0: jal 0x12dc10
    local_16 = v0;                                              // 0x0012f2f4: sh $v0, 0x16($sp)
    if (s0 != s1) goto label_0x12f3a8;                          // 0x0012f2fc: bne $s0, $s1, 0x12f3a8
    s2 = s2 + 2;                                                // 0x0012f300: addiu $s2, $s2, 2
    v0 = *(uint16_t*)((s4) + 0x2ec);                            // 0x0012f304: lhu $v0, 0x2ec($s4)
    a1 = 2;                                                     // 0x0012f30c: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012f310: addiu $a2, $zero, 1
    local_16 = v0;                                              // 0x0012f318: sh $v0, 0x16($sp)
    func_0012ddd0();  // 0x12dc10                                // 0x0012f31c: jal 0x12dc10
    s2 = s2 + 2;                                                // 0x0012f320: addiu $s2, $s2, 2
    if (v0 != s0) goto label_0x12f3ac;                          // 0x0012f324: bne $v0, $s0, 0x12f3ac
    s2 = s2 + 2;                                                // 0x0012f32c: addiu $s2, $s2, 2
    v1 = *(int32_t*)((s4) + 0x48);                              // 0x0012f330: lw $v1, 0x48($s4)
label_0x12f334:
    s0 = v1 - fp;                                               // 0x0012f334: subu $s0, $v1, $fp
    v0 = (s2 < s0) ? 1 : 0;                                     // 0x0012f338: slt $v0, $s2, $s0
    if (v0 == 0) goto label_0x12f378;                           // 0x0012f33c: beqz $v0, 0x12f378
    local_14 = 0;                                               // 0x0012f340: sb $zero, 0x14($sp)
    s1 = 1;                                                     // 0x0012f344: addiu $s1, $zero, 1
    /* nop */                                                   // 0x0012f34c: nop 
label_0x12f350:
    a1 = 1;                                                     // 0x0012f350: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012f354: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f358: jal 0x12dc10
    if (v0 != s1) goto label_0x12f3ac;                          // 0x0012f360: bne $v0, $s1, 0x12f3ac
    s2 = s2 + 1;                                                // 0x0012f368: addiu $s2, $s2, 1
    v0 = (s2 < s0) ? 1 : 0;                                     // 0x0012f36c: slt $v0, $s2, $s0
    if (v0 != 0) goto label_0x12f350;                           // 0x0012f370: bnez $v0, 0x12f350
label_0x12f378:
    v0 = 0x20 << 16;                                            // 0x0012f378: lui $v0, 0x20
    a0 = g_001fed5c;  // Global at 0x001fed5c                   // 0x0012f380: lw $a0, -0x12a4($v0)
    a1 = 1;                                                     // 0x0012f384: addiu $a1, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012f388: jal 0x12dc10
    if (v0 != fp) goto label_0x12f3ac;                          // 0x0012f390: bnel $v0, $fp, 0x12f3ac
    s2 = s2 + fp;                                               // 0x0012f398: addu $s2, $s2, $fp
    goto label_0x12f3ac;                                        // 0x0012f39c: b 0x12f3ac
    v0 = s2 + 4;                                                // 0x0012f3a0: addiu $v0, $s2, 4
    /* nop */                                                   // 0x0012f3a4: nop 
label_0x12f3a8:
label_0x12f3ac:
    return;                                                     // 0x0012f3d4: jr $ra
    sp = sp + 0x70;                                             // 0x0012f3d8: addiu $sp, $sp, 0x70
}