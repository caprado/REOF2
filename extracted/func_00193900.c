void func_00193900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x3f80 << 16;                                          // 0x00193900: lui $v0, 0x3f80
    a1 = 0x28 << 16;                                            // 0x00193904: lui $a1, 0x28
    /* move to FPU: $v0, $f12 */                                // 0x00193908: mtc1 $v0, $f12
    a1 = a1 + 0x5420;                                           // 0x0019390c: addiu $a1, $a1, 0x5420
    /* FPU: mov.s $f13, $f12 */                                 // 0x00193910: mov.s $f13, $f12
    goto label_0x193920;                                        // 0x00193914: j 0x193920
    /* FPU: mov.s $f14, $f12 */                                 // 0x00193918: mov.s $f14, $f12
    /* nop */                                                   // 0x0019391c: nop 
label_0x193920:
    sp = sp + -0xc0;                                            // 0x00193920: addiu $sp, $sp, -0xc0
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0019392c: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x00193934: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x0019393c: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00193944: swc1 $f20, 0($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x00193948: mov.s $f22, $f12
    /* FPU: mov.s $f21, $f13 */                                 // 0x0019394c: mov.s $f21, $f13
    /* FPU: mov.s $f20, $f14 */                                 // 0x00193950: mov.s $f20, $f14
label_0x193954:
    v0 = a0 << 2;                                               // 0x00193954: sll $v0, $a0, 2
    v1 = s1 + v0;                                               // 0x00193958: addu $v1, $s1, $v0
    a0 = a0 + 1;                                                // 0x0019395c: addiu $a0, $a0, 1
    FPU_F0 = *(float*)((v1) + 0xdc);  // Load float             // 0x00193960: lwc1 $f0, 0xdc($v1)
    v0 = (a0 < 0xa) ? 1 : 0;                                    // 0x00193964: slti $v0, $a0, 0xa
    if (v0 != 0) goto label_0x193954;                           // 0x00193968: bnez $v0, 0x193954
    *(float*)((v1) + 0x104) = FPU_F0;  // Store float           // 0x0019396c: swc1 $f0, 0x104($v1)
    a0 = s1 + 0x40;                                             // 0x00193970: addiu $a0, $s1, 0x40
    func_00193a20();  // 193a20                                // 0x00193974: jal 0x193a20
    a1 = s1 + 0x104;                                            // 0x00193978: addiu $a1, $s1, 0x104
    a0 = sp + 0x40;                                             // 0x0019397c: addiu $a0, $sp, 0x40
    a1 = s1 + 0x104;                                            // 0x00193980: addiu $a1, $s1, 0x104
    /* FPU: mov.s $f12, $f22 */                                 // 0x00193984: mov.s $f12, $f22
    /* FPU: mov.s $f13, $f21 */                                 // 0x00193988: mov.s $f13, $f21
    func_00193b70();  // 193b70                                // 0x0019398c: jal 0x193b70
    /* FPU: mov.s $f14, $f20 */                                 // 0x00193990: mov.s $f14, $f20
    a0 = sp + 0x80;                                             // 0x00193994: addiu $a0, $sp, 0x80
    a1 = sp + 0x40;                                             // 0x00193998: addiu $a1, $sp, 0x40
    func_00191030();  // 191030                                // 0x0019399c: jal 0x191030
    a0 = s1 + 0x80;                                             // 0x001939a4: addiu $a0, $s1, 0x80
    func_001911e0();  // 1911e0                                // 0x001939a8: jal 0x1911e0
    a1 = sp + 0x80;                                             // 0x001939ac: addiu $a1, $sp, 0x80
    a0 = *(int32_t*)((s1) + 0xd0);                              // 0x001939b0: lw $a0, 0xd0($s1)
    if (a0 == 0) goto label_0x1939dc;                           // 0x001939b4: beqz $a0, 0x1939dc
    /* nop */                                                   // 0x001939b8: nop 
    FPU_F2 = *(float*)((s1) + 0x104);  // Load float            // 0x001939bc: lwc1 $f2, 0x104($s1)
    a1 = sp + 0x80;                                             // 0x001939c0: addiu $a1, $sp, 0x80
    FPU_F1 = *(float*)((s1) + 0x108);  // Load float            // 0x001939c4: lwc1 $f1, 0x108($s1)
    FPU_F0 = *(float*)((s1) + 0x10c);  // Load float            // 0x001939c8: lwc1 $f0, 0x10c($s1)
    /* FPU: mul.s $f12, $f22, $f2 */                            // 0x001939cc: mul.s $f12, $f22, $f2
    /* FPU: mul.s $f13, $f21, $f1 */                            // 0x001939d0: mul.s $f13, $f21, $f1
    func_00193920();  // 193920                                // 0x001939d4: jal 0x193920
    /* FPU: mul.s $f14, $f20, $f0 */                            // 0x001939d8: mul.s $f14, $f20, $f0
label_0x1939dc:
    a0 = *(int32_t*)((s1) + 0xcc);                              // 0x001939dc: lw $a0, 0xcc($s1)
    if (a0 == 0) goto label_0x1939f8;                           // 0x001939e0: beqz $a0, 0x1939f8
    /* FPU: mov.s $f12, $f22 */                                 // 0x001939e4: mov.s $f12, $f22
    /* FPU: mov.s $f13, $f21 */                                 // 0x001939ec: mov.s $f13, $f21
    func_00193920();  // 193920                                // 0x001939f0: jal 0x193920
    /* FPU: mov.s $f14, $f20 */                                 // 0x001939f4: mov.s $f14, $f20
label_0x1939f8:
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x001939fc: lwc1 $f22, 8($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00193a00: ld.b $w0, -0x4f($zero)
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00193a04: lwc1 $f21, 4($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00193a08: aver_u.h $w0, $w0, $w16
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00193a0c: lwc1 $f20, 0($sp)
    v0 = 1;                                                     // 0x00193a10: addiu $v0, $zero, 1
    return;                                                     // 0x00193a14: jr $ra
    sp = sp + 0xc0;                                             // 0x00193a18: addiu $sp, $sp, 0xc0
}