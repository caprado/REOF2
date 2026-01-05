/** @category audio/fade @status complete @author caprado */
void func_001ade90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001ade90: addiu $sp, $sp, -0x70
    at = 0x31 << 16;                                            // 0x001ade94: lui $at, 0x31
    a0 = 0xe;                                                   // 0x001ade9c: addiu $a0, $zero, 0xe
    /* FPU: subu.qb $zero, $sp, $s4 */                          // 0x001adea0: subu.qb $zero, $sp, $s4
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001adea8: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001adeb0: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001adeb4: swc1 $f20, 0($sp)
    func_001b7a70();  // 1b7a70                                // 0x001adeb8: jal 0x1b7a70
    g_003137df = 0;  // Global at 0x003137df                    // 0x001adebc: sb $zero, 0x37df($at)
    if (v0 != 0) goto label_0x1adf24;                           // 0x001adec0: bnez $v0, 0x1adf24
    s0 = 0x2b << 16;                                            // 0x001adec8: lui $s0, 0x2b
    goto label_0x1adf14;                                        // 0x001aded0: b 0x1adf14
    s0 = s0 + -0x5788;                                          // 0x001aded4: addiu $s0, $s0, -0x5788
label_0x1aded8:
    if (s0 == 0) goto label_0x1adf0c;                           // 0x001aded8: beqz $s0, 0x1adf0c
    /* nop */                                                   // 0x001adedc: nop 
    func_00131bb8();  // 131bb8                                // 0x001adee0: jal 0x131bb8
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001adee4: lw $a0, 0($s0)
    v1 = 1;                                                     // 0x001adee8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1adefc;                          // 0x001adeec: beq $v0, $v1, 0x1adefc
    v1 = 2;                                                     // 0x001adef0: addiu $v1, $zero, 2
    if (v0 != v1) goto label_0x1adf0c;                          // 0x001adef4: bne $v0, $v1, 0x1adf0c
    /* nop */                                                   // 0x001adef8: nop 
label_0x1adefc:
    v0 = 1;                                                     // 0x001adefc: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001adf00: lui $at, 0x31
    goto label_0x1adf20;                                        // 0x001adf04: b 0x1adf20
    g_003137df = v0;  // Global at 0x003137df                   // 0x001adf08: sb $v0, 0x37df($at)
label_0x1adf0c:
    s1 = s1 + 1;                                                // 0x001adf0c: addiu $s1, $s1, 1
    s0 = s0 + 4;                                                // 0x001adf10: addiu $s0, $s0, 4
label_0x1adf14:
    v0 = (s1 < 3) ? 1 : 0;                                      // 0x001adf14: slti $v0, $s1, 3
    if (v0 != 0) goto label_0x1aded8;                           // 0x001adf18: bnez $v0, 0x1aded8
    /* nop */                                                   // 0x001adf1c: nop 
label_0x1adf20:
label_0x1adf24:
    v1 = s4 << 1;                                               // 0x001adf24: sll $v1, $s4, 1
