void func_001ad1b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x140;                                           // 0x001ad1b0: addiu $sp, $sp, -0x140
    at = 0x2a << 16;                                            // 0x001ad1b4: lui $at, 0x2a
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ad1c0: addu.qb $zero, $sp, $s1
    s1 = 0x2a << 16;                                            // 0x001ad1c8: lui $s1, 0x2a
    v1 = g_002a5240;  // Global at 0x002a5240                   // 0x001ad1cc: lbu $v1, 0x5240($at)
    at = ((unsigned)v1 < (unsigned)6) ? 1 : 0;                  // 0x001ad1d0: sltiu $at, $v1, 6
    if (at == 0) goto label_0x1ad408;                           // 0x001ad1d4: beqz $at, 0x1ad408
    s1 = s1 + 0x5240;                                           // 0x001ad1d8: addiu $s1, $s1, 0x5240
    a0 = 0x24 << 16;                                            // 0x001ad1dc: lui $a0, 0x24
    v1 = v1 << 2;                                               // 0x001ad1e0: sll $v1, $v1, 2
    a0 = a0 + -0x24a0;                                          // 0x001ad1e4: addiu $a0, $a0, -0x24a0
    v1 = v1 + a0;                                               // 0x001ad1e8: addu $v1, $v1, $a0
    v1 = *(int32_t*)(v1);                                       // 0x001ad1ec: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x001ad1f0: jr $v1
    /* nop */                                                   // 0x001ad1f4: nop 
    func_001ad160();  // 1ad160                                // 0x001ad1f8: jal 0x1ad160
    g_002a5244 = v0;  // Global at 0x002a5244                   // 0x001ad200: sw $v0, 4($s1)
    v1 = g_002a5244;  // Global at 0x002a5244                   // 0x001ad204: lw $v1, 4($s1)
    if (v1 < 0) goto label_0x1ad408;                            // 0x001ad208: bltz $v1, 0x1ad408
    /* nop */                                                   // 0x001ad20c: nop 
    v0 = v1 + s1;                                               // 0x001ad210: addu $v0, $v1, $s1
    s0 = g_8000000c;  // Global at 0x8000000c                   // 0x001ad214: lbu $s0, 0xc($v0)
    at = (s0 < 0xf) ? 1 : 0;                                    // 0x001ad218: slti $at, $s0, 0xf
    if (at == 0) goto label_0x1ad278;                           // 0x001ad21c: beqz $at, 0x1ad278
    v0 = s0 << 4;                                               // 0x001ad224: sll $v0, $s0, 4
    v0 = s1 + v0;                                               // 0x001ad228: addu $v0, $s1, $v0
    s2 = v0 + 0xa4;                                             // 0x001ad22c: addiu $s2, $v0, 0xa4
    if (s2 == 0) goto label_0x1ad274;                           // 0x001ad230: beqz $s2, 0x1ad274
    v0 = v1 << 4;                                               // 0x001ad234: sll $v0, $v1, 4
    v0 = s1 + v0;                                               // 0x001ad23c: addu $v0, $s1, $v0
    func_0010ab20();  // 10ab20                                // 0x001ad240: jal 0x10ab20
    a0 = v0 + 0x24;                                             // 0x001ad244: addiu $a0, $v0, 0x24
    if (v0 != 0) goto label_0x1ad274;                           // 0x001ad248: bnez $v0, 0x1ad274
    /* nop */                                                   // 0x001ad24c: nop 
    v0 = g_002a5244;  // Global at 0x002a5244                   // 0x001ad250: lw $v0, 4($s1)
    a2 = 0x10;                                                  // 0x001ad258: addiu $a2, $zero, 0x10
    v0 = v0 << 4;                                               // 0x001ad25c: sll $v0, $v0, 4
    v0 = s1 + v0;                                               // 0x001ad260: addu $v0, $s1, $v0
    func_00107ab8();  // 107ab8                                // 0x001ad264: jal 0x107ab8
    a1 = v0 + 0x24;                                             // 0x001ad268: addiu $a1, $v0, 0x24
    goto label_0x1ad40c;                                        // 0x001ad26c: b 0x1ad40c
