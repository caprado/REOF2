/** @category: graphics/init @status: complete @author: caprado */
void func_001a1590() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4a, local_4c;
    
    a0 = 0x2a << 16;                                            // 0x001a1590: lui $a0, 0x2a
    a1 = 0x78;                                                  // 0x001a1594: addiu $a1, $zero, 0x78
    return func_001a1530();  // Tail call                        // 0x001a1598: j 0x1a14c0
    a0 = a0 + 0x480;                                            // 0x001a159c: addiu $a0, $a0, 0x480
    t1 = g_002a0480;  // Global at 0x002a0480                   // 0x001a15a0: lh $t1, 0($a0)
    t3 = a1 << 3;                                               // 0x001a15a4: sll $t3, $a1, 3
    t0 = g_002a0482;  // Global at 0x002a0482                   // 0x001a15a8: lh $t0, 2($a0)
    v0 = gp + -0x6438;                                          // 0x001a15ac: addiu $v0, $gp, -0x6438
    a3 = g_002a0484;  // Global at 0x002a0484                   // 0x001a15b0: lh $a3, 4($a0)
    t2 = v0 + t3;                                               // 0x001a15b4: addu $t2, $v0, $t3
    a2 = g_002a0486;  // Global at 0x002a0486                   // 0x001a15b8: lh $a2, 6($a0)
    v0 = gp + -0x6436;                                          // 0x001a15bc: addiu $v0, $gp, -0x6436
    v1 = v0 + t3;                                               // 0x001a15c0: addu $v1, $v0, $t3
    v0 = gp + -0x6434;                                          // 0x001a15c4: addiu $v0, $gp, -0x6434
    v0 = v0 + t3;                                               // 0x001a15c8: addu $v0, $v0, $t3
    *(uint16_t*)(t2) = t1;                                      // 0x001a15cc: sh $t1, 0($t2)
    *(uint16_t*)((t2) + 2) = t0;                                // 0x001a15d4: sh $t0, 2($t2)
    *(uint16_t*)((t2) + 4) = a3;                                // 0x001a15d8: sh $a3, 4($t2)
    *(uint16_t*)((t2) + 6) = a2;                                // 0x001a15dc: sh $a2, 6($t2)
    a2 = *(int16_t*)(v1);                                       // 0x001a15e0: lh $a2, 0($v1)
    a3 = g_80000000;  // Global at 0x80000000                   // 0x001a15e4: lh $a3, 0($v0)
    return func_001a5aa0();  // Tail call                       // 0x001a15e8: j 0x1a5aa0
    a1 = *(int16_t*)(t2);                                       // 0x001a15ec: lh $a1, 0($t2)
    sp = sp + -0x50;                                            // 0x001a15f0: addiu $sp, $sp, -0x50
    v1 = a0 << 4;                                               // 0x001a15f4: sll $v1, $a0, 4
    v0 = a1 << 1;                                               // 0x001a15fc: sll $v0, $a1, 1
    v1 = v1 - a0;                                               // 0x001a1604: subu $v1, $v1, $a0
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001a1608: addu.qb $zero, $sp, $s0
    v0 = v0 + a1;                                               // 0x001a160c: addu $v0, $v0, $a1
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001a1610: swc1 $f20, 0($sp)
    t0 = *(int32_t*)((gp) + -0x642c);                           // 0x001a1618: lw $t0, -0x642c($gp)
    v1 = v1 << 3;                                               // 0x001a161c: sll $v1, $v1, 3
    v0 = v0 << 2;                                               // 0x001a1620: sll $v0, $v0, 2
    a1 = sp + 0x4e;                                             // 0x001a1628: addiu $a1, $sp, 0x4e
    a3 = sp + 0x4a;                                             // 0x001a162c: addiu $a3, $sp, 0x4a
    v1 = v1 + t0;                                               // 0x001a1630: addu $v1, $v1, $t0
    v0 = v0 + v1;                                               // 0x001a1634: addu $v0, $v0, $v1
    FPU_F2 = *(float*)((v0) + 0x1c);  // Load float             // 0x001a1638: lwc1 $f2, 0x1c($v0)
    FPU_F1 = *(float*)((v0) + 0x20);  // Load float             // 0x001a163c: lwc1 $f1, 0x20($v0)
    FPU_F0 = *(float*)((v0) + 0x24);  // Load float             // 0x001a1640: lwc1 $f0, 0x24($v0)
    *(float*)(a2) = FPU_F2;  // Store float                     // 0x001a1644: swc1 $f2, 0($a2)
    *(float*)((a2) + 4) = FPU_F1;  // Store float               // 0x001a1648: swc1 $f1, 4($a2)
    *(float*)((a2) + 8) = FPU_F0;  // Store float               // 0x001a164c: swc1 $f0, 8($a2)
    func_001a5ad0();  // 1a5ad0                                // 0x001a1650: jal 0x1a5ad0
    a2 = sp + 0x4c;                                             // 0x001a1654: addiu $a2, $sp, 0x4c
    if (s1 == 0) goto label_0x1a1668;                           // 0x001a1658: beqz $s1, 0x1a1668
    /* nop */                                                   // 0x001a165c: nop 
    v0 = local_4a;                                              // 0x001a1660: lh $v0, 0x4a($sp)
    local_4c = v0;                                              // 0x001a1664: sh $v0, 0x4c($sp)