label_0x1adf28:
    v0 = 0x2b << 16;                                            // 0x001adf28: lui $v0, 0x2b
    v1 = v1 + s4;                                               // 0x001adf2c: addu $v1, $v1, $s4
    v0 = v0 + -0x57e0;                                          // 0x001adf30: addiu $v0, $v0, -0x57e0
    v1 = v1 << 3;                                               // 0x001adf34: sll $v1, $v1, 3
    s0 = v0 + v1;                                               // 0x001adf38: addu $s0, $v0, $v1
    v0 = g_002aa87c;  // Global at 0x002aa87c                   // 0x001adf3c: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x1ae068;                           // 0x001adf40: bnez $v0, 0x1ae068
    /* nop */                                                   // 0x001adf44: nop 
    FPU_F2 = *(float*)((s0) + 0xc);  // Load float              // 0x001adf48: lwc1 $f2, 0xc($s0)
    /* move to FPU: $zero, $f1 */                               // 0x001adf4c: mtc1 $zero, $f1
    /* nop */                                                   // 0x001adf50: nop 
    /* FPU: c.eq.s $f1, $f2 */                                  // 0x001adf54: c.eq.s $f1, $f2
    /* bc1t 0x1ae068 */                                         // 0x001adf58: bc1t 0x1ae068
    s2 = s0 + 0xc;                                              // 0x001adf5c: addiu $s2, $s0, 0xc
    FPU_F0 = *(float*)((s0) + 0x10);  // Load float             // 0x001adf60: lwc1 $f0, 0x10($s0)
    /* FPU: add.s $f20, $f0, $f2 */                             // 0x001adf64: add.s $f20, $f0, $f2
    /* FPU: c.olt.s $f20, $f1 */                                // 0x001adf68: c.olt.s $f20, $f1
    /* bc1f 0x1adf78 */                                         // 0x001adf6c: bc1f 0x1adf78
    s1 = s0 + 0x10;                                             // 0x001adf70: addiu $s1, $s0, 0x10
    /* FPU: mov.s $f20, $f1 */                                  // 0x001adf74: mov.s $f20, $f1
    v0 = 0x42fe << 16;                                          // 0x001adf78: lui $v0, 0x42fe
    v1 = g_002aa884;  // Global at 0x002aa884                   // 0x001adf7c: lw $v1, 8($s0)
    /* move to FPU: $v0, $f0 */                                 // 0x001adf80: mtc1 $v0, $f0
    /* nop */                                                   // 0x001adf84: nop 
    /* FPU: div.s $f2, $f20, $f0 */                             // 0x001adf88: div.s $f2, $f20, $f0
    /* move to FPU: $v1, $f0 */                                 // 0x001adf8c: mtc1 $v1, $f0
    /* nop */                                                   // 0x001adf90: nop 
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x001adf94: cvt.s.w $f1, $f0
    /* FPU: mul.s $f0, $f2, $f1 */                              // 0x001adf98: mul.s $f0, $f2, $f1
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001adf9c: cvt.w.s $f0, $f0
    /* move from FPU: $s3, $f0 */                               // 0x001adfa0: mfc1 $s3, $f0
    /* nop */                                                   // 0x001adfa4: nop 
    at = (v1 < s3) ? 1 : 0;                                     // 0x001adfa8: slt $at, $v1, $s3
    if (at == 0) goto label_0x1adfbc;                           // 0x001adfac: beqz $at, 0x1adfbc
    /* nop */                                                   // 0x001adfb0: nop 
    /* FPU: mov.s $f20, $f1 */                                  // 0x001adfb8: mov.s $f20, $f1
label_0x1adfbc:
    v0 = g_002aa880;  // Global at 0x002aa880                   // 0x001adfbc: lw $v0, 4($s0)
    if (s3 == v0) goto label_0x1ae00c;                          // 0x001adfc0: beq $s3, $v0, 0x1ae00c
    v0 = 0x2b << 16;                                            // 0x001adfc4: lui $v0, 0x2b
    v1 = s4 << 2;                                               // 0x001adfc8: sll $v1, $s4, 2
    v0 = v0 + -0x5788;                                          // 0x001adfcc: addiu $v0, $v0, -0x5788
    v1 = v0 + v1;                                               // 0x001adfd0: addu $v1, $v0, $v1
    a0 = g_0021bd00;  // Global at 0x0021bd00                   // 0x001adfd4: lw $a0, 0($v1)
    v0 = s3 & 0x7f;                                             // 0x001adfd8: andi $v0, $s3, 0x7f
    a1 = v0 << 2;                                               // 0x001adfdc: sll $a1, $v0, 2
    v0 = 0xa;                                                   // 0x001adfe0: addiu $v0, $zero, 0xa
    v1 = 0x22 << 16;                                            // 0x001adfe4: lui $v1, 0x22
    v1 = v1 + -0x4300;                                          // 0x001adfe8: addiu $v1, $v1, -0x4300
    v1 = v1 + a1;                                               // 0x001adfec: addu $v1, $v1, $a1
    v1 = g_0021bd00;  // Global at 0x0021bd00                   // 0x001adff0: lw $v1, 0($v1)
    /* divide: v1 / v0 -> hi:lo */                              // 0x001adff4: div $zero, $v1, $v0
    /* nop */                                                   // 0x001adff8: nop 
    /* nop */                                                   // 0x001adffc: nop 
    /* mflo $a1 */                                              // 0x001ae000
    func_00132478();  // 132478                                // 0x001ae004: jal 0x132478
    /* nop */                                                   // 0x001ae008: nop 