label_0x1ad274:
label_0x1ad278:
    func_001ac8d0();  // 1ac8d0                                // 0x001ad278: jal 0x1ac8d0
    /* nop */                                                   // 0x001ad27c: nop 
    v0 = g_002a5244;  // Global at 0x002a5244                   // 0x001ad280: lw $v0, 4($s1)
    a1 = 0x24 << 16;                                            // 0x001ad284: lui $a1, 0x24
    a0 = sp + 0x40;                                             // 0x001ad288: addiu $a0, $sp, 0x40
    a1 = &str_0023db30;  // "NOT INITIALIZE MODEL_WORK"         // 0x001ad28c: addiu $a1, $a1, -0x24d0
    v0 = v0 << 4;                                               // 0x001ad290: sll $v0, $v0, 4
    v0 = s1 + v0;                                               // 0x001ad294: addu $v0, $s1, $v0
    func_0010a4d8();  // 10a4d8                                // 0x001ad298: jal 0x10a4d8
    a2 = v0 + 0x24;                                             // 0x001ad29c: addiu $a2, $v0, 0x24
    func_001aacc0();  // 1aacc0                                // 0x001ad2a0: jal 0x1aacc0
    a0 = sp + 0x40;                                             // 0x001ad2a4: addiu $a0, $sp, 0x40
    if (a1 < 0) goto label_0x1ad408;                            // 0x001ad2ac: bltz $a1, 0x1ad408
    a0 = 0xb;                                                   // 0x001ad2b0: addiu $a0, $zero, 0xb
    func_00128f00();  // 128f00                                // 0x001ad2b4: jal 0x128f00
    /* nop */                                                   // 0x001ad2b8: nop 
    g_002a5404 = v0;  // Global at 0x002a5404                   // 0x001ad2bc: sw $v0, 0x1c4($s1)
    a0 = g_002a5404;  // Global at 0x002a5404                   // 0x001ad2c0: lw $a0, 0x1c4($s1)
    if (a0 == 0) goto label_0x1ad408;                           // 0x001ad2c4: beqz $a0, 0x1ad408
    /* nop */                                                   // 0x001ad2c8: nop 
    func_001298c8();  // 1298c8                                // 0x001ad2cc: jal 0x1298c8
    /* nop */                                                   // 0x001ad2d0: nop 
    a0 = g_002a5404;  // Global at 0x002a5404                   // 0x001ad2d4: lw $a0, 0x1c4($s1)
    a2 = g_002a5248;  // Global at 0x002a5248                   // 0x001ad2d8: lw $a2, 8($s1)
    func_00129460();  // 129460                                // 0x001ad2dc: jal 0x129460
    a1 = g_002a5240;  // Global at 0x002a5240                   // 0x001ad2e4: lbu $a1, 0($s1)
    v1 = s0 + s1;                                               // 0x001ad2e8: addu $v1, $s0, $s1
    a0 = 1;                                                     // 0x001ad2ec: addiu $a0, $zero, 1
    a1 = a1 + 1;                                                // 0x001ad2f0: addiu $a1, $a1, 1
    g_002a5240 = a1;  // Global at 0x002a5240                   // 0x001ad2f4: sb $a1, 0($s1)
    *(uint8_t*)((v1) + 0x1a4) = a0;                             // 0x001ad2f8: sb $a0, 0x1a4($v1)
    goto label_0x1ad408;                                        // 0x001ad2fc: b 0x1ad408
    *(uint8_t*)((v1) + 0x1b4) = a0;                             // 0x001ad300: sb $a0, 0x1b4($v1)
    func_00129a08();  // 129a08                                // 0x001ad304: jal 0x129a08
    a0 = g_002a5404;  // Global at 0x002a5404                   // 0x001ad308: lw $a0, 0x1c4($s1)
    v1 = 3;                                                     // 0x001ad30c: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1ad408;                          // 0x001ad310: bne $v0, $v1, 0x1ad408
    /* nop */                                                   // 0x001ad314: nop 
    func_00129010();  // 129010                                // 0x001ad318: jal 0x129010
    a0 = g_002a5404;  // Global at 0x002a5404                   // 0x001ad31c: lw $a0, 0x1c4($s1)
    g_002a5404 = 0;  // Global at 0x002a5404                    // 0x001ad320: sw $zero, 0x1c4($s1)
    v0 = g_002a5244;  // Global at 0x002a5244                   // 0x001ad324: lw $v0, 4($s1)
    a0 = g_002a5248;  // Global at 0x002a5248                   // 0x001ad328: lw $a0, 8($s1)
    v0 = v0 + s1;                                               // 0x001ad32c: addu $v0, $v0, $s1
    s0 = g_8000000c;  // Global at 0x8000000c                   // 0x001ad330: lbu $s0, 0xc($v0)
    func_001ac9d0();  // 1ac9d0                                // 0x001ad334: jal 0x1ac9d0
    v1 = g_002a5244;  // Global at 0x002a5244                   // 0x001ad33c: lw $v1, 4($s1)
    v1 = v1 << 1;                                               // 0x001ad340: sll $v1, $v1, 1
    v1 = v1 + s1;                                               // 0x001ad344: addu $v1, $v1, $s1
    *(uint16_t*)((v1) + 0x14) = v0;                             // 0x001ad348: sh $v0, 0x14($v1)
    a0 = g_002a5244;  // Global at 0x002a5244                   // 0x001ad34c: lw $a0, 4($s1)
    v1 = a0 << 1;                                               // 0x001ad350: sll $v1, $a0, 1
    v1 = v1 + s1;                                               // 0x001ad354: addu $v1, $v1, $s1
    v1 = *(int16_t*)((v1) + 0x14);                              // 0x001ad358: lh $v1, 0x14($v1)
    if (v1 >= 0) goto label_0x1ad378;                           // 0x001ad35c: bgez $v1, 0x1ad378
    at = (s0 < 0x10) ? 1 : 0;                                   // 0x001ad360: slti $at, $s0, 0x10
    a0 = 1;                                                     // 0x001ad364: addiu $a0, $zero, 1
    v1 = s0 + s1;                                               // 0x001ad368: addu $v1, $s0, $s1
    g_002a5240 = a0;  // Global at 0x002a5240                   // 0x001ad36c: sb $a0, 0($s1)
    goto label_0x1ad408;                                        // 0x001ad370: b 0x1ad408
    *(uint8_t*)((v1) + 0x1a4) = 0;                              // 0x001ad374: sb $zero, 0x1a4($v1)
