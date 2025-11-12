void func_001cc140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001cc140: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cc14c: addu.qb $zero, $sp, $s1
    a0 = 0x32 << 16;                                            // 0x001cc160: lui $a0, 0x32
    a0 = a0 + 0x57d0;                                           // 0x001cc164: addiu $a0, $a0, 0x57d0
    func_00107d30();  // 0x107c70                                // 0x001cc16c: jal 0x107c70
    a2 = 0x16c;                                                 // 0x001cc170: addiu $a2, $zero, 0x16c
    at = 0x32 << 16;                                            // 0x001cc174: lui $at, 0x32
    v0 = *(int32_t*)((gp) + -0x7b90);                           // 0x001cc178: lw $v0, -0x7b90($gp)
    g_003257d4 = s2;  // Global at 0x003257d4                   // 0x001cc17c: sb $s2, 0x57d4($at)
    v1 = 0x32 << 16;                                            // 0x001cc180: lui $v1, 0x32
    at = 0x32 << 16;                                            // 0x001cc184: lui $at, 0x32
    a0 = 1;                                                     // 0x001cc188: addiu $a0, $zero, 1
    g_003257d0 = s1;  // Global at 0x003257d0                   // 0x001cc18c: sw $s1, 0x57d0($at)
    at = 0x32 << 16;                                            // 0x001cc194: lui $at, 0x32
    v1 = v1 + 0x57d0;                                           // 0x001cc198: addiu $v1, $v1, 0x57d0
    g_003257d5 = s0;  // Global at 0x003257d5                   // 0x001cc19c: sb $s0, 0x57d5($at)
    at = 0x32 << 16;                                            // 0x001cc1a0: lui $at, 0x32
    *(uint32_t*)((gp) + -0x62d0) = 0;                           // 0x001cc1a4: sw $zero, -0x62d0($gp)
    g_003257df = s0;  // Global at 0x003257df                   // 0x001cc1a8: sb $s0, 0x57df($at)
    at = 0x32 << 16;                                            // 0x001cc1ac: lui $at, 0x32
    *(uint32_t*)((gp) + -0x62d4) = 0;                           // 0x001cc1b0: sw $zero, -0x62d4($gp)
    g_00325921 = a0;  // Global at 0x00325921                   // 0x001cc1b4: sb $a0, 0x5921($at)
    at = 0x32 << 16;                                            // 0x001cc1b8: lui $at, 0x32
    *(uint32_t*)((gp) + -0x62d8) = v0;                          // 0x001cc1bc: sw $v0, -0x62d8($gp)
    g_00325920 = a0;  // Global at 0x00325920                   // 0x001cc1c0: sb $a0, 0x5920($at)
    at = 0x32 << 16;                                            // 0x001cc1c4: lui $at, 0x32
    g_00325940 = 0;  // Global at 0x00325940                    // 0x001cc1c8: sw $zero, 0x5940($at)
    at = 0x32 << 16;                                            // 0x001cc1cc: lui $at, 0x32
    g_00325944 = 0;  // Global at 0x00325944                    // 0x001cc1d0: sw $zero, 0x5944($at)
    at = 0x32 << 16;                                            // 0x001cc1d4: lui $at, 0x32
    g_00325948 = 0;  // Global at 0x00325948                    // 0x001cc1d8: sw $zero, 0x5948($at)
    at = 0x32 << 16;                                            // 0x001cc1dc: lui $at, 0x32
    goto label_0x1cc1fc;                                        // 0x001cc1e0: b 0x1cc1fc
    g_0032594c = 0;  // Global at 0x0032594c                    // 0x001cc1e4: sw $zero, 0x594c($at)
label_0x1cc1e8:
    v0 = v0 - a1;                                               // 0x001cc1e8: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001cc1ec: sll $v0, $v0, 2
    a1 = a1 + 1;                                                // 0x001cc1f0: addiu $a1, $a1, 1
    v0 = v1 + v0;                                               // 0x001cc1f4: addu $v0, $v1, $v0
    g_0031b6fc = a0;  // Global at 0x0031b6fc                   // 0x001cc1f8: sb $a0, 0x4c($v0)
