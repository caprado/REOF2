void func_0017dde0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017dde0: addiu $sp, $sp, -0x20
    s0 = s2 + 0x400;                                            // 0x0017ddf0: addiu $s0, $s2, 0x400
    func_0017db20();  // 0x17d7b0                                // 0x0017de00: jal 0x17d7b0
    goto label_0x17de30;                                        // 0x0017de24: j 0x17de30
    sp = sp + 0x20;                                             // 0x0017de28: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017de2c: nop 
label_0x17de30:
    sp = sp + -0x20;                                            // 0x0017de30: addiu $sp, $sp, -0x20
    *(float*)((sp) + 0x18) = FPU_F20;  // Store float           // 0x0017de48: swc1 $f20, 0x18($sp)
    func_0017e0c8();  // 0x17e068                                // 0x0017de4c: jal 0x17e068
    FPU_F20 = *(float*)((a0) + 0x40);  // Load float            // 0x0017de50: lwc1 $f20, 0x40($a0)
    v1 = 1;                                                     // 0x0017de54: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x17de98;                          // 0x0017de58: bne $v0, $v1, 0x17de98
    a3 = 0x7fff << 16;                                          // 0x0017de60: lui $a3, 0x7fff
    a3 = a3 | 0xff80;                                           // 0x0017de64: ori $a3, $a3, 0xff80
label_0x17de68:
    a0 = a2 << 2;                                               // 0x0017de68: sll $a0, $a2, 2
    a2 = a2 + 1;                                                // 0x0017de6c: addiu $a2, $a2, 1
    v1 = a0 + s1;                                               // 0x0017de70: addu $v1, $a0, $s1
    a0 = a0 + s0;                                               // 0x0017de74: addu $a0, $a0, $s0
    v0 = *(int32_t*)(v1);                                       // 0x0017de78: lw $v0, 0($v1)
    a1 = (a2 < 0x100) ? 1 : 0;                                  // 0x0017de7c: slti $a1, $a2, 0x100
    v0 = v0 & a3;                                               // 0x0017de80: and $v0, $v0, $a3
    v0 = v0 << 1;                                               // 0x0017de84: sll $v0, $v0, 1
    if (a1 != 0) goto label_0x17de68;                           // 0x0017de88: bnez $a1, 0x17de68
    *(uint32_t*)(a0) = v0;                                      // 0x0017de8c: sw $v0, 0($a0)
    goto label_0x17df60;                                        // 0x0017de90: b 0x17df60
label_0x17de98:
    at = 0x4eff << 16;                                          // 0x0017de98: lui $at, 0x4eff
    at = at | 0xffff;                                           // 0x0017de9c: ori $at, $at, 0xffff
    /* move to FPU: $at, $f3 */                                 // 0x0017dea0: mtc1 $at, $f3
    at = 0x4b7f << 16;                                          // 0x0017dea4: lui $at, 0x4b7f
    at = at | 0xffff;                                           // 0x0017dea8: ori $at, $at, 0xffff
    /* move to FPU: $at, $f2 */                                 // 0x0017deac: mtc1 $at, $f2
    t0 = 1;                                                     // 0x0017deb0: addiu $t0, $zero, 1
    t1 = 0x8000 << 16;                                          // 0x0017deb4: lui $t1, 0x8000
label_0x17deb8:
    v0 = a2 << 2;                                               // 0x0017deb8: sll $v0, $a2, 2
    a2 = a2 + 1;                                                // 0x0017debc: addiu $a2, $a2, 1
    v1 = v0 + s1;                                               // 0x0017dec0: addu $v1, $v0, $s1
    a3 = (a2 < 0x100) ? 1 : 0;                                  // 0x0017dec4: slti $a3, $a2, 0x100
    a0 = *(int32_t*)(v1);                                       // 0x0017dec8: lw $a0, 0($v1)
    if (a0 != 0) goto label_0x17dedc;                           // 0x0017decc: bnez $a0, 0x17dedc
    a1 = v0 + s0;                                               // 0x0017ded0: addu $a1, $v0, $s0
    *(uint32_t*)(v1) = t0;                                      // 0x0017ded4: sw $t0, 0($v1)
label_0x17dedc:
    if (a0 < 0) goto label_0x17def8;                            // 0x0017dedc: bltz $a0, 0x17def8
    v1 = (unsigned)a0 >> 1;                                     // 0x0017dee0: srl $v1, $a0, 1
    /* move to FPU: $a0, $f0 */                                 // 0x0017dee4: mtc1 $a0, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0017dee8: cvt.s.w $f0, $f0
    goto label_0x17df10;                                        // 0x0017deec: b 0x17df10
    /* FPU: mul.s $f0, $f20, $f0 */                             // 0x0017def0: mul.s $f0, $f20, $f0
    /* nop */                                                   // 0x0017def4: nop 
label_0x17def8:
    v0 = a0 & 1;                                                // 0x0017def8: andi $v0, $a0, 1
    v0 = v0 | v1;                                               // 0x0017defc: or $v0, $v0, $v1
    /* move to FPU: $v0, $f0 */                                 // 0x0017df00: mtc1 $v0, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0017df04: cvt.s.w $f0, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x0017df08: add.s $f0, $f0, $f0
    /* FPU: mul.s $f0, $f20, $f0 */                             // 0x0017df0c: mul.s $f0, $f20, $f0
label_0x17df10:
    at = 0x4f00 << 16;                                          // 0x0017df10: lui $at, 0x4f00
    /* move to FPU: $at, $f1 */                                 // 0x0017df14: mtc1 $at, $f1
    /* nop */                                                   // 0x0017df18: nop 
    /* nop */                                                   // 0x0017df1c: nop 
    /* FPU: div.s $f0, $f0, $f3 */                              // 0x0017df20: div.s $f0, $f0, $f3
    /* nop */                                                   // 0x0017df24: nop 
    /* nop */                                                   // 0x0017df28: nop 
    /* FPU: div.s $f0, $f2, $f0 */                              // 0x0017df2c: div.s $f0, $f2, $f0
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x0017df30: c.ole.s $f1, $f0
    /* FPU: cvt.w.s $f4, $f0 */                                 // 0x0017df34: cvt.w.s $f4, $f0
    /* move from FPU: $v0, $f4 */                               // 0x0017df38: mfc1 $v0, $f4
    /* bc1f 0x17df54 */                                         // 0x0017df3c: bc1f 0x17df54
    /* nop */                                                   // 0x0017df40: nop 
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x0017df44: sub.s $f0, $f0, $f1
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x0017df48: cvt.w.s $f1, $f0
    /* move from FPU: $v0, $f1 */                               // 0x0017df4c: mfc1 $v0, $f1
    v0 = v0 | t1;                                               // 0x0017df50: or $v0, $v0, $t1
    if (a3 != 0) goto label_0x17deb8;                           // 0x0017df54: bnez $a3, 0x17deb8
    *(uint32_t*)(a1) = v0;                                      // 0x0017df58: sw $v0, 0($a1)
label_0x17df60:
    FPU_F20 = *(float*)((sp) + 0x18);  // Load float            // 0x0017df68: lwc1 $f20, 0x18($sp)
    return;                                                     // 0x0017df6c: jr $ra
    sp = sp + 0x20;                                             // 0x0017df70: addiu $sp, $sp, 0x20
}