label_0x1ae00c:
    g_002aa880 = s3;  // Global at 0x002aa880                   // 0x001ae00c: sw $s3, 4($s0)
    *(float*)(s1) = FPU_F20;  // Store float                    // 0x001ae010: swc1 $f20, 0($s1)
    a0 = g_002aa890;  // Global at 0x002aa890                   // 0x001ae014: lw $a0, 0x14($s0)
    v1 = g_002aa880;  // Global at 0x002aa880                   // 0x001ae018: lw $v1, 4($s0)
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x001ae01c: slt $v0, $v1, $a0
    if (v0 != 0) goto label_0x1ae044;                           // 0x001ae020: bnez $v0, 0x1ae044
    at = (a0 < v1) ? 1 : 0;                                     // 0x001ae024: slt $at, $a0, $v1
    FPU_F1 = *(float*)(s2);  // Load float                      // 0x001ae028: lwc1 $f1, 0($s2)
    /* move to FPU: $zero, $f0 */                               // 0x001ae02c: mtc1 $zero, $f0
    /* nop */                                                   // 0x001ae030: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001ae034: c.ole.s $f1, $f0
    /* bc1f 0x1ae064 */                                         // 0x001ae038: bc1f 0x1ae064
    /* nop */                                                   // 0x001ae03c: nop 
    at = (a0 < v1) ? 1 : 0;                                     // 0x001ae040: slt $at, $a0, $v1
label_0x1ae044:
    if (at != 0) goto label_0x1ae068;                           // 0x001ae044: bnez $at, 0x1ae068
    /* nop */                                                   // 0x001ae048: nop 
    FPU_F1 = *(float*)(s2);  // Load float                      // 0x001ae04c: lwc1 $f1, 0($s2)
    /* move to FPU: $zero, $f0 */                               // 0x001ae050: mtc1 $zero, $f0
    /* nop */                                                   // 0x001ae054: nop 
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x001ae058: c.olt.s $f1, $f0
    /* bc1f 0x1ae068 */                                         // 0x001ae05c: bc1f 0x1ae068
    /* nop */                                                   // 0x001ae060: nop 
    g_002aa888 = 0;  // Global at 0x002aa888                    // 0x001ae064: sw $zero, 0($s2)
label_0x1ae068:
    s4 = s4 + 1;                                                // 0x001ae068: addiu $s4, $s4, 1
    v0 = (s4 < 3) ? 1 : 0;                                      // 0x001ae06c: slti $v0, $s4, 3
    if (v0 != 0) goto label_0x1adf28;                           // 0x001ae070: bnez $v0, 0x1adf28
    v1 = s4 << 1;                                               // 0x001ae074: sll $v1, $s4, 1
    func_0012bbb8();  // 12bbb8                                // 0x001ae078: jal 0x12bbb8
    /* nop */                                                   // 0x001ae07c: nop 
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001ae084: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w1, $w0, $w20 */                          // 0x001ae088: aver_u.h $w1, $w0, $w20
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x001ae08c: xori.b $w1, $w0, 0xb3
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001ae094: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001ae098: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001ae09c: jr $ra
    sp = sp + 0x70;                                             // 0x001ae0a0: addiu $sp, $sp, 0x70
}