void func_001d51f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001d51f0: addiu $sp, $sp, -0x70
    a2 = 0x140;                                                 // 0x001d51fc: addiu $a2, $zero, 0x140
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d5200: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d520c: dpa.w.ph $ac0, $sp, $s3
    a0 = 0x33 << 16;                                            // 0x001d5210: lui $a0, 0x33
    a0 = a0 + -0x1470;                                          // 0x001d5218: addiu $a0, $a0, -0x1470
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d521c: addu.qb $zero, $sp, $s1
    func_00107c70();  // 107c70                                // 0x001d5220: jal 0x107c70
    a0 = 0x33 << 16;                                            // 0x001d5228: lui $a0, 0x33
    a0 = a0 + -0x1530;                                          // 0x001d5230: addiu $a0, $a0, -0x1530
    func_00107c70();  // 107c70                                // 0x001d5234: jal 0x107c70
    a2 = 0xc0;                                                  // 0x001d5238: addiu $a2, $zero, 0xc0
    v1 = *(int32_t*)((s5) + 0x14);                              // 0x001d523c: lw $v1, 0x14($s5)
    v0 = 1 << 16;                                               // 0x001d5240: lui $v0, 1
    s3 = 0x33 << 16;                                            // 0x001d5244: lui $s3, 0x33
    s2 = 0x33 << 16;                                            // 0x001d5248: lui $s2, 0x33
    v0 = v0 | 0x4680;                                           // 0x001d524c: ori $v0, $v0, 0x4680
    s3 = s3 + -0x1530;                                          // 0x001d5250: addiu $s3, $s3, -0x1530
    s2 = s2 + -0x1470;                                          // 0x001d5254: addiu $s2, $s2, -0x1470
    *(uint32_t*)((gp) + -0x622c) = v1;                          // 0x001d525c: sw $v1, -0x622c($gp)
    v1 = *(int32_t*)((s5) + 0x14);                              // 0x001d5260: lw $v1, 0x14($s5)
    s1 = *(int32_t*)((gp) + -0x622c);                           // 0x001d5264: lw $s1, -0x622c($gp)
    s0 = v1 + v0;                                               // 0x001d5268: addu $s0, $v1, $v0
label_0x1d526c:
    func_00107c70();  // 107c70                                // 0x001d5274: jal 0x107c70
    a2 = 0xc;                                                   // 0x001d5278: addiu $a2, $zero, 0xc
    func_00107c70();  // 107c70                                // 0x001d5284: jal 0x107c70
    a2 = 0x1468;                                                // 0x001d5288: addiu $a2, $zero, 0x1468
    v0 = s1 + 0x820;                                            // 0x001d528c: addiu $v0, $s1, 0x820
    v1 = s1 + 0xa20;                                            // 0x001d5290: addiu $v1, $s1, 0xa20
    g_0032eaa0 = v0;  // Global at 0x0032eaa0                   // 0x001d5294: sw $v0, 0($s1)
    v0 = s1 + 0xc20;                                            // 0x001d529c: addiu $v0, $s1, 0xc20
    g_0032eaa4 = v1;  // Global at 0x0032eaa4                   // 0x001d52a0: sw $v1, 4($s1)
    g_0032f2b8 = v0;  // Global at 0x0032f2b8                   // 0x001d52a4: sw $v0, 0x818($s1)
    g_0032f2a8 = s0;  // Global at 0x0032f2a8                   // 0x001d52a8: sw $s0, 0x808($s1)
    g_0032ead1 = s4;  // Global at 0x0032ead1                   // 0x001d52ac: sb $s4, 1($s3)
    s0 = s0 + 0x1300;                                           // 0x001d52b0: addiu $s0, $s0, 0x1300
    g_0032ead4 = s1;  // Global at 0x0032ead4                   // 0x001d52b4: sw $s1, 4($s3)
    g_0032eb9e = s4;  // Global at 0x0032eb9e                   // 0x001d52b8: sb $s4, 0xe($s2)
    v1 = -1;                                                    // 0x001d52bc: addiu $v1, $zero, -1