label_0x1ad378:
    if (at == 0) goto label_0x1ad39c;                           // 0x001ad378: beqz $at, 0x1ad39c
    v1 = s0 << 4;                                               // 0x001ad37c: sll $v1, $s0, 4
    v0 = a0 << 4;                                               // 0x001ad380: sll $v0, $a0, 4
    v1 = s1 + v1;                                               // 0x001ad384: addu $v1, $s1, $v1
    v0 = s1 + v0;                                               // 0x001ad388: addu $v0, $s1, $v0
    a0 = v1 + 0xa4;                                             // 0x001ad38c: addiu $a0, $v1, 0xa4
    a1 = v0 + 0x24;                                             // 0x001ad390: addiu $a1, $v0, 0x24
    func_00107ab8();  // 107ab8                                // 0x001ad394: jal 0x107ab8
    a2 = 0x10;                                                  // 0x001ad398: addiu $a2, $zero, 0x10
label_0x1ad39c:
    v0 = g_002a5240;  // Global at 0x002a5240                   // 0x001ad39c: lbu $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001ad3a0: addiu $v0, $v0, 1
    g_002a5240 = v0;  // Global at 0x002a5240                   // 0x001ad3a4: sb $v0, 0($s1)
    func_001a7910();  // 1a7910                                // 0x001ad3a8: jal 0x1a7910
    a0 = 1;                                                     // 0x001ad3ac: addiu $a0, $zero, 1
    if (v0 > 0) goto label_0x1ad408;                            // 0x001ad3b0: bgtz $v0, 0x1ad408
    /* nop */                                                   // 0x001ad3b4: nop 
    v0 = g_002a5240;  // Global at 0x002a5240                   // 0x001ad3b8: lbu $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001ad3bc: addiu $v0, $v0, 1
    g_002a5240 = v0;  // Global at 0x002a5240                   // 0x001ad3c0: sb $v0, 0($s1)
    v0 = 0x8000 << 16;                                          // 0x001ad3c4: lui $v0, 0x8000
    a1 = 1;                                                     // 0x001ad3c8: addiu $a1, $zero, 1
    func_001a7a60();  // 1a7a60                                // 0x001ad3cc: jal 0x1a7a60
    a0 = v0 | 0xc;                                              // 0x001ad3d0: ori $a0, $v0, 0xc
    if (v0 > 0) goto label_0x1ad408;                            // 0x001ad3d4: bgtz $v0, 0x1ad408
    /* nop */                                                   // 0x001ad3d8: nop 
    v1 = g_002a5240;  // Global at 0x002a5240                   // 0x001ad3dc: lbu $v1, 0($s1)
    v1 = v1 + 1;                                                // 0x001ad3e0: addiu $v1, $v1, 1
    g_002a5240 = v1;  // Global at 0x002a5240                   // 0x001ad3e4: sb $v1, 0($s1)
    a0 = g_002a5244;  // Global at 0x002a5244                   // 0x001ad3e8: lw $a0, 4($s1)
    a1 = 2;                                                     // 0x001ad3ec: addiu $a1, $zero, 2
    v1 = 1;                                                     // 0x001ad3f0: addiu $v1, $zero, 1
    a0 = a0 + s1;                                               // 0x001ad3f4: addu $a0, $a0, $s1
    a0 = g_80000030;  // Global at 0x80000030                   // 0x001ad3f8: lbu $a0, 0xc($a0)
    a0 = a0 + s1;                                               // 0x001ad3fc: addu $a0, $a0, $s1
    g_800001c8 = a1;  // Global at 0x800001c8                   // 0x001ad400: sb $a1, 0x1a4($a0)
    g_002a5240 = v1;  // Global at 0x002a5240                   // 0x001ad404: sb $v1, 0($s1)
label_0x1ad408:
label_0x1ad40c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ad40c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ad410: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ad414: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ad418: jr $ra
    sp = sp + 0x140;                                            // 0x001ad41c: addiu $sp, $sp, 0x140
}