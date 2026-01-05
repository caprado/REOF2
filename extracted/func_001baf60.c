void func_001baf60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001baf60: addiu $sp, $sp, -0x30
    a0 = 0x58;                                                  // 0x001baf64: addiu $a0, $zero, 0x58
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001baf6c: addu.qb $zero, $sp, $s1
    s0 = 0x31 << 16;                                            // 0x001baf74: lui $s0, 0x31
    func_001b7a70();  // 1b7a70                                // 0x001baf78: jal 0x1b7a70
    s0 = s0 + -0x7fb0;                                          // 0x001baf7c: addiu $s0, $s0, -0x7fb0
    if (v0 != 0) goto label_0x1bb04c;                           // 0x001baf80: bnez $v0, 0x1bb04c
    at = 0x31 << 16;                                            // 0x001baf84: lui $at, 0x31
    v1 = g_00308054;  // Global at 0x00308054                   // 0x001baf88: lw $v1, -0x7fac($at)
    if (v1 == 0) goto label_0x1bb04c;                           // 0x001baf8c: beqz $v1, 0x1bb04c
    /* nop */                                                   // 0x001baf90: nop 
    FPU_F1 = *(float*)((s0) + 0xc);  // Load float              // 0x001baf94: lwc1 $f1, 0xc($s0)
    v1 = 0x437f << 16;                                          // 0x001baf98: lui $v1, 0x437f
    /* move to FPU: $v1, $f2 */                                 // 0x001baf9c: mtc1 $v1, $f2
    v1 = 0x4f00 << 16;                                          // 0x001bafa0: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001bafa4: mtc1 $v1, $f0
    /* nop */                                                   // 0x001bafa8: nop 
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x001bafac: mul.s $f1, $f2, $f1
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001bafb0: c.ole.s $f0, $f1
    /* bc1t 0x1bafcc */                                         // 0x001bafb4: bc1t 0x1bafcc
    /* nop */                                                   // 0x001bafb8: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001bafbc: cvt.w.s $f1, $f1
    /* move from FPU: $s1, $f1 */                               // 0x001bafc0: mfc1 $s1, $f1
    goto label_0x1bafe4;                                        // 0x001bafc4: b 0x1bafe4
    /* nop */                                                   // 0x001bafc8: nop 
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001bafcc: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001bafd0: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001bafd4: cvt.w.s $f1, $f1
    /* move from FPU: $s1, $f1 */                               // 0x001bafd8: mfc1 $s1, $f1
    /* nop */                                                   // 0x001bafdc: nop 
    s1 = s1 | v1;                                               // 0x001bafe0: or $s1, $s1, $v1
label_0x1bafe4:
    if (s1 == 0) goto label_0x1bb04c;                           // 0x001bafe4: beqz $s1, 0x1bb04c
    a0 = 0x6c;                                                  // 0x001bafe8: addiu $a0, $zero, 0x6c
    func_001aefd0();  // 1aefd0                                // 0x001bafec: jal 0x1aefd0
    a0 = 0xd;                                                   // 0x001baff4: addiu $a0, $zero, 0xd
    func_001aefd0();  // 1aefd0                                // 0x001baff8: jal 0x1aefd0
    a0 = 0x5f;                                                  // 0x001bb000: addiu $a0, $zero, 0x5f
    func_001aefd0();  // 1aefd0                                // 0x001bb004: jal 0x1aefd0
    a1 = 5;                                                     // 0x001bb008: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001bb00c: addiu $a0, $zero, 0x60
    func_001aefd0();  // 1aefd0                                // 0x001bb010: jal 0x1aefd0
    v1 = g_00308058;  // Global at 0x00308058                   // 0x001bb018: lw $v1, 8($s0)
    v0 = s1 & 0xff;                                             // 0x001bb01c: andi $v0, $s1, 0xff
    v0 = v0 << 0x18;                                            // 0x001bb020: sll $v0, $v0, 0x18
    a0 = 4;                                                     // 0x001bb024: addiu $a0, $zero, 4
    a1 = 5;                                                     // 0x001bb028: addiu $a1, $zero, 5
    v0 = v1 | v0;                                               // 0x001bb034: or $v0, $v1, $v0
    func_001aea70();  // 1aea70                                // 0x001bb038: jal 0x1aea70
    g_0030806c = v0;  // Global at 0x0030806c                   // 0x001bb03c: sw $v0, 0x1c($s0)
    a0 = 0x31 << 16;                                            // 0x001bb040: lui $a0, 0x31
    func_001ab530();  // 1ab530                                // 0x001bb044: jal 0x1ab530
    a0 = a0 + -0x7f9c;                                          // 0x001bb048: addiu $a0, $a0, -0x7f9c
label_0x1bb04c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bb050: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bb054: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bb058: jr $ra
    sp = sp + 0x30;                                             // 0x001bb05c: addiu $sp, $sp, 0x30
}