void func_001ccd50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_6e;
    
    sp = sp + -0x70;                                            // 0x001ccd50: addiu $sp, $sp, -0x70
    at = 0x32 << 16;                                            // 0x001ccd54: lui $at, 0x32
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ccd5c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ccd64: addu.qb $zero, $sp, $s1
    FPU_F0 = *(float*)((at) + 0x5914);  // Load float           // 0x001ccd6c: lwc1 $f0, 0x5914($at)
    at = 0x32 << 16;                                            // 0x001ccd70: lui $at, 0x32
    FPU_F1 = *(float*)((at) + 0x57e0);  // Load float           // 0x001ccd74: lwc1 $f1, 0x57e0($at)
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001ccd78: c.ole.s $f1, $f0
    /* bc1f 0x1ccdf0 */                                         // 0x001ccd7c: bc1f 0x1ccdf0
    /* nop */                                                   // 0x001ccd80: nop 
    /* FPU: sub.s $f2, $f0, $f1 */                              // 0x001ccd84: sub.s $f2, $f0, $f1
    v1 = 0x4416 << 16;                                          // 0x001ccd88: lui $v1, 0x4416
    v0 = 0x4f00 << 16;                                          // 0x001ccd8c: lui $v0, 0x4f00
    /* move to FPU: $v1, $f1 */                                 // 0x001ccd90: mtc1 $v1, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x001ccd94: mtc1 $v0, $f0
    /* nop */                                                   // 0x001ccd98: nop 
    /* FPU: mul.s $f1, $f1, $f2 */                              // 0x001ccd9c: mul.s $f1, $f1, $f2
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001ccda0: c.ole.s $f0, $f1
    /* bc1t 0x1ccdbc */                                         // 0x001ccda4: bc1t 0x1ccdbc
    /* nop */                                                   // 0x001ccda8: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ccdac: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ccdb0: mfc1 $v1, $f1
    goto label_0x1ccdd8;                                        // 0x001ccdb4: b 0x1ccdd8
    FPU_F0 = *(float*)((gp) + -0x7fd8);  // Load float          // 0x001ccdb8: lwc1 $f0, -0x7fd8($gp)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001ccdbc: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001ccdc0: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ccdc4: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ccdc8: mfc1 $v1, $f1
    /* nop */                                                   // 0x001ccdcc: nop 
    v1 = v1 | v0;                                               // 0x001ccdd0: or $v1, $v1, $v0
    FPU_F0 = *(float*)((gp) + -0x7fd8);  // Load float          // 0x001ccdd4: lwc1 $f0, -0x7fd8($gp)
