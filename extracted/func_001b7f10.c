/** @category audio/settings @status complete @author caprado */
void func_001b7f10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move to FPU: $a0, $f2 */                                 // 0x001b7f10: mtc1 $a0, $f2
    sp = sp + -0x20;                                            // 0x001b7f14: addiu $sp, $sp, -0x20
    v0 = 0x40e0 << 16;                                          // 0x001b7f18: lui $v0, 0x40e0
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001b7f20: cvt.s.w $f2, $f2
    /* move to FPU: $v0, $f1 */                                 // 0x001b7f24: mtc1 $v0, $f1
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001b7f28: swc1 $f20, 0($sp)
    /* FPU: div.s $f20, $f2, $f1 */                             // 0x001b7f2c: div.s $f20, $f2, $f1
    v0 = 0x4380 << 16;                                          // 0x001b7f30: lui $v0, 0x4380
    /* move to FPU: $v0, $f0 */                                 // 0x001b7f34: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b7f38: nop 
    /* FPU: mul.s $f0, $f0, $f20 */                             // 0x001b7f3c: mul.s $f0, $f0, $f20
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b7f40: cvt.w.s $f0, $f0
    /* move from FPU: $a1, $f0 */                               // 0x001b7f44: mfc1 $a1, $f0
    func_001ac8e0();  // 1ac8e0                                // 0x001b7f48: jal 0x1ac8e0
    a0 = -1;                                                    // 0x001b7f4c: addiu $a0, $zero, -1
    v0 = 0x42fe << 16;                                          // 0x001b7f50: lui $v0, 0x42fe
    /* move to FPU: $v0, $f0 */                                 // 0x001b7f54: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b7f58: nop 
    /* FPU: mul.s $f0, $f0, $f20 */                             // 0x001b7f5c: mul.s $f0, $f0, $f20
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b7f60: cvt.w.s $f0, $f0
    /* move from FPU: $a1, $f0 */                               // 0x001b7f64: mfc1 $a1, $f0
    func_001adab0();  // 1adab0                                // 0x001b7f68: jal 0x1adab0
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001b7f74: lwc1 $f20, 0($sp)
    return;                                                     // 0x001b7f78: jr $ra
    sp = sp + 0x20;                                             // 0x001b7f7c: addiu $sp, $sp, 0x20
}