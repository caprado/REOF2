/** @category graphics/init @status complete @author caprado */
void func_001b7ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b7ab0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001b7ab4: lui $at, 0x31
    v0 = g_003137aa;  // Global at 0x003137aa                   // 0x001b7abc: lbu $v0, 0x37aa($at)
    if (v0 < 0) goto label_0x1b7ad4;                            // 0x001b7ac0: bltz $v0, 0x1b7ad4
    v1 = (unsigned)v0 >> 1;                                     // 0x001b7ac4: srl $v1, $v0, 1
    /* move to FPU: $v0, $f0 */                                 // 0x001b7ac8: mtc1 $v0, $f0
    goto label_0x1b7aec;                                        // 0x001b7acc: b 0x1b7aec
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001b7ad0: cvt.s.w $f2, $f0
label_0x1b7ad4:
    v0 = v0 & 1;                                                // 0x001b7ad4: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x001b7ad8: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x001b7adc: mtc1 $v1, $f0
    /* nop */                                                   // 0x001b7ae0: nop 
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001b7ae4: cvt.s.w $f2, $f0
    /* FPU: add.s $f2, $f2, $f2 */                              // 0x001b7ae8: add.s $f2, $f2, $f2
label_0x1b7aec:
    v1 = 0x40e0 << 16;                                          // 0x001b7aec: lui $v1, 0x40e0
    v0 = 0x4380 << 16;                                          // 0x001b7af0: lui $v0, 0x4380
    /* move to FPU: $v1, $f1 */                                 // 0x001b7af4: mtc1 $v1, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x001b7af8: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b7afc: nop 
    /* FPU: div.s $f1, $f2, $f1 */                              // 0x001b7b00: div.s $f1, $f2, $f1
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x001b7b04: mul.s $f0, $f0, $f1
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b7b08: cvt.w.s $f0, $f0
    /* move from FPU: $a1, $f0 */                               // 0x001b7b0c: mfc1 $a1, $f0
    func_001ac8e0();  // 1ac8e0                                // 0x001b7b10: jal 0x1ac8e0
    a0 = -1;                                                    // 0x001b7b14: addiu $a0, $zero, -1
    func_001b8ff0();  // 1b8ff0                                // 0x001b7b18: jal 0x1b8ff0
    /* nop */                                                   // 0x001b7b1c: nop 
    return;                                                     // 0x001b7b24: jr $ra
    sp = sp + 0x10;                                             // 0x001b7b28: addiu $sp, $sp, 0x10
}