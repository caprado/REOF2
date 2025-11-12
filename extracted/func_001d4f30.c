void func_001d4f30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x170;                                           // 0x001d4f30: addiu $sp, $sp, -0x170
    v0 = -1;                                                    // 0x001d4f34: addiu $v0, $zero, -1
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d4f3c: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d4f48: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d4f54: addu.qb $zero, $sp, $s1
    if (s2 != v0) goto label_0x1d4f80;                          // 0x001d4f64: bne $s2, $v0, 0x1d4f80
    s2 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d4f6c: lw $s2, -0x7ae4($gp)
    if (s2 != v0) goto label_0x1d4f84;                          // 0x001d4f70: bne $s2, $v0, 0x1d4f84
    goto label_0x1d504c;                                        // 0x001d4f78: b 0x1d504c
label_0x1d4f80:
label_0x1d4f84:
    a2 = 1;                                                     // 0x001d4f88: addiu $a2, $zero, 1
    func_001d4a40();  // 0x1d4140                                // 0x001d4f8c: jal 0x1d4140
    if (v0 != 0) goto label_0x1d4fa4;                           // 0x001d4f94: bnez $v0, 0x1d4fa4
    a1 = 0x24 << 16;                                            // 0x001d4f98: lui $a1, 0x24
    goto label_0x1d504c;                                        // 0x001d4f9c: b 0x1d504c
label_0x1d4fa4:
    a2 = v0 + 0xf;                                              // 0x001d4fa4: addiu $a2, $v0, 0xf
    a0 = sp + 0x70;                                             // 0x001d4fa8: addiu $a0, $sp, 0x70
    func_0010a570();  // 0x10a4d8                                // 0x001d4fac: jal 0x10a4d8
    a1 = &str_00247388;  // "_N.NBD"                            // 0x001d4fb0: addiu $a1, $a1, 0x7388
    a1 = 0x24 << 16;                                            // 0x001d4fb4: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001d4fb8: addiu $a0, $sp, 0x70
    func_0010a990();  // 0x10a860                                // 0x001d4fbc: jal 0x10a860
    a1 = &str_00247398;  // "%03d%02d%02d.bin"                  // 0x001d4fc0: addiu $a1, $a1, 0x7398
    s4 = *(int32_t*)((gp) + -0x6234);                           // 0x001d4fc4: lw $s4, -0x6234($gp)
    a0 = sp + 0x70;                                             // 0x001d4fc8: addiu $a0, $sp, 0x70
    a2 = 1;                                                     // 0x001d4fcc: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d4fd4: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d5048;                           // 0x001d4fdc: blez $v0, 0x1d5048
    /* nop */                                                   // 0x001d4fe0: nop 
    v0 = (s2 < 0x1200) ? 1 : 0;                                 // 0x001d4fe4: slti $v0, $s2, 0x1200
    if (v0 != 0) goto label_0x1d5000;                           // 0x001d4fe8: bnez $v0, 0x1d5000
    at = (s2 < 0x1400) ? 1 : 0;                                 // 0x001d4ff0: slti $at, $s2, 0x1400
    if (at == 0) goto label_0x1d5004;                           // 0x001d4ff4: beqz $at, 0x1d5004
    v0 = (s2 < 0x1400) ? 1 : 0;                                 // 0x001d4ff8: slti $v0, $s2, 0x1400
    v1 = 1;                                                     // 0x001d4ffc: addiu $v1, $zero, 1
label_0x1d5000:
    v0 = (s2 < 0x1400) ? 1 : 0;                                 // 0x001d5000: slti $v0, $s2, 0x1400
label_0x1d5004:
    if (v0 != 0) goto label_0x1d5018;                           // 0x001d5004: bnez $v0, 0x1d5018
    at = (s2 < 0x1800) ? 1 : 0;                                 // 0x001d5008: slti $at, $s2, 0x1800
    if (at == 0) goto label_0x1d5018;                           // 0x001d500c: beqz $at, 0x1d5018
    /* nop */                                                   // 0x001d5010: nop 
    v1 = 2;                                                     // 0x001d5014: addiu $v1, $zero, 2
label_0x1d5018:
    if (v1 == 0) goto label_0x1d504c;                           // 0x001d5018: beqz $v1, 0x1d504c
    a0 = v1 & 0xff;                                             // 0x001d5020: andi $a0, $v1, 0xff
    func_001d5480();  // 0x1d5410                                // 0x001d5024: jal 0x1d5410
    a1 = s3 & 0xffff;                                           // 0x001d5028: andi $a1, $s3, 0xffff
    if (v0 == 0) goto label_0x1d5048;                           // 0x001d502c: beqz $v0, 0x1d5048
    a2 = s0 & 0xff;                                             // 0x001d5030: andi $a2, $s0, 0xff
    func_001aaa00();  // 0x1aa960                                // 0x001d503c: jal 0x1aa960
    a3 = v0 + 2;                                                // 0x001d5040: addiu $a3, $v0, 2
    s5 = 1;                                                     // 0x001d5044: addiu $s5, $zero, 1
label_0x1d5048:
label_0x1d504c:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d5050: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d5054: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d505c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d5060: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5064: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d5068: jr $ra
    sp = sp + 0x170;                                            // 0x001d506c: addiu $sp, $sp, 0x170
}