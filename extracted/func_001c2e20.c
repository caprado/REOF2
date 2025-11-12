void func_001c2e20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c2e20: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001c2e24: lui $at, 0x31
    v0 = g_003135f8;  // Global at 0x003135f8                   // 0x001c2e30: lw $v0, 0x35f8($at)
    s0 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2e34: lw $s0, -0x62dc($gp)
    at = 0x31 << 16;                                            // 0x001c2e38: lui $at, 0x31
    *(uint16_t*)((s0) + 8) = v0;                                // 0x001c2e3c: sh $v0, 8($s0)
    v0 = g_003135f0;  // Global at 0x003135f0                   // 0x001c2e40: lw $v0, 0x35f0($at)
    *(uint16_t*)((s0) + 0xa) = v0;                              // 0x001c2e44: sh $v0, 0xa($s0)
    at = 0x31 << 16;                                            // 0x001c2e48: lui $at, 0x31
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c2e4c: lhu $v1, 0xa($s0)
    v0 = g_00313608;  // Global at 0x00313608                   // 0x001c2e50: lw $v0, 0x3608($at)
    v0 = v0 | v1;                                               // 0x001c2e54: or $v0, $v0, $v1
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x001c2e58: sh $v0, 0xc($s0)
    v0 = *(int8_t*)((s0) + 1);                                  // 0x001c2e5c: lb $v0, 1($s0)
    at = ((unsigned)v0 < (unsigned)0xf) ? 1 : 0;                // 0x001c2e60: sltiu $at, $v0, 0xf
    if (at == 0) goto label_0x1c3294;                           // 0x001c2e64: beqz $at, 0x1c3294
    v1 = 0x24 << 16;                                            // 0x001c2e68: lui $v1, 0x24
    v0 = v0 << 2;                                               // 0x001c2e6c: sll $v0, $v0, 2
    v1 = v1 + 0x3770;                                           // 0x001c2e70: addiu $v1, $v1, 0x3770
    v0 = v0 + v1;                                               // 0x001c2e74: addu $v0, $v0, $v1
    v0 = *(int32_t*)(v0);                                       // 0x001c2e78: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001c2e7c: jr $v0
    /* nop */                                                   // 0x001c2e80: nop 
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x001c2e84: lw $v0, 0x20($s0)
    at = ((unsigned)v0 < (unsigned)6) ? 1 : 0;                  // 0x001c2e88: sltiu $at, $v0, 6
    if (at == 0) goto label_0x1c301c;                           // 0x001c2e8c: beqz $at, 0x1c301c
    v1 = 0x24 << 16;                                            // 0x001c2e90: lui $v1, 0x24
    v0 = v0 << 2;                                               // 0x001c2e94: sll $v0, $v0, 2
    v1 = v1 + 0x3750;                                           // 0x001c2e98: addiu $v1, $v1, 0x3750
    v0 = v0 + v1;                                               // 0x001c2e9c: addu $v0, $v0, $v1
    v0 = *(int32_t*)(v0);                                       // 0x001c2ea0: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001c2ea4: jr $v0
    /* nop */                                                   // 0x001c2ea8: nop 
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001c2eac: lw $v0, 0x1c($s0)
    if (v0 == 0) goto label_0x1c2ec0;                           // 0x001c2eb0: beqz $v0, 0x1c2ec0
    v0 = 1;                                                     // 0x001c2eb4: addiu $v0, $zero, 1
    goto label_0x1c2ec8;                                        // 0x001c2eb8: b 0x1c2ec8
label_0x1c2ec0:
    goto label_0x1c301c;                                        // 0x001c2ec0: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c2ec4: sb $v0, 1($s0)
label_0x1c2ec8:
    goto label_0x1c32c4;                                        // 0x001c2ec8: b 0x1c32c4
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x001c2ed0: lw $a0, 0x1c($s0)
    v0 = 3;                                                     // 0x001c2ed4: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1c2f0c;                          // 0x001c2ed8: beq $a0, $v0, 0x1c2f0c
    v1 = 2;                                                     // 0x001c2edc: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1c2f04;                          // 0x001c2ee0: beq $a0, $v1, 0x1c2f04
    /* nop */                                                   // 0x001c2ee4: nop 
    v0 = 1;                                                     // 0x001c2ee8: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1c2efc;                          // 0x001c2eec: beq $a0, $v0, 0x1c2efc
    /* nop */                                                   // 0x001c2ef0: nop 
    goto label_0x1c2f10;                                        // 0x001c2ef4: b 0x1c2f10
