void func_00167344() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x70;                                            // 0x00167344: addiu $sp, $sp, -0x70
    v0 = v0 - a1;                                               // 0x00167348: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167350: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00167358: addu $v0, $v0, $a1
    a3 = a0 + 0x1140;                                           // 0x00167364: addiu $a3, $a0, 0x1140
    v0 = v0 << 2;                                               // 0x0016736c: sll $v0, $v0, 2
    a3 = a3 + v0;                                               // 0x00167374: addu $a3, $a3, $v0
    v1 = *(int32_t*)((a3) + 4);                                 // 0x00167388: lw $v1, 4($a3)
    if (v1 != 0) goto label_0x1673a8;                           // 0x0016738c: bnez $v1, 0x1673a8
    a1 = 0xff00 << 16;                                          // 0x00167394: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x00167398: jal 0x1698d0
    a1 = a1 | 0x401;                                            // 0x0016739c: ori $a1, $a1, 0x401
    goto label_0x1674bc;                                        // 0x001673a0: b 0x1674bc
label_0x1673a8:
    s0 = a3 + 0x10;                                             // 0x001673a8: addiu $s0, $a3, 0x10
    func_00169b88();  // 169b88                                // 0x001673ac: jal 0x169b88
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001673b4: lw $v0, 8($s0)
    local_4 = v0;                                               // 0x001673bc: sw $v0, 4($sp)
    a1 = *(int32_t*)((s0) + 0x18);                              // 0x001673c0: lw $a1, 0x18($s0)
    s3 = *(int32_t*)((s0) + 0x2c);                              // 0x001673c4: lw $s3, 0x2c($s0)
    s4 = *(int32_t*)((s0) + 0x1c);                              // 0x001673c8: lw $s4, 0x1c($s0)
    s1 = *(int32_t*)((s0) + 0x28);                              // 0x001673cc: lw $s1, 0x28($s0)
    s7 = *(int32_t*)((s0) + 0xc);                               // 0x001673d0: lw $s7, 0xc($s0)
    s2 = *(int32_t*)((s0) + 0x10);                              // 0x001673d4: lw $s2, 0x10($s0)
    fp = *(int32_t*)((s0) + 0x14);                              // 0x001673d8: lw $fp, 0x14($s0)
    s6 = *(int32_t*)((s0) + 0x20);                              // 0x001673dc: lw $s6, 0x20($s0)
    /* FPU: addu.qb $zero, $sp, $a1 */                          // 0x001673e0: addu.qb $zero, $sp, $a1
    func_00169ba0();  // 169ba0                                // 0x001673e4: jal 0x169ba0
    s0 = *(int32_t*)((s0) + 0x24);                              // 0x001673e8: lw $s0, 0x24($s0)
    v1 = local_4;                                               // 0x001673ec: lw $v1, 4($sp)
    v0 = s3 + s4;                                               // 0x001673f0: addu $v0, $s3, $s4
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001673f4: slt $v0, $s1, $v0
    *(uint32_t*)((s5) + 8) = s2;                                // 0x001673f8: sw $s2, 8($s5)
    *(uint32_t*)(s5) = v1;                                      // 0x001673fc: sw $v1, 0($s5)
    *(uint32_t*)((s5) + 4) = s7;                                // 0x00167400: sw $s7, 4($s5)
    *(uint32_t*)((s5) + 0x24) = s1;                             // 0x00167404: sw $s1, 0x24($s5)
    *(uint32_t*)((s5) + 0x28) = s3;                             // 0x00167408: sw $s3, 0x28($s5)
    if (v0 != 0) goto label_0x167428;                           // 0x0016740c: bnez $v0, 0x167428
    /* FPU: aver_u.h $w0, $w0, $w5 */                           // 0x00167410: aver_u.h $w0, $w0, $w5
    *(uint32_t*)((s5) + 0x20) = 0;                              // 0x00167414: sw $zero, 0x20($s5)
    *(uint32_t*)((s5) + 0xc) = 0;                               // 0x00167418: sw $zero, 0xc($s5)
    *(uint32_t*)((s5) + 0x14) = 0;                              // 0x0016741c: sw $zero, 0x14($s5)
    goto label_0x16746c;                                        // 0x00167420: b 0x16746c
    *(uint32_t*)((s5) + 0x18) = 0;                              // 0x00167424: sw $zero, 0x18($s5)