label_0x1ccdd8:
    at = 0x32 << 16;                                            // 0x001ccdd8: lui $at, 0x32
    /* FPU: c.ole.s $f2, $f0 */                                 // 0x001ccddc: c.ole.s $f2, $f0
    /* bc1t 0x1ccdf0 */                                         // 0x001ccde0: bc1t 0x1ccdf0
    g_0032591c = v1;  // Global at 0x0032591c                   // 0x001ccde4: sw $v1, 0x591c($at)
    goto label_0x1ccfcc;                                        // 0x001ccde8: b 0x1ccfcc
    at = 0x32 << 16;                                            // 0x001ccdf0: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001ccdf4: lui $a0, 0x32
    s1 = g_003257d4;  // Global at 0x003257d4                   // 0x001ccdf8: lbu $s1, 0x57d4($at)
    func_001ce6e0();  // 1ce6e0                                // 0x001ccdfc: jal 0x1ce6e0
    a0 = a0 + 0x4f90;                                           // 0x001cce00: addiu $a0, $a0, 0x4f90
    v0 = s1 << 1;                                               // 0x001cce08: sll $v0, $s1, 1
    v1 = v0 + s1;                                               // 0x001cce0c: addu $v1, $v0, $s1
    v0 = 0x32 << 16;                                            // 0x001cce10: lui $v0, 0x32
    v1 = v1 << 3;                                               // 0x001cce14: sll $v1, $v1, 3
    v0 = v0 + -0x950;                                           // 0x001cce18: addiu $v0, $v0, -0x950
    func_001ce6e0();  // 1ce6e0                                // 0x001cce1c: jal 0x1ce6e0
    a0 = v0 + v1;                                               // 0x001cce20: addu $a0, $v0, $v1
    v1 = s1 << 4;                                               // 0x001cce24: sll $v1, $s1, 4
    a0 = 0x32 << 16;                                            // 0x001cce28: lui $a0, 0x32
    a1 = v1 - s1;                                               // 0x001cce2c: subu $a1, $v1, $s1
    a0 = a0 + 0x5844;                                           // 0x001cce30: addiu $a0, $a0, 0x5844
    v1 = 0x32 << 16;                                            // 0x001cce34: lui $v1, 0x32
    a1 = a1 << 2;                                               // 0x001cce38: sll $a1, $a1, 2
    v1 = v1 + 0x5848;                                           // 0x001cce3c: addiu $v1, $v1, 0x5848
    a0 = a0 + a1;                                               // 0x001cce40: addu $a0, $a0, $a1
    v1 = v1 + a1;                                               // 0x001cce44: addu $v1, $v1, $a1
    a0 = g_00325844;  // Global at 0x00325844                   // 0x001cce48: lw $a0, 0($a0)
    v1 = g_00325848;  // Global at 0x00325848                   // 0x001cce4c: lw $v1, 0($v1)
    v1 = a0 + v1;                                               // 0x001cce50: addu $v1, $a0, $v1
    at = (v1 < 8) ? 1 : 0;                                      // 0x001cce54: slti $at, $v1, 8
    if (at == 0) goto label_0x1ccfc8;                           // 0x001cce58: beqz $at, 0x1ccfc8
    at = (s0 < 0xc9) ? 1 : 0;                                   // 0x001cce5c: slti $at, $s0, 0xc9
    if (at != 0) goto label_0x1ccfc8;                           // 0x001cce60: bnez $at, 0x1ccfc8
    /* nop */                                                   // 0x001cce64: nop 
    at = (v0 < 0xc9) ? 1 : 0;                                   // 0x001cce68: slti $at, $v0, 0xc9
    if (at != 0) goto label_0x1ccfc8;                           // 0x001cce6c: bnez $at, 0x1ccfc8
    a0 = 0x32 << 16;                                            // 0x001cce70: lui $a0, 0x32
    a0 = a0 + 0x3f30;                                           // 0x001cce78: addiu $a0, $a0, 0x3f30
    func_001ce6d0();  // 1ce6d0                                // 0x001cce7c: jal 0x1ce6d0
    if (v0 == 0) goto label_0x1ccf18;                           // 0x001cce84: beqz $v0, 0x1ccf18
    a1 = 0x32 << 16;                                            // 0x001cce88: lui $a1, 0x32
    a0 = sp + 0x50;                                             // 0x001cce8c: addiu $a0, $sp, 0x50
    func_001ce6a0();  // 1ce6a0                                // 0x001cce90: jal 0x1ce6a0
    a1 = a1 + 0x3f30;                                           // 0x001cce94: addiu $a1, $a1, 0x3f30
    goto label_0x1ccf08;                                        // 0x001cce98: b 0x1ccf08
    a0 = sp + 0x50;                                             // 0x001cce9c: addiu $a0, $sp, 0x50
label_0x1ccea0:
    thunk_func_001ce800();  // 1ce800                          // 0x001ccea0: jal 0x1ce800
    a0 = sp + 0x50;                                             // 0x001ccea4: addiu $a0, $sp, 0x50
    s2 = v0 & 0xffff;                                           // 0x001ccea8: andi $s2, $v0, 0xffff
    a0 = sp + 0x50;                                             // 0x001cceac: addiu $a0, $sp, 0x50
    s3 = s2 & 0xfff;                                            // 0x001cceb0: andi $s3, $s2, 0xfff
    thunk_func_001ce8a0();  // 1ce8a0                          // 0x001cceb4: jal 0x1ce8a0
    v0 = s3 + 4;                                                // 0x001ccebc: addiu $v0, $s3, 4
    v0 = v0 + s1;                                               // 0x001ccec0: addu $v0, $v0, $s1
    at = (v0 < 0xc9) ? 1 : 0;                                   // 0x001ccec4: slti $at, $v0, 0xc9
    if (at == 0) goto label_0x1ccef0;                           // 0x001ccec8: beqz $at, 0x1ccef0
    v1 = s3 + 2;                                                // 0x001ccecc: addiu $v1, $s3, 2
    v0 = s2 >> 0xc;                                             // 0x001cced0: sra $v0, $s2, 0xc
    s1 = s1 + v1;                                               // 0x001cced4: addu $s1, $s1, $v1
    v1 = v0 & 0xf;                                              // 0x001cced8: andi $v1, $v0, 0xf
    v0 = 0xf;                                                   // 0x001ccedc: addiu $v0, $zero, 0xf
    if (v1 == v0) goto label_0x1ccf04;                          // 0x001ccee0: beq $v1, $v0, 0x1ccf04
    /* nop */                                                   // 0x001ccee4: nop 
    goto label_0x1ccf18;                                        // 0x001ccee8: b 0x1ccf18
    /* nop */                                                   // 0x001cceec: nop 
label_0x1ccef0:
    if (s1 != 0) goto label_0x1ccf18;                           // 0x001ccef0: bnez $s1, 0x1ccf18
    /* nop */                                                   // 0x001ccef4: nop 
    s0 = s3 + -0xc4;                                            // 0x001ccef8: addiu $s0, $s3, -0xc4
    goto label_0x1ccf18;                                        // 0x001ccefc: b 0x1ccf18
    s1 = 0xc6;                                                  // 0x001ccf00: addiu $s1, $zero, 0xc6