label_0x1c2efc:
    goto label_0x1c301c;                                        // 0x001c2efc: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x001c2f00: sb $v1, 1($s0)
label_0x1c2f04:
    goto label_0x1c301c;                                        // 0x001c2f04: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c2f08: sb $v0, 1($s0)
label_0x1c2f0c:
label_0x1c2f10:
    goto label_0x1c32c0;                                        // 0x001c2f10: b 0x1c32c0
    /* nop */                                                   // 0x001c2f14: nop 
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x001c2f18: lw $a0, 0x1c($s0)
    v0 = 5;                                                     // 0x001c2f1c: addiu $v0, $zero, 5
    if (a0 == v0) goto label_0x1c2f58;                          // 0x001c2f20: beq $a0, $v0, 0x1c2f58
    v0 = 0xe;                                                   // 0x001c2f24: addiu $v0, $zero, 0xe
    v1 = 2;                                                     // 0x001c2f28: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1c2f50;                          // 0x001c2f2c: beq $a0, $v1, 0x1c2f50
    v0 = 3;                                                     // 0x001c2f30: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x001c2f34: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1c2f48;                          // 0x001c2f38: beq $a0, $v0, 0x1c2f48
    /* nop */                                                   // 0x001c2f3c: nop 
    goto label_0x1c2f60;                                        // 0x001c2f40: b 0x1c2f60
label_0x1c2f48:
    goto label_0x1c301c;                                        // 0x001c2f48: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x001c2f4c: sb $v1, 1($s0)
label_0x1c2f50:
    goto label_0x1c301c;                                        // 0x001c2f50: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c2f54: sb $v0, 1($s0)
label_0x1c2f58:
    goto label_0x1c301c;                                        // 0x001c2f58: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c2f5c: sb $v0, 1($s0)
label_0x1c2f60:
    goto label_0x1c32c0;                                        // 0x001c2f60: b 0x1c32c0
    /* nop */                                                   // 0x001c2f64: nop 
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x001c2f68: lw $v1, 0x1c($s0)
    v0 = 2;                                                     // 0x001c2f6c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c2f94;                          // 0x001c2f70: beq $v1, $v0, 0x1c2f94
    v0 = 6;                                                     // 0x001c2f74: addiu $v0, $zero, 6
    v0 = 1;                                                     // 0x001c2f78: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c2f8c;                          // 0x001c2f7c: beq $v1, $v0, 0x1c2f8c
    v0 = 7;                                                     // 0x001c2f80: addiu $v0, $zero, 7
    goto label_0x1c2f9c;                                        // 0x001c2f84: b 0x1c2f9c
label_0x1c2f8c:
    goto label_0x1c301c;                                        // 0x001c2f8c: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c2f90: sb $v0, 1($s0)
label_0x1c2f94:
    goto label_0x1c301c;                                        // 0x001c2f94: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c2f98: sb $v0, 1($s0)
label_0x1c2f9c:
    goto label_0x1c32c0;                                        // 0x001c2f9c: b 0x1c32c0
    /* nop */                                                   // 0x001c2fa0: nop 
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x001c2fa4: lw $v1, 0x1c($s0)
    v0 = 2;                                                     // 0x001c2fa8: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c2fd0;                          // 0x001c2fac: beq $v1, $v0, 0x1c2fd0
    v0 = 4;                                                     // 0x001c2fb0: addiu $v0, $zero, 4
    v0 = 1;                                                     // 0x001c2fb4: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c2fc8;                          // 0x001c2fb8: beq $v1, $v0, 0x1c2fc8
    v0 = 5;                                                     // 0x001c2fbc: addiu $v0, $zero, 5
    goto label_0x1c2fd8;                                        // 0x001c2fc0: b 0x1c2fd8
label_0x1c2fc8:
    goto label_0x1c301c;                                        // 0x001c2fc8: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c2fcc: sb $v0, 1($s0)