label_0x1cc1fc:
    at = 0x32 << 16;                                            // 0x001cc1fc: lui $at, 0x32
    v0 = g_003257d5;  // Global at 0x003257d5                   // 0x001cc200: lbu $v0, 0x57d5($at)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x001cc204: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x1cc1e8;                           // 0x001cc208: bnez $v0, 0x1cc1e8
    v0 = a1 << 4;                                               // 0x001cc20c: sll $v0, $a1, 4
    a0 = 0x32 << 16;                                            // 0x001cc210: lui $a0, 0x32
    a1 = 0x32 << 16;                                            // 0x001cc214: lui $a1, 0x32
    a0 = a0 + 0x57b0;                                           // 0x001cc218: addiu $a0, $a0, 0x57b0
    a1 = a1 + 0x4fb0;                                           // 0x001cc21c: addiu $a1, $a1, 0x4fb0
    func_001ce750();  // 0x1ce720                                // 0x001cc220: jal 0x1ce720
    a2 = 0x800;                                                 // 0x001cc224: addiu $a2, $zero, 0x800
    a0 = 0x32 << 16;                                            // 0x001cc228: lui $a0, 0x32
    a1 = 0x32 << 16;                                            // 0x001cc22c: lui $a1, 0x32
    a0 = a0 + 0x4f90;                                           // 0x001cc230: addiu $a0, $a0, 0x4f90
    a1 = a1 + 0x4790;                                           // 0x001cc234: addiu $a1, $a1, 0x4790
    func_001ce750();  // 0x1ce720                                // 0x001cc238: jal 0x1ce720
    a2 = 0x800;                                                 // 0x001cc23c: addiu $a2, $zero, 0x800
    a0 = 0x32 << 16;                                            // 0x001cc240: lui $a0, 0x32
    a1 = 0x32 << 16;                                            // 0x001cc244: lui $a1, 0x32
    a0 = a0 + 0x4770;                                           // 0x001cc248: addiu $a0, $a0, 0x4770
    a1 = a1 + 0x4370;                                           // 0x001cc24c: addiu $a1, $a1, 0x4370
    func_001ce750();  // 0x1ce720                                // 0x001cc250: jal 0x1ce720
    a2 = 0x400;                                                 // 0x001cc254: addiu $a2, $zero, 0x400
    a0 = 0x32 << 16;                                            // 0x001cc258: lui $a0, 0x32
    a1 = 0x32 << 16;                                            // 0x001cc25c: lui $a1, 0x32
    a0 = a0 + 0x4350;                                           // 0x001cc260: addiu $a0, $a0, 0x4350
    a1 = a1 + 0x3f50;                                           // 0x001cc264: addiu $a1, $a1, 0x3f50
    func_001ce750();  // 0x1ce720                                // 0x001cc268: jal 0x1ce720
    a2 = 0x400;                                                 // 0x001cc26c: addiu $a2, $zero, 0x400
    a0 = 0x32 << 16;                                            // 0x001cc270: lui $a0, 0x32
    a1 = 0x32 << 16;                                            // 0x001cc274: lui $a1, 0x32
    a0 = a0 + 0x3f30;                                           // 0x001cc278: addiu $a0, $a0, 0x3f30
    a1 = a1 + 0x3730;                                           // 0x001cc27c: addiu $a1, $a1, 0x3730
    func_001ce750();  // 0x1ce720                                // 0x001cc280: jal 0x1ce720
    a2 = 0x800;                                                 // 0x001cc284: addiu $a2, $zero, 0x800
    a0 = 0x32 << 16;                                            // 0x001cc288: lui $a0, 0x32
    a1 = 0x32 << 16;                                            // 0x001cc28c: lui $a1, 0x32
    a0 = a0 + 0x3710;                                           // 0x001cc290: addiu $a0, $a0, 0x3710
    a1 = a1 + -0x8f0;                                           // 0x001cc294: addiu $a1, $a1, -0x8f0
    func_001ce750();  // 0x1ce720                                // 0x001cc298: jal 0x1ce720
    a2 = 0x4000;                                                // 0x001cc29c: addiu $a2, $zero, 0x4000
    goto label_0x1cc2d8;                                        // 0x001cc2a0: b 0x1cc2d8