label_0x1d52c0:
    v0 = a0 << 1;                                               // 0x001d52c0: sll $v0, $a0, 1
    v0 = s2 + v0;                                               // 0x001d52c4: addu $v0, $s2, $v0
    a0 = a0 + 1;                                                // 0x001d52c8: addiu $a0, $a0, 1
    g_0032f6c2 = v1;  // Global at 0x0032f6c2                   // 0x001d52cc: sh $v1, 2($v0)
    v0 = (a0 < 6) ? 1 : 0;                                      // 0x001d52d0: slti $v0, $a0, 6
    if (v0 != 0) goto label_0x1d52c0;                           // 0x001d52d4: bnez $v0, 0x1d52c0
    /* nop */                                                   // 0x001d52d8: nop 
    s4 = s4 + 1;                                                // 0x001d52dc: addiu $s4, $s4, 1
    s3 = s3 + 0xc;                                              // 0x001d52e0: addiu $s3, $s3, 0xc
    v0 = (s4 < 0x10) ? 1 : 0;                                   // 0x001d52e4: slti $v0, $s4, 0x10
    s1 = s1 + 0x1468;                                           // 0x001d52e8: addiu $s1, $s1, 0x1468
    if (v0 != 0) goto label_0x1d526c;                           // 0x001d52ec: bnez $v0, 0x1d526c
    s2 = s2 + 0x14;                                             // 0x001d52f0: addiu $s2, $s2, 0x14
    a0 = 0x33 << 16;                                            // 0x001d52f4: lui $a0, 0x33
    a0 = a0 + -0x1570;                                          // 0x001d52fc: addiu $a0, $a0, -0x1570
    func_00107c70();  // 107c70                                // 0x001d5300: jal 0x107c70
    a2 = 0x40;                                                  // 0x001d5304: addiu $a2, $zero, 0x40
    v1 = *(int32_t*)((s5) + 0x14);                              // 0x001d5308: lw $v1, 0x14($s5)
    v0 = 2 << 16;                                               // 0x001d530c: lui $v0, 2
    v0 = v0 | 0x7680;                                           // 0x001d5310: ori $v0, $v0, 0x7680
    s1 = 0x33 << 16;                                            // 0x001d5314: lui $s1, 0x33
    s1 = s1 + -0x1570;                                          // 0x001d5318: addiu $s1, $s1, -0x1570
    s2 = v1 + v0;                                               // 0x001d5320: addu $s2, $v1, $v0
label_0x1d5324:
    g_0032ea94 = s2;  // Global at 0x0032ea94                   // 0x001d5324: sw $s2, 4($s1)
    a0 = g_0032ea94;  // Global at 0x0032ea94                   // 0x001d532c: lw $a0, 4($s1)
    func_00107c70();  // 107c70                                // 0x001d5330: jal 0x107c70
    a2 = 0x1000;                                                // 0x001d5334: addiu $a2, $zero, 0x1000
    g_0032ea91 = s0;  // Global at 0x0032ea91                   // 0x001d5338: sb $s0, 1($s1)
    s2 = s2 + 0x1000;                                           // 0x001d533c: addiu $s2, $s2, 0x1000
    s0 = s0 + 1;                                                // 0x001d5340: addiu $s0, $s0, 1
    v1 = (s0 < 4) ? 1 : 0;                                      // 0x001d5344: slti $v1, $s0, 4
    if (v1 != 0) goto label_0x1d5324;                           // 0x001d5348: bnez $v1, 0x1d5324
    s1 = s1 + 0x10;                                             // 0x001d534c: addiu $s1, $s1, 0x10
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d5354: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d5358: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d5360: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d5364: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5368: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d536c: jr $ra
    sp = sp + 0x70;                                             // 0x001d5370: addiu $sp, $sp, 0x70
}