label_0x167428:
    v0 = (s6 < s0) ? 1 : 0;                                     // 0x00167428: slt $v0, $s6, $s0
    /* beqzl $v0, 0x167478 */                                   // 0x0016742c: beqzl $v0, 0x167478
    v0 = s4 - s6;                                               // 0x00167430: subu $v0, $s4, $s6
    v0 = s0 - s6;                                               // 0x00167434: subu $v0, $s0, $s6
    v1 = (s7 < 9) ? 1 : 0;                                      // 0x00167438: slti $v1, $s7, 9
    *(uint32_t*)((s5) + 0xc) = v0;                              // 0x0016743c: sw $v0, 0xc($s5)
    if (v1 != 0) goto label_0x167450;                           // 0x00167440: bnez $v1, 0x167450
    v0 = fp + s6;                                               // 0x00167444: addu $v0, $fp, $s6
    v0 = s6 << 1;                                               // 0x00167448: sll $v0, $s6, 1
    v0 = fp + v0;                                               // 0x0016744c: addu $v0, $fp, $v0
label_0x167450:
    *(uint32_t*)((s5) + 0x14) = v0;                             // 0x00167450: sw $v0, 0x14($s5)
    if (v1 != 0) goto label_0x167464;                           // 0x00167454: bnez $v1, 0x167464
    v0 = a1 + s6;                                               // 0x00167458: addu $v0, $a1, $s6
    v0 = s6 << 1;                                               // 0x0016745c: sll $v0, $s6, 1
    v0 = a1 + v0;                                               // 0x00167460: addu $v0, $a1, $v0
label_0x167464:
    *(uint32_t*)((s5) + 0x18) = v0;                             // 0x00167464: sw $v0, 0x18($s5)
    *(uint32_t*)((s5) + 0x20) = 0;                              // 0x00167468: sw $zero, 0x20($s5)
label_0x16746c:
    *(uint32_t*)((s5) + 0x10) = 0;                              // 0x0016746c: sw $zero, 0x10($s5)
    goto label_0x1674b4;                                        // 0x00167470: b 0x1674b4
    *(uint32_t*)((s5) + 0x1c) = 0;                              // 0x00167474: sw $zero, 0x1c($s5)
    v1 = (s7 < 9) ? 1 : 0;                                      // 0x00167478: slti $v1, $s7, 9
    *(uint32_t*)((s5) + 0xc) = v0;                              // 0x0016747c: sw $v0, 0xc($s5)
    if (v1 != 0) goto label_0x167490;                           // 0x00167480: bnez $v1, 0x167490
    v0 = fp + s6;                                               // 0x00167484: addu $v0, $fp, $s6
    v0 = s6 << 1;                                               // 0x00167488: sll $v0, $s6, 1
    v0 = fp + v0;                                               // 0x0016748c: addu $v0, $fp, $v0
label_0x167490:
    *(uint32_t*)((s5) + 0x14) = v0;                             // 0x00167490: sw $v0, 0x14($s5)
    if (v1 != 0) goto label_0x1674a4;                           // 0x00167494: bnez $v1, 0x1674a4
    v0 = a1 + s6;                                               // 0x00167498: addu $v0, $a1, $s6
    v0 = s6 << 1;                                               // 0x0016749c: sll $v0, $s6, 1
    v0 = a1 + v0;                                               // 0x001674a0: addu $v0, $a1, $v0
label_0x1674a4:
    *(uint32_t*)((s5) + 0x20) = a1;                             // 0x001674a4: sw $a1, 0x20($s5)
    *(uint32_t*)((s5) + 0x18) = v0;                             // 0x001674a8: sw $v0, 0x18($s5)
    *(uint32_t*)((s5) + 0x10) = s0;                             // 0x001674ac: sw $s0, 0x10($s5)
    *(uint32_t*)((s5) + 0x1c) = fp;                             // 0x001674b0: sw $fp, 0x1c($s5)
label_0x1674b4:
label_0x1674bc:
    return;                                                     // 0x001674e0: jr $ra
    sp = sp + 0x70;                                             // 0x001674e4: addiu $sp, $sp, 0x70
}