label_0x1cc2a8:
    a0 = 0x32 << 16;                                            // 0x001cc2a8: lui $a0, 0x32
    v0 = v0 + s0;                                               // 0x001cc2ac: addu $v0, $v0, $s0
    a0 = a0 + -0x950;                                           // 0x001cc2b0: addiu $a0, $a0, -0x950
    a1 = v0 << 3;                                               // 0x001cc2b4: sll $a1, $v0, 3
    v1 = s0 << 0xc;                                             // 0x001cc2b8: sll $v1, $s0, 0xc
    v0 = 0x32 << 16;                                            // 0x001cc2bc: lui $v0, 0x32
    a0 = a0 + a1;                                               // 0x001cc2c0: addu $a0, $a0, $a1
    v0 = v0 + -0x4950;                                          // 0x001cc2c4: addiu $v0, $v0, -0x4950
    a2 = 0x1000;                                                // 0x001cc2c8: addiu $a2, $zero, 0x1000
    func_001ce750();  // 0x1ce720                                // 0x001cc2cc: jal 0x1ce720
    a1 = v0 + v1;                                               // 0x001cc2d0: addu $a1, $v0, $v1
    s0 = s0 + 1;                                                // 0x001cc2d4: addiu $s0, $s0, 1
label_0x1cc2d8:
    at = 0x32 << 16;                                            // 0x001cc2d8: lui $at, 0x32
    v0 = g_003257d5;  // Global at 0x003257d5                   // 0x001cc2dc: lbu $v0, 0x57d5($at)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001cc2e0: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1cc2a8;                           // 0x001cc2e4: bnez $v0, 0x1cc2a8
    v0 = s0 << 1;                                               // 0x001cc2e8: sll $v0, $s0, 1
    func_001d01e0();  // 0x1d01a0                                // 0x001cc2ec: jal 0x1d01a0
    func_001cfd50();  // 0x1cfc90                                // 0x001cc2f4: jal 0x1cfc90
    /* nop */                                                   // 0x001cc2f8: nop 
    at = 0x32 << 16;                                            // 0x001cc2fc: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001cc300: lui $a0, 0x32
    *(float*)((at) + 0x57e8) = FPU_F0;  // Store float          // 0x001cc304: swc1 $f0, 0x57e8($at)
    at = 0x32 << 16;                                            // 0x001cc30c: lui $at, 0x32
    a0 = a0 + 0x57d0;                                           // 0x001cc310: addiu $a0, $a0, 0x57d0
    goto label_0x1cc338;                                        // 0x001cc314: b 0x1cc338
    *(float*)((at) + 0x57ec) = FPU_F0;  // Store float          // 0x001cc318: swc1 $f0, 0x57ec($at)
label_0x1cc31c:
    v1 = a1 << 4;                                               // 0x001cc31c: sll $v1, $a1, 4
    FPU_F0 = *(float*)((at) + 0x57ec);  // Load float           // 0x001cc320: lwc1 $f0, 0x57ec($at)
    v1 = v1 - a1;                                               // 0x001cc324: subu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001cc328: sll $v1, $v1, 2
    a1 = a1 + 1;                                                // 0x001cc32c: addiu $a1, $a1, 1
    v1 = a0 + v1;                                               // 0x001cc330: addu $v1, $a0, $v1
    *(float*)((v1) + 0x54) = FPU_F0;  // Store float            // 0x001cc334: swc1 $f0, 0x54($v1)
label_0x1cc338:
    at = 0x32 << 16;                                            // 0x001cc338: lui $at, 0x32
    v1 = g_003257d5;  // Global at 0x003257d5                   // 0x001cc33c: lbu $v1, 0x57d5($at)
    v1 = (a1 < v1) ? 1 : 0;                                     // 0x001cc340: slt $v1, $a1, $v1
    if (v1 != 0) goto label_0x1cc31c;                           // 0x001cc344: bnez $v1, 0x1cc31c
    at = 0x32 << 16;                                            // 0x001cc348: lui $at, 0x32
    FPU_F0 = *(float*)((gp) + -0x7fdc);  // Load float          // 0x001cc34c: lwc1 $f0, -0x7fdc($gp)
    at = 0x32 << 16;                                            // 0x001cc350: lui $at, 0x32
    *(float*)((at) + 0x5918) = FPU_F0;  // Store float          // 0x001cc354: swc1 $f0, 0x5918($at)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cc35c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cc360: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cc364: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cc368: jr $ra
    sp = sp + 0x40;                                             // 0x001cc36c: addiu $sp, $sp, 0x40
}