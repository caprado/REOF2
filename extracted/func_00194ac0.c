void func_00194ac0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00194ac0: addiu $sp, $sp, -0x30
    at = 0x29 << 16;                                            // 0x00194ac4: lui $at, 0x29
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00194acc: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00194ad0: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00194ad4: swc1 $f20, 0($sp)
    v0 = g_00290364;  // Global at 0x00290364                   // 0x00194ad8: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x194aec;                           // 0x00194adc: beqz $v0, 0x194aec
    goto label_0x194cd0;                                        // 0x00194ae4: b 0x194cd0
    v0 = 1;                                                     // 0x00194ae8: addiu $v0, $zero, 1
label_0x194aec:
    a0 = 0x21 << 16;                                            // 0x00194aec: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x00194af0: lui $a1, 0x7000
    a0 = a0 + 0x6580;                                           // 0x00194af4: addiu $a0, $a0, 0x6580
    func_00189ad0();  // 0x1899f8                                // 0x00194af8: jal 0x1899f8
    a2 = 3;                                                     // 0x00194afc: addiu $a2, $zero, 3
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x00194b00: lw $a0, 0x20($s0)
    func_00198aa0();  // 0x1989a0                                // 0x00194b04: jal 0x1989a0
    a1 = 1;                                                     // 0x00194b08: addiu $a1, $zero, 1
    a0 = (unsigned)v0 >> 0x10;                                  // 0x00194b0c: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x00194b10: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x00194b14: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x00194b18: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x00194b20: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x00194b24: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x00194b28: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x00194b30: srl $v0, $v0, 0x18
    a0 = v1 | a0;                                               // 0x00194b34: or $a0, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x00194b38: andi $v1, $v0, 0xff
    v1 = v1 | a0;                                               // 0x00194b44: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x00194b4c: or $v0, $v0, $v1
    func_00198930();  // 0x198910                                // 0x00194b54: jal 0x198910
    FPU_F12 = *(float*)(s0);  // Load float                     // 0x00194b58: lwc1 $f12, 0($s0)
    FPU_F12 = *(float*)((s0) + 4);  // Load float               // 0x00194b5c: lwc1 $f12, 4($s0)
    func_00198970();  // 0x198930                                // 0x00194b60: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x00194b64: mov.s $f21, $f0
    FPU_F12 = *(float*)((s0) + 8);  // Load float               // 0x00194b68: lwc1 $f12, 8($s0)
    func_001989a0();  // 0x198970                                // 0x00194b6c: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x00194b70: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x00194b74: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x00194b78: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x00194b7c: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x00194b80: mtc1 $v0, $f1
    /* nop */                                                   // 0x00194b84: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x00194b88: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x00194b8c: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x00194b90: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x00194b94: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00194b98: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x00194b9c: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x00194ba0: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x00194ba4: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x00194ba8: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00194bac: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x00194bb0: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x00194bb4: mfc1 $v0, $f2
    /* nop */                                                   // 0x00194bb8: nop 
    v0 = v0 << 4;                                               // 0x00194bbc: sll $v0, $v0, 4
    /* bc1t 0x194bdc */                                         // 0x00194bc4: bc1t 0x194bdc
    a0 = v1 | v0;                                               // 0x00194bc8: or $a0, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00194bcc: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00194bd0: mfc1 $v1, $f0
    goto label_0x194bf8;                                        // 0x00194bd4: b 0x194bf8
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00194bdc: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x00194be0: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00194be4: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00194be8: mfc1 $v1, $f0
    /* nop */                                                   // 0x00194bec: nop 
    v1 = v1 | v0;                                               // 0x00194bf0: or $v1, $v1, $v0
label_0x194bf8:
    at = 0x7000 << 16;                                          // 0x00194bf8: lui $at, 0x7000
    v0 = v0 | a0;                                               // 0x00194c04: or $v0, $v0, $a0
    func_00198930();  // 0x198910                                // 0x00194c0c: jal 0x198910
    FPU_F12 = *(float*)((s0) + 0x10);  // Load float            // 0x00194c10: lwc1 $f12, 0x10($s0)
    FPU_F12 = *(float*)((s0) + 0x14);  // Load float            // 0x00194c14: lwc1 $f12, 0x14($s0)
    func_00198970();  // 0x198930                                // 0x00194c18: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x00194c1c: mov.s $f21, $f0
    FPU_F12 = *(float*)((s0) + 0x18);  // Load float            // 0x00194c20: lwc1 $f12, 0x18($s0)
    func_001989a0();  // 0x198970                                // 0x00194c24: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x00194c28: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x00194c2c: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x00194c30: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x00194c34: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x00194c38: mtc1 $v0, $f1
    /* nop */                                                   // 0x00194c3c: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x00194c40: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x00194c44: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x00194c48: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x00194c4c: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00194c50: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x00194c54: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x00194c58: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x00194c5c: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x00194c60: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00194c64: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x00194c68: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x00194c6c: mfc1 $v0, $f2
    /* nop */                                                   // 0x00194c70: nop 
    v0 = v0 << 4;                                               // 0x00194c74: sll $v0, $v0, 4
    /* bc1t 0x194c94 */                                         // 0x00194c7c: bc1t 0x194c94
    a1 = v1 | v0;                                               // 0x00194c80: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00194c84: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00194c88: mfc1 $v1, $f0
    goto label_0x194cb0;                                        // 0x00194c8c: b 0x194cb0
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00194c94: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x00194c98: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00194c9c: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00194ca0: mfc1 $v1, $f0
    /* nop */                                                   // 0x00194ca4: nop 
    v1 = v1 | v0;                                               // 0x00194ca8: or $v1, $v1, $v0
label_0x194cb0:
    at = 0x7000 << 16;                                          // 0x00194cb0: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x00194cb8: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x00194cc0: or $v0, $v0, $a1
    func_00193f40();  // 0x193e90                                // 0x00194cc4: jal 0x193e90
    v0 = 1;                                                     // 0x00194ccc: addiu $v0, $zero, 1
label_0x194cd0:
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00194cd4: lwc1 $f21, 4($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00194cd8: aver_u.h $w0, $w0, $w16
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00194cdc: lwc1 $f20, 0($sp)
    return;                                                     // 0x00194ce0: jr $ra
    sp = sp + 0x30;                                             // 0x00194ce4: addiu $sp, $sp, 0x30
}