label_0x1ccf04:
    a0 = sp + 0x50;                                             // 0x001ccf04: addiu $a0, $sp, 0x50
label_0x1ccf08:
    func_001ce6c0();  // 1ce6c0                                // 0x001ccf08: jal 0x1ce6c0
    /* nop */                                                   // 0x001ccf0c: nop 
    if (v0 != 0) goto label_0x1ccea0;                           // 0x001ccf10: bnez $v0, 0x1ccea0
    /* nop */                                                   // 0x001ccf14: nop 
label_0x1ccf18:
    if (s1 == 0) goto label_0x1ccfc0;                           // 0x001ccf18: beqz $s1, 0x1ccfc0
    v0 = 1;                                                     // 0x001ccf1c: addiu $v0, $zero, 1
    if (s0 == 0) goto label_0x1ccf9c;                           // 0x001ccf20: beqz $s0, 0x1ccf9c
    at = 0x32 << 16;                                            // 0x001ccf24: lui $at, 0x32
    at = 0x32 << 16;                                            // 0x001ccf28: lui $at, 0x32
    a0 = g_00323f38;  // Global at 0x00323f38                   // 0x001ccf30: lw $a0, 0x3f38($at)
    func_001ce3b0();  // 1ce3b0                                // 0x001ccf34: jal 0x1ce3b0
    a2 = 0x50;                                                  // 0x001ccf38: addiu $a2, $zero, 0x50
    at = 0x32 << 16;                                            // 0x001ccf3c: lui $at, 0x32
    v0 = g_00323f3c;  // Global at 0x00323f3c                   // 0x001ccf40: lw $v0, 0x3f3c($at)
    at = 0x32 << 16;                                            // 0x001ccf44: lui $at, 0x32
    s2 = v0 - s1;                                               // 0x001ccf48: subu $s2, $v0, $s1
    v1 = g_00323f38;  // Global at 0x00323f38                   // 0x001ccf4c: lw $v1, 0x3f38($at)
    a1 = v1 + s1;                                               // 0x001ccf54: addu $a1, $v1, $s1
    func_00107b68();  // 107b68                                // 0x001ccf58: jal 0x107b68
    a0 = v1 + 2;                                                // 0x001ccf5c: addiu $a0, $v1, 2
    v1 = s2 + 2;                                                // 0x001ccf60: addiu $v1, $s2, 2
    at = 0x32 << 16;                                            // 0x001ccf64: lui $at, 0x32
    g_00323f3c = v1;  // Global at 0x00323f3c                   // 0x001ccf68: sw $v1, 0x3f3c($at)
    v0 = s0 & 0xfff;                                            // 0x001ccf6c: andi $v0, $s0, 0xfff
    at = 0x32 << 16;                                            // 0x001ccf70: lui $at, 0x32
    v0 = v0 | 0xf000;                                           // 0x001ccf74: ori $v0, $v0, 0xf000
    g_00323f34 = 0;  // Global at 0x00323f34                    // 0x001ccf78: sw $zero, 0x3f34($at)
    a1 = sp + 0x6e;                                             // 0x001ccf7c: addiu $a1, $sp, 0x6e
    at = 0x32 << 16;                                            // 0x001ccf80: lui $at, 0x32
    local_6e = v0;                                              // 0x001ccf84: sh $v0, 0x6e($sp)
    a0 = g_00323f38;  // Global at 0x00323f38                   // 0x001ccf88: lw $a0, 0x3f38($at)
    func_00107ab8();  // 107ab8                                // 0x001ccf8c: jal 0x107ab8
    a2 = 2;                                                     // 0x001ccf90: addiu $a2, $zero, 2
    goto label_0x1ccfbc;                                        // 0x001ccf94: b 0x1ccfbc
    /* nop */                                                   // 0x001ccf98: nop 
label_0x1ccf9c:
    a0 = g_00323f38;  // Global at 0x00323f38                   // 0x001ccfa0: lw $a0, 0x3f38($at)
    func_001ce3b0();  // 1ce3b0                                // 0x001ccfa4: jal 0x1ce3b0
    a2 = 0x40;                                                  // 0x001ccfa8: addiu $a2, $zero, 0x40
    a0 = 0x32 << 16;                                            // 0x001ccfac: lui $a0, 0x32
    func_001ce830();  // 1ce830                                // 0x001ccfb4: jal 0x1ce830
    a0 = a0 + 0x3f30;                                           // 0x001ccfb8: addiu $a0, $a0, 0x3f30
label_0x1ccfbc:
    v0 = 1;                                                     // 0x001ccfbc: addiu $v0, $zero, 1
label_0x1ccfc0:
    goto label_0x1ccfd0;                                        // 0x001ccfc0: b 0x1ccfd0
label_0x1ccfc8:
label_0x1ccfcc:
label_0x1ccfd0:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ccfd4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ccfd8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ccfdc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ccfe0: jr $ra
    sp = sp + 0x70;                                             // 0x001ccfe4: addiu $sp, $sp, 0x70
}