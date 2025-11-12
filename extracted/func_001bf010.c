void func_001bf010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf010: addiu $sp, $sp, -0x20
    v0 = 2;                                                     // 0x001bf014: addiu $v0, $zero, 2
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf020: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf0e0;                          // 0x001bf024: beq $v1, $v0, 0x1bf0e0
    v0 = 1;                                                     // 0x001bf02c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1bf06c;                          // 0x001bf030: beq $v1, $v0, 0x1bf06c
    /* nop */                                                   // 0x001bf034: nop 
    if (v1 == 0) goto label_0x1bf048;                           // 0x001bf038: beqz $v1, 0x1bf048
    /* nop */                                                   // 0x001bf03c: nop 
    goto label_0x1bf200;                                        // 0x001bf040: b 0x1bf200
    v0 = -1;                                                    // 0x001bf044: addiu $v0, $zero, -1
label_0x1bf048:
    func_001bf010();  // 0x1befe0                                // 0x001bf048: jal 0x1befe0
    /* nop */                                                   // 0x001bf04c: nop 
    if (v0 < 0) goto label_0x1bf1fc;                            // 0x001bf050: bltz $v0, 0x1bf1fc
    /* nop */                                                   // 0x001bf054: nop 
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001bf058: lw $v1, 4($s0)
    v0 = 3;                                                     // 0x001bf05c: addiu $v0, $zero, 3
    v1 = v1 + 1;                                                // 0x001bf060: addiu $v1, $v1, 1
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001bf064: sw $v1, 4($s0)
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x001bf068: sw $v0, 0x20($s0)
label_0x1bf06c:
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf06c: lw $v1, 0x14($s0)
    a1 = 0x31 << 16;                                            // 0x001bf070: lui $a1, 0x31
    v0 = gp + -0x6300;                                          // 0x001bf074: addiu $v0, $gp, -0x6300
    v1 = v1 << 2;                                               // 0x001bf078: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf07c: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf080: lw $a0, 0($v0)
    func_00180f18();  // 0x180e58                                // 0x001bf084: jal 0x180e58
    a1 = a1 + 0x5e58;                                           // 0x001bf088: addiu $a1, $a1, 0x5e58
    if (v0 >= 0) goto label_0x1bf0d0;                           // 0x001bf08c: bgez $v0, 0x1bf0d0
    /* nop */                                                   // 0x001bf090: nop 
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x001bf094: lw $v0, 0x20($s0)
    v0 = v0 + -1;                                               // 0x001bf098: addiu $v0, $v0, -1
    if (v0 > 0) goto label_0x1bf1fc;                            // 0x001bf09c: bgtz $v0, 0x1bf1fc
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x001bf0a0: sw $v0, 0x20($s0)
label_0x1bf0a4:
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf0a4: sw $zero, 4($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf0ac: lw $v1, 0x14($s0)
    v1 = v1 << 2;                                               // 0x001bf0b0: sll $v1, $v1, 2
    v1 = v1 + s0;                                               // 0x001bf0b4: addu $v1, $v1, $s0
    *(uint32_t*)((v1) + 0x34) = 0;                              // 0x001bf0b8: sw $zero, 0x34($v1)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf0bc: lw $v1, 0x14($s0)
    v1 = v1 << 2;                                               // 0x001bf0c0: sll $v1, $v1, 2
    v1 = v1 + s0;                                               // 0x001bf0c4: addu $v1, $v1, $s0
    goto label_0x1bf200;                                        // 0x001bf0c8: b 0x1bf200
    *(uint32_t*)((v1) + 0x40) = 0;                              // 0x001bf0cc: sw $zero, 0x40($v1)
label_0x1bf0d0:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf0d0: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf0d4: addiu $v0, $v0, 1
    goto label_0x1bf1fc;                                        // 0x001bf0d8: b 0x1bf1fc
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf0dc: sw $v0, 4($s0)
label_0x1bf0e0:
    func_001bf010();  // 0x1befe0                                // 0x001bf0e0: jal 0x1befe0
    /* nop */                                                   // 0x001bf0e4: nop 
    if (v0 < 0) goto label_0x1bf1fc;                            // 0x001bf0e8: bltz $v0, 0x1bf1fc
    /* nop */                                                   // 0x001bf0ec: nop 
    v1 = *(uint16_t*)((s0) + 0x1c);                             // 0x001bf0f0: lhu $v1, 0x1c($s0)
    v0 = 0x2f;                                                  // 0x001bf0f4: addiu $v0, $zero, 0x2f
    if (v1 == v0) goto label_0x1bf184;                          // 0x001bf0f8: beq $v1, $v0, 0x1bf184
    v0 = 0 | 0x9003;                                            // 0x001bf0fc: ori $v0, $zero, 0x9003
    if (v1 == v0) goto label_0x1bf164;                          // 0x001bf100: beq $v1, $v0, 0x1bf164
    /* nop */                                                   // 0x001bf104: nop 
    if (v1 == 0) goto label_0x1bf118;                           // 0x001bf108: beqz $v1, 0x1bf118
    a1 = 1;                                                     // 0x001bf10c: addiu $a1, $zero, 1
    goto label_0x1bf1d0;                                        // 0x001bf110: b 0x1bf1d0
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x001bf114: lw $v0, 0x20($s0)
label_0x1bf118:
    at = 0x31 << 16;                                            // 0x001bf118: lui $at, 0x31
    v0 = 2;                                                     // 0x001bf11c: addiu $v0, $zero, 2
    v1 = g_00315e58;  // Global at 0x00315e58                   // 0x001bf120: lw $v1, 0x5e58($at)
    if (v1 != v0) goto label_0x1bf0a4;                          // 0x001bf124: bne $v1, $v0, 0x1bf0a4
    at = 0x31 << 16;                                            // 0x001bf128: lui $at, 0x31
    v0 = g_00315e5c;  // Global at 0x00315e5c                   // 0x001bf12c: lw $v0, 0x5e5c($at)
    if (v0 == 0) goto label_0x1bf184;                           // 0x001bf130: beqz $v0, 0x1bf184
    /* nop */                                                   // 0x001bf134: nop 
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001bf138: lw $v0, 0x14($s0)
    at = 0x31 << 16;                                            // 0x001bf13c: lui $at, 0x31
    v0 = v0 << 2;                                               // 0x001bf140: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001bf144: addu $v0, $v0, $s0
    *(uint32_t*)((v0) + 0x34) = a1;                             // 0x001bf148: sw $a1, 0x34($v0)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001bf14c: lw $v0, 0x14($s0)
    v1 = g_00315e60;  // Global at 0x00315e60                   // 0x001bf150: lw $v1, 0x5e60($at)
    v0 = v0 << 2;                                               // 0x001bf154: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001bf158: addu $v0, $v0, $s0
    goto label_0x1bf1e4;                                        // 0x001bf15c: b 0x1bf1e4
    *(uint32_t*)((v0) + 0x40) = v1;                             // 0x001bf160: sw $v1, 0x40($v0)
label_0x1bf164:
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf164: lw $v1, 0x14($s0)
    a0 = 1;                                                     // 0x001bf168: addiu $a0, $zero, 1
    v0 = *(int32_t*)((s0) + 0x4c);                              // 0x001bf16c: lw $v0, 0x4c($s0)
    a1 = 2;                                                     // 0x001bf170: addiu $a1, $zero, 2
    v1 = a0 << v1;                                              // 0x001bf174: sllv $v1, $a0, $v1
    v0 = v0 | v1;                                               // 0x001bf178: or $v0, $v0, $v1
    goto label_0x1bf118;                                        // 0x001bf17c: b 0x1bf118
    *(uint32_t*)((s0) + 0x4c) = v0;                             // 0x001bf180: sw $v0, 0x4c($s0)
label_0x1bf184:
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x001bf184: lw $v0, 0x20($s0)
    v0 = v0 + -1;                                               // 0x001bf188: addiu $v0, $v0, -1
    if (v0 <= 0) goto label_0x1bf1a4;                           // 0x001bf18c: blez $v0, 0x1bf1a4
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x001bf190: sw $v0, 0x20($s0)
    v1 = 1;                                                     // 0x001bf194: addiu $v1, $zero, 1
label_0x1bf198:
    v0 = -1;                                                    // 0x001bf198: addiu $v0, $zero, -1
    goto label_0x1bf200;                                        // 0x001bf19c: b 0x1bf200
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001bf1a0: sw $v1, 4($s0)
label_0x1bf1a4:
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001bf1a4: lw $v0, 0x14($s0)
    a0 = 3;                                                     // 0x001bf1a8: addiu $a0, $zero, 3
    v1 = 0x1f40;                                                // 0x001bf1ac: addiu $v1, $zero, 0x1f40
    v0 = v0 << 2;                                               // 0x001bf1b0: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001bf1b4: addu $v0, $v0, $s0
    *(uint32_t*)((v0) + 0x34) = a0;                             // 0x001bf1b8: sw $a0, 0x34($v0)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001bf1bc: lw $v0, 0x14($s0)
    v0 = v0 << 2;                                               // 0x001bf1c0: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001bf1c4: addu $v0, $v0, $s0
    goto label_0x1bf1e4;                                        // 0x001bf1c8: b 0x1bf1e4
    *(uint32_t*)((v0) + 0x40) = v1;                             // 0x001bf1cc: sw $v1, 0x40($v0)
label_0x1bf1d0:
    v0 = v0 + -1;                                               // 0x001bf1d0: addiu $v0, $v0, -1
    if (v0 <= 0) goto label_0x1bf0a4;                           // 0x001bf1d4: blez $v0, 0x1bf0a4
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x001bf1d8: sw $v0, 0x20($s0)
    goto label_0x1bf198;                                        // 0x001bf1dc: b 0x1bf198
    v1 = 1;                                                     // 0x001bf1e0: addiu $v1, $zero, 1
label_0x1bf1e4:
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf1e4: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001bf1e8: lw $v0, 0x14($s0)
    v0 = v0 << 2;                                               // 0x001bf1ec: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001bf1f0: addu $v0, $v0, $s0
    goto label_0x1bf200;                                        // 0x001bf1f4: b 0x1bf200
    v0 = *(int32_t*)((v0) + 0x34);                              // 0x001bf1f8: lw $v0, 0x34($v0)
label_0x1bf1fc:
    v0 = -1;                                                    // 0x001bf1fc: addiu $v0, $zero, -1
label_0x1bf200:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf204: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf208: jr $ra
    sp = sp + 0x20;                                             // 0x001bf20c: addiu $sp, $sp, 0x20
}