label_0x1c2fd0:
    goto label_0x1c301c;                                        // 0x001c2fd0: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c2fd4: sb $v0, 1($s0)
label_0x1c2fd8:
    goto label_0x1c32c0;                                        // 0x001c2fd8: b 0x1c32c0
    /* nop */                                                   // 0x001c2fdc: nop 
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x001c2fe0: lw $v1, 0x1c($s0)
    v0 = 2;                                                     // 0x001c2fe4: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c300c;                          // 0x001c2fe8: beq $v1, $v0, 0x1c300c
    v0 = 0xb;                                                   // 0x001c2fec: addiu $v0, $zero, 0xb
    v0 = 1;                                                     // 0x001c2ff0: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c3004;                          // 0x001c2ff4: beq $v1, $v0, 0x1c3004
    v0 = 0xa;                                                   // 0x001c2ff8: addiu $v0, $zero, 0xa
    goto label_0x1c3014;                                        // 0x001c2ffc: b 0x1c3014
label_0x1c3004:
    goto label_0x1c301c;                                        // 0x001c3004: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c3008: sb $v0, 1($s0)
label_0x1c300c:
    goto label_0x1c301c;                                        // 0x001c300c: b 0x1c301c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c3010: sb $v0, 1($s0)
label_0x1c3014:
    goto label_0x1c32c0;                                        // 0x001c3014: b 0x1c32c0
    /* nop */                                                   // 0x001c3018: nop 
label_0x1c301c:
    *(uint32_t*)((s0) + 0x10) = 0;                              // 0x001c301c: sw $zero, 0x10($s0)
    v0 = 0xe;                                                   // 0x001c3020: addiu $v0, $zero, 0xe
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x001c3024: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001c3028: sw $zero, 0x24($s0)
    v1 = *(int8_t*)((s0) + 1);                                  // 0x001c302c: lb $v1, 1($s0)
    if (v1 == v0) goto label_0x1c3064;                          // 0x001c3030: beq $v1, $v0, 0x1c3064
    /* nop */                                                   // 0x001c3034: nop 
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001c3038: lw $v1, 0x20($s0)
    v0 = 5;                                                     // 0x001c303c: addiu $v0, $zero, 5
    if (v1 != v0) goto label_0x1c3054;                          // 0x001c3040: bne $v1, $v0, 0x1c3054
    a2 = 0x24 << 16;                                            // 0x001c3044: lui $a2, 0x24
    a2 = 0x24 << 16;                                            // 0x001c3048: lui $a2, 0x24
    goto label_0x1c3058;                                        // 0x001c304c: b 0x1c3058
    a2 = &str_00243728;  // "MCICON2.BIN"                       // 0x001c3050: addiu $a2, $a2, 0x3728
label_0x1c3054:
    a2 = a2 + 0x3738;                                           // 0x001c3054: addiu $a2, $a2, 0x3738
label_0x1c3058:
    a1 = *(int32_t*)((s0) + 0xf0);                              // 0x001c3058: lw $a1, 0xf0($s0)
    func_001c7460();  // 0x1c73b0                                // 0x001c305c: jal 0x1c73b0
