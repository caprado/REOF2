void func_001ade50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 << 1;                                               // 0x001ade50: sll $v0, $a0, 1
    v1 = 0x2b << 16;                                            // 0x001ade54: lui $v1, 0x2b
    v0 = v0 + a0;                                               // 0x001ade58: addu $v0, $v0, $a0
    v1 = v1 + -0x57d4;                                          // 0x001ade5c: addiu $v1, $v1, -0x57d4
    a0 = v0 << 3;                                               // 0x001ade60: sll $a0, $v0, 3
    v1 = v1 + a0;                                               // 0x001ade64: addu $v1, $v1, $a0
    FPU_F1 = *(float*)(v1);  // Load float                      // 0x001ade68: lwc1 $f1, 0($v1)
    /* move to FPU: $zero, $f0 */                               // 0x001ade6c: mtc1 $zero, $f0
    /* nop */                                                   // 0x001ade70: nop 
    /* FPU: c.eq.s $f0, $f1 */                                  // 0x001ade74: c.eq.s $f0, $f1
    /* bc1f 0x1ade84 */                                         // 0x001ade78: bc1f 0x1ade84
    v0 = 1;                                                     // 0x001ade7c: addiu $v0, $zero, 1
    return;                                                     // 0x001ade84: jr $ra
    /* nop */                                                   // 0x001ade88: nop 
}