label_0x1a1668:
    v1 = local_4c;                                              // 0x001a1668: lh $v1, 0x4c($sp)
    v0 = 0x42fe << 16;                                          // 0x001a166c: lui $v0, 0x42fe
    /* move to FPU: $v0, $f1 */                                 // 0x001a1670: mtc1 $v0, $f1
    v0 = *(int16_t*)((s0) + 4);                                 // 0x001a1674: lh $v0, 4($s0)
    a0 = v1 + -1;                                               // 0x001a1678: addiu $a0, $v1, -1
    /* move to FPU: $a0, $f0 */                                 // 0x001a167c: mtc1 $a0, $f0
    /* nop */                                                   // 0x001a1680: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001a1684: cvt.s.w $f0, $f0
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x001a1688: sub.s $f0, $f1, $f0
    /* FPU: div.s $f20, $f1, $f0 */                             // 0x001a168c: div.s $f20, $f1, $f0
    /* nop */                                                   // 0x001a1690: nop 
    /* nop */                                                   // 0x001a1694: nop 
    if (v0 == 0) goto label_0x1a16fc;                           // 0x001a1698: beqz $v0, 0x1a16fc
    /* nop */                                                   // 0x001a169c: nop 
    v0 = 0x4f00 << 16;                                          // 0x001a16a8: lui $v0, 0x4f00
    v1 = v1 - a0;                                               // 0x001a16ac: subu $v1, $v1, $a0
    /* move to FPU: $v1, $f1 */                                 // 0x001a16b0: mtc1 $v1, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x001a16b4: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a16b8: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001a16bc: cvt.s.w $f1, $f1
    /* FPU: mul.s $f1, $f20, $f1 */                             // 0x001a16c0: mul.s $f1, $f20, $f1
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a16c4: c.ole.s $f0, $f1
    /* bc1t 0x1a16e0 */                                         // 0x001a16c8: bc1t 0x1a16e0
    /* nop */                                                   // 0x001a16cc: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a16d0: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a16d4: mfc1 $v1, $f1
    goto label_0x1a16fc;                                        // 0x001a16d8: b 0x1a16fc
    *(uint16_t*)((s0) + 4) = v1;                                // 0x001a16dc: sh $v1, 4($s0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a16e0: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001a16e4: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a16e8: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a16ec: mfc1 $v1, $f1
    /* nop */                                                   // 0x001a16f0: nop 
    v1 = v1 | v0;                                               // 0x001a16f4: or $v1, $v1, $v0
    *(uint16_t*)((s0) + 4) = v1;                                // 0x001a16f8: sh $v1, 4($s0)
label_0x1a16fc:
    a0 = *(int16_t*)(s0);                                       // 0x001a16fc: lh $a0, 0($s0)
    a1 = local_4c;                                              // 0x001a1700: lh $a1, 0x4c($sp)
    func_001a1740();  // 1a1740                                // 0x001a1704: jal 0x1a1740
    /* FPU: mov.s $f12, $f20 */                                 // 0x001a1708: mov.s $f12, $f20
    *(uint16_t*)(s0) = v0;                                      // 0x001a170c: sh $v0, 0($s0)
    a0 = *(int16_t*)((s0) + 2);                                 // 0x001a1710: lh $a0, 2($s0)
    a1 = local_4c;                                              // 0x001a1714: lh $a1, 0x4c($sp)
    func_001a1740();  // 1a1740                                // 0x001a1718: jal 0x1a1740
    /* FPU: mov.s $f12, $f20 */                                 // 0x001a171c: mov.s $f12, $f20
    *(uint16_t*)((s0) + 2) = v0;                                // 0x001a1720: sh $v0, 2($s0)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001a1728: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001a172c: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001a1730: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001a1734: jr $ra
    sp = sp + 0x50;                                             // 0x001a1738: addiu $sp, $sp, 0x50
}