label_0x1c3064:
    a0 = 0x1c << 16;                                            // 0x001c3064: lui $a0, 0x1c
    func_001af2f0();  // 0x1af280                                // 0x001c3068: jal 0x1af280
    a0 = a0 + 0x6200;                                           // 0x001c306c: addiu $a0, $a0, 0x6200
    a0 = 0x1c << 16;                                            // 0x001c3070: lui $a0, 0x1c
    func_001af2f0();  // 0x1af280                                // 0x001c3074: jal 0x1af280
    a0 = a0 + 0x64f0;                                           // 0x001c3078: addiu $a0, $a0, 0x64f0
    goto label_0x1c3294;                                        // 0x001c307c: b 0x1c3294
    /* nop */                                                   // 0x001c3080: nop 
    func_001c3870();  // 0x1c32d0                                // 0x001c3084: jal 0x1c32d0
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c308c: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3090: nop 
    goto label_0x1c32a4;                                        // 0x001c3094: b 0x1c32a4
    /* nop */                                                   // 0x001c3098: nop 
    func_001c50a0();  // 0x1c4810                                // 0x001c309c: jal 0x1c4810
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c30a4: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c30a8: nop 
    v0 = *(int32_t*)((s0) + 0xdc);                              // 0x001c30ac: lw $v0, 0xdc($s0)
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c30b0: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c30b4: nop 
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c30b8: jal 0x1c0bc0
    /* nop */                                                   // 0x001c30bc: nop 
    if (v0 != 0) goto label_0x1c30d4;                           // 0x001c30c0: bnez $v0, 0x1c30d4
    /* nop */                                                   // 0x001c30c4: nop 
    v0 = *(int32_t*)((s0) + 0xe0);                              // 0x001c30c8: lw $v0, 0xe0($s0)
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c30cc: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c30d0: nop 
label_0x1c30d4:
    v0 = 8;                                                     // 0x001c30d4: addiu $v0, $zero, 8
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c30d8: sb $v0, 1($s0)
    goto label_0x1c3294;                                        // 0x001c30dc: b 0x1c3294
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x001c30e0: sb $zero, 2($s0)
    func_001c3d20();  // 0x1c3870                                // 0x001c30e4: jal 0x1c3870
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c30ec: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c30f0: nop 
    v0 = *(int32_t*)((s0) + 0xdc);                              // 0x001c30f4: lw $v0, 0xdc($s0)
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c30f8: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c30fc: nop 
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c3100: jal 0x1c0bc0
    /* nop */                                                   // 0x001c3104: nop 
    if (v0 != 0) goto label_0x1c311c;                           // 0x001c3108: bnez $v0, 0x1c311c
    /* nop */                                                   // 0x001c310c: nop 
    v0 = *(int32_t*)((s0) + 0xe0);                              // 0x001c3110: lw $v0, 0xe0($s0)
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c3114: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c3118: nop 
label_0x1c311c:
    v0 = 9;                                                     // 0x001c311c: addiu $v0, $zero, 9
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c3120: sb $v0, 1($s0)
    goto label_0x1c3294;                                        // 0x001c3124: b 0x1c3294
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x001c3128: sb $zero, 2($s0)
    func_001c50b0();  // 0x1c50a0                                // 0x001c312c: jal 0x1c50a0
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c3134: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3138: nop 
    goto label_0x1c32a4;                                        // 0x001c313c: b 0x1c32a4
    /* nop */                                                   // 0x001c3140: nop 
    func_001c5630();  // 0x1c50b0                                // 0x001c3144: jal 0x1c50b0
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c314c: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3150: nop 
    goto label_0x1c32a4;                                        // 0x001c3154: b 0x1c32a4
    /* nop */                                                   // 0x001c3158: nop 
    func_001c47c0();  // 0x1c44c0                                // 0x001c315c: jal 0x1c44c0
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c3164: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3168: nop 
    goto label_0x1c32a4;                                        // 0x001c316c: b 0x1c32a4
    /* nop */                                                   // 0x001c3170: nop 
    func_001c44c0();  // 0x1c3d20                                // 0x001c3174: jal 0x1c3d20
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c317c: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3180: nop 
    goto label_0x1c32a4;                                        // 0x001c3184: b 0x1c32a4
    /* nop */                                                   // 0x001c3188: nop 
    func_001c5cc0();  // 0x1c5b90                                // 0x001c318c: jal 0x1c5b90
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c3194: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3198: nop 
    goto label_0x1c32a4;                                        // 0x001c319c: b 0x1c32a4
    /* nop */                                                   // 0x001c31a0: nop 
    func_001c5f10();  // 0x1c5df0                                // 0x001c31a4: jal 0x1c5df0
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c31ac: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c31b0: nop 
    goto label_0x1c32a4;                                        // 0x001c31b4: b 0x1c32a4
    /* nop */                                                   // 0x001c31b8: nop 
    func_001c5b90();  // 0x1c5800                                // 0x001c31bc: jal 0x1c5800
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c31c4: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c31c8: nop 
    v0 = *(int32_t*)((s0) + 0xdc);                              // 0x001c31cc: lw $v0, 0xdc($s0)
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c31d0: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c31d4: nop 
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c31d8: jal 0x1c0bc0
    /* nop */                                                   // 0x001c31dc: nop 
    if (v0 != 0) goto label_0x1c31f4;                           // 0x001c31e0: bnez $v0, 0x1c31f4
    /* nop */                                                   // 0x001c31e4: nop 
    v0 = *(int32_t*)((s0) + 0xe0);                              // 0x001c31e8: lw $v0, 0xe0($s0)
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c31ec: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c31f0: nop 
label_0x1c31f4:
    v0 = 0xc;                                                   // 0x001c31f4: addiu $v0, $zero, 0xc
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c31f8: sb $v0, 1($s0)
    goto label_0x1c3294;                                        // 0x001c31fc: b 0x1c3294
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x001c3200: sb $zero, 2($s0)
    func_001c5800();  // 0x1c5630                                // 0x001c3204: jal 0x1c5630
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c320c: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3210: nop 
    v0 = *(int32_t*)((s0) + 0xdc);                              // 0x001c3214: lw $v0, 0xdc($s0)
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c3218: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c321c: nop 
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c3220: jal 0x1c0bc0
    /* nop */                                                   // 0x001c3224: nop 
    if (v0 != 0) goto label_0x1c323c;                           // 0x001c3228: bnez $v0, 0x1c323c
    /* nop */                                                   // 0x001c322c: nop 
    v0 = *(int32_t*)((s0) + 0xe0);                              // 0x001c3230: lw $v0, 0xe0($s0)
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c3234: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c3238: nop 
label_0x1c323c:
    v0 = 0xd;                                                   // 0x001c323c: addiu $v0, $zero, 0xd
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c3240: sb $v0, 1($s0)
    goto label_0x1c3294;                                        // 0x001c3244: b 0x1c3294
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x001c3248: sb $zero, 2($s0)
    func_001c5df0();  // 0x1c5cc0                                // 0x001c324c: jal 0x1c5cc0
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c3254: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3258: nop 
    goto label_0x1c32a4;                                        // 0x001c325c: b 0x1c32a4
    /* nop */                                                   // 0x001c3260: nop 
    func_001c6030();  // 0x1c5f10                                // 0x001c3264: jal 0x1c5f10
    if (v0 != 0) goto label_0x1c3294;                           // 0x001c326c: bnez $v0, 0x1c3294
    /* nop */                                                   // 0x001c3270: nop 
    goto label_0x1c32a4;                                        // 0x001c3274: b 0x1c32a4
    /* nop */                                                   // 0x001c3278: nop 
    func_001c6200();  // 0x1c60c0                                // 0x001c327c: jal 0x1c60c0
    if (v0 == 0) goto label_0x1c32a4;                           // 0x001c3284: beqz $v0, 0x1c32a4
    /* nop */                                                   // 0x001c3288: nop 
    goto label_0x1c32c0;                                        // 0x001c328c: b 0x1c32c0
    v0 = 1;                                                     // 0x001c3290: addiu $v0, $zero, 1
label_0x1c3294:
    func_001bfbc0();  // 0x1bfb70                                // 0x001c3294: jal 0x1bfb70
    /* nop */                                                   // 0x001c3298: nop 
    goto label_0x1c32c0;                                        // 0x001c329c: b 0x1c32c0
    v0 = 1;                                                     // 0x001c32a0: addiu $v0, $zero, 1
label_0x1c32a4:
    a0 = 0x1c << 16;                                            // 0x001c32a4: lui $a0, 0x1c
    func_001af3a0();  // 0x1af2f0                                // 0x001c32a8: jal 0x1af2f0
    a0 = a0 + 0x6200;                                           // 0x001c32ac: addiu $a0, $a0, 0x6200
    a0 = 0x1c << 16;                                            // 0x001c32b0: lui $a0, 0x1c
    func_001af3a0();  // 0x1af2f0                                // 0x001c32b4: jal 0x1af2f0
    a0 = a0 + 0x64f0;                                           // 0x001c32b8: addiu $a0, $a0, 0x64f0
label_0x1c32c0:
label_0x1c32c4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c32c4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c32c8: jr $ra
    sp = sp + 0x20;                                             // 0x001c32cc: addiu $sp, $sp, 0x20
}